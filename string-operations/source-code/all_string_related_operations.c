#include <stdio.h>
#include <string.h>

// 1)----------------------------------------------------------------------------------------------
int epuality()
{
    printf("------------------------------------------------------------------------\n");
    printf("\n1) Epuality Funciton :-\n");
    char arr1[100], arr2[100];
    printf("Enter 1st string : ");
    scanf(" %s", arr1);
    printf("Enter 2nd string : ");
    scanf(" %s", arr2);
    if (strcmp(arr1, arr2) == 0)
        printf("\n\t- Strings are equal");
    else
        printf("\n\t- Strings are not equal");
    printf("\n------------------------------------------------------------------------\n");
    return 0;
}
// 2) ------------------------------------------------------------------------------------------------
int stringCopy()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n2) StringCopy Funciton :-\n");
    char sent[100], copy_sent[100];
    printf("Enter Senetence : ");
    scanf(" %s", sent);
    printf("Your String : %s", sent);
    strcpy(copy_sent, sent);
    printf("\t\n\tString Copy : %s", copy_sent);
    printf("\n------------------------------------------------------------------------\n");

    return 0;
}
// 3) ------------------------------------------------------------------------------------------------
int concat()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n3) Concat Funciton :-\n");
    char name[20];
    char surname[20];
    printf("Enter FastName : ");
    scanf(" %s", name);
    printf("Enter LastName: ");
    scanf(" %s", surname);
    strcat(name, surname);
    printf("\t\n\tYour Concat String : %s", name, surname);
    printf("\n------------------------------------------------------------------------\n");

    return 0;
}
// 4) ---------------------------------------------------------------------------------------------------
int length_string()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n4) Length of the string Funciton :-\n");
    char strl[100];
    printf("enter your string : ");
    scanf("%s", strl);
    printf(" Your String : %s", strl);
    int lan = strlen(strl);
    printf("\t\n\tYour String Length : %d", lan);
    printf("\n------------------------------------------------------------------------\n");

    return 0;
}
// 5) -------------------------------------------------------------------------------------------------------
int reverse()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n5) Reverse Funciton :-\n");
    char str[100];
    printf("Enter Your String : ");
    scanf(" %s", str);
    strrev(str);
    printf("\t\n\tAfter the reverse of a string: %s ", str);
    printf("\n------------------------------------------------------------------------\n");

    return 0;
}
// 6) --------------------------------------------------------------------------------------------------------
int palindrone()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n6) Palindrone Funciton :-\n");
    int n, r, sum = 0, temp;
    printf("enter the number = ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("\n\tpalindrome number ");
    else
        printf("\n\tnot palindrome");
    printf("\n------------------------------------------------------------------------\n");

    return 0;
}
// 7) --------------------------------------------------------------------------------------------------------
int srequency_character_s_string()
{
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }

    printf("\tFrequency of %c = %d", ch, count);
    printf("\n------------------------------------------------------------------------\n");

    return 0;
}
// 8) ---------------------------------------------------------------------------------------------------------
int number_blank_spaces_vowels_consonants_digits()
{

    char line[150];
    int vowels, consonant, digit, space;

    // initialize all variables to 0
    vowels = consonant = digit = space = 0;

    // get full line of string input
    printf("Enter a line of string: ");
    scanf(" %s", line, sizeof(line), stdin);

    // loop through each character of the string
    for (int i = 0; line[i] != '\0'; ++i)
    {

        // convert character to lowercase
        line[i] = tolower(line[i]);

        // check if the character is a vowel
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u')
        {

            // increment value of vowels by 1
            ++vowels;
        }

        // if it is not a vowel and if it is an alphabet, it is a consonant
        else if ((line[i] >= 'a' && line[i] <= 'z'))
        {
            ++consonant;
        }

        // check if the character is a digit
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        }

        // check if the character is an empty space
        else if (line[i] == ' ')
        {
            ++space;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    printf("\n------------------------------------------------------------------------\n");
    return 0;
}

// main -----------------------------------------------------------------------------------------------------------
int main()
{
    printf("\n------------------------------------------------------------------------\n");
    printf("\t---\t\t\t  Main Menu  \t\t\t---");
    printf("\n------------------------------------------------------------------------\n");
    printf("\n\t1.Equality");
    printf("\n\t2.String Copy");
    printf("\n\t3.Concat");
    printf("\n\t4.length_string");
    printf("\n\t5.Reverse");
    printf("\n\t6.Palindrone");
    printf("\n\t7.srequency_character_s_string");
    printf("\n\t8.number_blank_spaces_vowels_consonants_digits");
    printf("\n\t0.Exit");
    printf("\n------------------------------------------------------------------------\n");

    int num;
    while (num != 0)
    {
        printf("\n---Usar info Functionality Access By 1 to 8 and 0 Numbar are Exit---");
        printf("\nEnter Your Choics : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            epuality();
            break;
        case 2:
            stringCopy();
            break;
        case 3:
            concat();
            break;
        case 4:
            length_string();
            break;
        case 5:
            reverse();
            break;
        case 6:
            palindrone();
            break;
        case 7:
            srequency_character_s_string();
            break;
        case 8:
            number_blank_spaces_vowels_consonants_digits();
            break;
        default:
            printf("\n------------------------------------------------------------------------\n");
            printf("\t---\t\t\tThanku\t\t\t ---");
            printf("\n------------------------------------------------------------------------\n");
            break;
        }
    }
    return 0;
}
