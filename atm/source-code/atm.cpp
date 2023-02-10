#include <iostream>
#include <ctime>
using namespace std;
class Banking
{
public:
    string Account_Holder_Name;
    string Address;
    string Bank_Brance;
    long long int Account_Numer = 0;
    short Pin;
    int Current_Balance = 0;
    Banking()
    {
        cout << "\tEnter Account Holder Name : ";
        getline(cin, Account_Holder_Name);
        getline(cin, Account_Holder_Name);
        cout << "\tEnter Account Holder Address : ";
        getline(cin, Address);
        cout << "\tEnter Bank Brance : ";
        getline(cin, Bank_Brance);
        cout << "\tEnter Account Number : ";
        cin >> Account_Numer;
        cout << "\tEnter 4 Digit Pin : ";
        cin >> Pin;
        cout << "\n..................... ** ..................\n\n";
    }
    void print()
    {
        cout << "Account Holder Name : " << Account_Holder_Name << endl;
        cout << "            Address : " << Address << endl;
        cout << "    Branch Location : " << Bank_Brance << endl;
        cout << "     Account Number : " << Account_Numer << endl;
        cout << " Current Balance RS : " << Current_Balance << endl;
    }
    void Deposit()
    {
        cout << "\n:::::::::::::::::::::::: * ATM ACCOUNT DEPOSIT * ::::::::::::::::::::::: \n\n";
        int amount;
        print();
        cout << "Enter Deposit Amount : ";
        cin >> amount;
        Current_Balance += amount;
        cout << "Your New Available Balanced Amount is RS : " << Current_Balance << "\n\n\t\t\"SUCCESSFULLY DEPOSITED\"" << endl;
        cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";
    }
    void Withdrawl()
    {
    up:
        cout << "\n::::::::::::::::::::: * ATM ACCOUNT WITHDRAWL * ::::::::::::::::::::: \n\n";
        int amount;
        print();
        cout << "\nEnter Withdrawl Amount : ";
        cin >> amount;
        if (Current_Balance >= amount)
        {
            Current_Balance -= amount;
            cout << "Your New Available Balanced Amount is RS : " << Current_Balance << "\n\n\t\t\"SUCCESSFULLY DEPOSITED\"" << endl;
        }
        else
        {
            cout << "\n\t\tyour current amount is not enough !!\n";
            cout << "\t\t\t!! Sorry !!\n";
            goto up;
        }
        cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";
    }
};
int main()
{
    cout << "\n:::::::::::::::::::::::::: * tm For Multipale Users * :::::::::::::::::::::::::::::::::: \n";
    // cout << "*Atm For Multipale Users \n";
    int n;
    cout << "\n\nEnter Total Account Holder : ";
    cin >> n;
    cout << "\n:::::::::::::::::::::::::: * NEW USER REGISTRATION * :::::::::::::::::::::::::::::::::: \n";

    Banking user[n];
up:
    cout << "\n:::::::::::::::::::::::::: * WELCOME TO MY-CITY ATM * :::::::::::::::::::::::::::::::::: \n";
    time_t now = time(0);
    char *date_time = ctime(&now);
    cout << "\n\t\t   ...............................\n";
    cout << "\n\t\ttime now = " << date_time << endl;
    cout << "\t\t   ...............................\n";
    cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";
Screen:
    short Pin_in;
    char fun1;
    cout << "\n\tPress 1 For Access Account Using Pin : \n\t\t\t\tOR\n\tPress 0 For Get Help : \n";
    cout << "\nEnter Number : ";
    cin >> fun1;
    if (fun1 == '1')
    {
    pin:
        cout << "\n:::::::::::::::::::::::::: * ATM ACCOUNT ACCESS * :::::::::::::::::::::::::::::::::: \n";
        cout << "\n\tEnter Your Pin And Access Bank Account : ";
        cout << "\n\n\t\tEnter 4 Digit Pin : ";
        cin >> Pin_in;
        bool pinCurrect = false;
        for (int i = 0; i < n; i++)
        {
            if (Pin_in == user[i].Pin)
            {
            menu:
                pinCurrect = true;
                cout << "\n:::::::::::::::::::::::::: * ATM MAIN MENU SCREEN * :::::::::::::::::::::::::::::::::: \n";

                cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n\n";
                cout << "\tEnter [1] To Deposit Cash \n\tEnter [2] To Withdraw Cash \n\tEnter [3] To Balance Inquiry \n\tEnter [0] To Exit ATM \n\n";
                char key;
                cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY : ";
                cin >> key;
                if (key == '1')
                {
                    user[i].Deposit();
                }
                else if (key == '2')
                {
                    user[i].Withdrawl();
                }
                else if (key == '3')
                {
                    cout << "\n:::::::::::::::::::::::::: * ATM ACCOUNT BALANCE INQUIRY * ::::::::::::::::::::::::::::::: \n";

                    user[i].print();
                    cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";
                }
                else if (key == '0')
                {
                    goto exit;
                }
                else
                {
                    cout << "\n\t\"PLEASE ENTER VALID INPUT !!\"";
                    goto menu;
                }
                char rev;
                cout << "\n\tEnter Any Key To Banking \n\t\t\tOR\n\tEnter [0] Key To Exit\n\n\t\tEnter Key . . . ";
                cin >> rev;
                if (rev == '0')
                {
                    goto exit;
                }
                else
                {
                    goto pin;
                }
                break;
            }
        }
        if (pinCurrect == false)
        {
            cout << "\n::::::::::::::::::::::::::::: * INVALID PIN * ::::::::::::::::::::::::::::::::::::::: \n";
            cout << "\nYou Had Made Your Attempt Which Faild !!! No More Attemps Allowed\n\n\t\t\t !! Sorry !!";
            char continuee;
            cout << "\n\n\tPress Any Key To Continue. . . . .";
            cin >> continuee;
            cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n\n";
            goto Screen;
        }
    }
    else if (fun1 == '0')
    {
        cout << "\n:::::::::::::::::::::::::::: * ATM ACCOUNT STATUS * :::::::::::::::::::::::::::::::::: \n";

        cout << "\tYou Must Have The Correct Pin Number To Access This Account.\n\nSee Your Bank Representative For Assistance During Bank Opening Hours \n\n\t\t\"THANKS FOR , YOUR CHOICE TODAY !!\"\n";
    }
    else
    {
        cout << "\n\t\t\tInvalid Input !!\n\t\t\"Plase Enter Valid Input\"";
        goto up;
    }
exit:
    cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n\t\t\t**THANKING*YOU**\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";

    return 0;
}
