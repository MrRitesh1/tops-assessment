#include <stdio.h>
#include <string.h>

// 1)--------------------------------------
int epuality()
{
    printf("------------------------------------------------------------------------\n");
    printf("\n1) Epuality Funciton :-\n");
    char arr1[100], arr2[100];
    printf("Enter 1st string : ");
    gets(arr1);
    printf("\nEnter 2nd string : ");
    gets(arr2);
    if (strcmp(arr1, arr2) == 0)
        printf("\t- Strings are equal");
    else
        printf("\t- Strings are not equal");
    return 0;
}
// 2) -------------------------------------
int stringCopy()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n2) StringCopy Funciton :-\n");
    char sent[100], copy_sent[100];
    printf("Enter Senetence : ");
    gets(sent);
    printf("Your String : %s", sent);
    strcpy(copy_sent, sent);
    printf("\nString Copy : %s", copy_sent);
    return 0;

    return 0;
}
// 3) -----------------------------------
int concat()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n3) Concat Funciton :-\n");
    char name[20], surname[20];
    printf("Enter FastName : ");
    gets(name);
    printf("Enter LastName: ");
    gets(surname);
    strcat(name, surname);
    printf("%s", name, surname);
    return 0;
}
// 4) ---------------------------------
int length_string()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n4) Length of the string Funciton :-\n");
    char strl[100];
    printf("enter your string : ");
    scanf("%s", strl);
    printf("%s", strl);
    int lan = strlen(strl);
    printf("Your String Length : %d", lan);

    return 0;
}
// 5) ---------------------------------
int reverse()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n5) Reverse Funciton :-\n");
    char str[100];
    printf("Enter Your String : ");
    gets(str);
    printf("After the reverse of a string: %s ", strrev(str));

    return 0;
}
// 6) ----------------------------------
int palindrone()
{
    printf("\n------------------------------------------------------------------------\n");

    printf("\n6) Palindrone Funciton :-\n");
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
    return 0;
}
// 7) ----------------------------------
// int()
// {
//     printf("\n------------------------------------------------------------------------\n");

//     printf("\n7)   Funciton :-\n");

//     return 0;
// }
// 8) ---------------------------------
// int ()
// {    printf("\n------------------------------------------------------------------------\n");

//     printf("\n8) Funciton :-\n");

//     return 0;
// }

// 9) ---------------------------------
// int ()
// {    printf("\n------------------------------------------------------------------------\n");

//     printf("\n8)  Funciton :-\n");

//     return 0;
// }
// main ---------------------------------
int main()
{
    printf("Main Menu");
    printf("\n\t1.Equality");
    printf("\n\t2.String Copy");
    printf("\n\t3.Concat");
    printf("\n\t4.Show");
    printf("\n\t5.Reverse");
    printf("\n\t6.Palindrone");
    printf("\n\t7.Sub String");
    printf("\n\t8.Exit\n");

    // do
    // {
    //     int num;
    //     printf("\nEnter Your Choics :");
    //     scanf("%d", &num);
    // } while (num == fu)
    // {
    //     epuality();
    //     stringCopy();
    //     concat();
    // length_string();
    //     reverse();
    //     palindrone();
    // }

    int num;
    printf("\nEnter Your Choics :");
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
    default:
        printf("athar numbar are repited");
        break;
    }

    return 0;
}
