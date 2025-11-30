// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

float compute(char operation, int num1, int num2)
{
    float results;
    
    switch(operation) {
        
    case '+':
    results = num1 + num2;
    break;
    
    case '-':
    results = num1 - num2;
    break;
    
    case '/':
    results = num1 / num2;
    break;
    
    case '*':
    results = num1 * num2;
    break;
    
    case '%':
    results = num1 % num2;
    break;
    
    default:
    cout << "Operation Invalid." << endl;
    break;
}
    return results;
}
float computeScientific(string op, int number1, int number2)

{
    float results;
    if (op == "root")
{
    results = sqrt(number1);
}
    if(op == "exp")
    {
        results = pow(number1, number2);
    }
    if (op == "log")
    {
        results = log(number1);
    }
    return results;
}

void displayMenu(int &num1, int &num2, string opp = "")
{
    cout << "Enter number 1: ";
    cin >> num1;
    
    if(opp == "" || opp == "exp")
    {
        cout << "Enter number 2: ";
        cin >> num2;
    }
}

int main() {int number1, number2, menu;
    char operation;
    float results;
    string opp;
    
    cout << "_____________________________________" << endl;
    cout << "|\t                                |" << endl;
    cout << "| Blataditz Lite e-Commerce\t        |" << endl;
    cout << "| Your All-You-Need Gaming Store!   |\n";
    cout << "|\t                                |" << endl;
    cout << "_____________________________________" << endl;
    
    cout << "_____________________________________" << endl;
    cout << "|\t                                |" << endl;
    cout << "| 1. PC/Mac\t                        |" << endl;
    cout << "| 2. Playstation/Xbox\t            |\n";
    cout << "| 3. Handheld\t                    |\n";
    cout << "|\t                                |" << endl;
    cout << "_____________________________________" << endl;
    
    cout << "Select From Menu: ";
    cin >> menu;
    
    if (menu == 1)
    {
        displayMenu(number1, number2);
        cout << "Please Select (Desktop Unit, Peripherals, Package): ";
        cin >> operation;
        results = compute(operation, number1, number2);
    }
   
    if (menu == 2)
    {
        cout << "Please Select (Console Unit, Peripherals, Package): ";
        cin >> opp;
        displayMenu(number1, number2, opp);
        results = computeScientific(opp,number1,number2);
    }
    
    if (menu == 3)
    {
        cout << "Please Select (Mobile PCs, Gaming Phones, Peripherals): ";
        cin >> opp;
        displayMenu(number1, number2, opp);
        results = computeScientific(opp,number1,number2);
    }
    
    cout << "The result is: " << results;
    
    return 0;
}
