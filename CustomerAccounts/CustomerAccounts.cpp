// Ryan Bieker, CS 3060 001, Chapter 11 Programming Challenges, due 4/26/2022, 
//access a customer database menu, add, change, or display customers

#include <iostream>

using namespace std;

//customer var
struct customer
{
    string name;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    double bal = 0;
    string date;
};

void menu(int custNum, customer customerArr[20]);
void newData(customer customerArr[20], int custNum);
void changeData(customer customerArr[20], int custNum);
void displayAllData(customer customerArr[20], int custNum);

int main()
{
    //initialize customer num and array
    int custNum = -1;
    customer customerArr[20];

    //start program
    menu(custNum, customerArr);
}

//menu
void menu(int custNum, customer customerArr[20])
{
    int menu;

    //display menu options and get user input
    cout << "1. Enter new account information\n2. Change account information\n";
    cout << "3. Display all account information\n4. Exit the program\n\nEnter your choice: \n";
    cin >> menu;

    //main menu
    switch (menu)
    {
    case 1:
        newData(customerArr, custNum);
        break;
    case 2:
        changeData(customerArr, custNum);
        break;
    case 3:
        displayAllData(customerArr, custNum);
        break;
    case 4:
        exit(0);
        break;
    }
}

//adds new customer data
void newData(customer customerArr[20], int custNum)
{
    custNum++;

    cout << "Customer name: ";
    cin >> customerArr[custNum].name;
    cout << "Customer address: ";
    cin >> customerArr[custNum].address;
    cout << "City: ";
    cin >> customerArr[custNum].city;
    cout << "State: ";
    cin >> customerArr[custNum].state;
    cout << "ZIP code: ";
    cin >> customerArr[custNum].zip;
    cout << "Telephone: ";
    cin >> customerArr[custNum].phone;
    cout << "Account balance: ";
    cin >> customerArr[custNum].bal;
    cout << "Date of last payment: ";
    cin >> customerArr[custNum].date;

    cout << "\nYou have entered information for customer number: " << custNum << endl;
    menu(custNum, customerArr);
}

//user input customer number, dispalys data for customer and asks for change
void changeData(customer customerArr[20], int custNum)
{
    int changeNum;

    cout << "Customer number: ";
    cin >> changeNum;

    cout << customerArr[changeNum].name << endl << customerArr[changeNum].address << endl;
    cout << customerArr[changeNum].city << endl << customerArr[changeNum].state << endl;
    cout << customerArr[changeNum].zip << endl << customerArr[changeNum].phone << endl;
    cout << customerArr[changeNum].bal << endl << customerArr[changeNum].date << endl << endl;

    cout << "Customer name: ";
    cin >> customerArr[custNum].name;
    cout << "Customer address: ";
    cin >> customerArr[custNum].address;
    cout << "City: ";
    cin >> customerArr[custNum].city;
    cout << "State: ";
    cin >> customerArr[custNum].state;
    cout << "ZIP code: ";
    cin >> customerArr[custNum].zip;
    cout << "Telephone: ";
    cin >> customerArr[custNum].phone;
    cout << "Account balance: ";
    cin >> customerArr[custNum].bal;
    cout << "Date of last payment: ";
    cin >> customerArr[custNum].date;

    menu(custNum, customerArr);
}

//display all customers data
void displayAllData(customer customerArr[20], int custNum)
{
    for (int i = 0; i < 20; i++)
    {
        cout << customerArr[i].name << endl << customerArr[i].address << endl;
        cout << customerArr[i].city << endl << customerArr[i].state << endl;
        cout << customerArr[i].zip << endl << customerArr[i].phone << endl;
        cout << customerArr[i].bal << endl << customerArr[i].date << endl << endl;
    }

    //checks for enter
    cout << "Press enter to continue...";
    cin.ignore();
    cin.ignore();
    menu(custNum, customerArr);
}