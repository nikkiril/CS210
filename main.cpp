#include <iostream>
#include "InvestmentGrowth.h"
using namespace std;
#include <string>
#include <memory>
#include <iomanip>

int main() {

    //Declaring variables.
    double t_InvestmentAmt;
    double t_MonthlyDeposit;
    double t_AnnualInterest;
    int t_NumberOfYears;
    string menuInput;
    //Creating an object
    InvestmentGrowth myInvestment;


    cout <<setfill('*')<<setw(50)<<"*"<<endl;
    cout <<setfill('*')<<setw(19)<<"*";
    cout << setw(5) << " DATA INPUT ";
    cout << setfill('*') << setw(19) << "*";

    //Obtaining user input for program.
    cout <<"\nEnter the Initial Investment Amount: \t";
    cin >> t_InvestmentAmt;
    cout << "\nEnter the Monthly Deposit Amount: \t";
    cin >> t_MonthlyDeposit;
    cout << "\nEnter the Annual Interest Amount: \t";
    cin >> t_AnnualInterest;
    //Converting the percentage amount to a decimal value.q
    t_AnnualInterest = t_AnnualInterest / 100;
    cout << "\nEnter the Number of Years: \t";
    cin >> t_NumberOfYears;

    //I was unable to find a way for the program to recognize any button input and pull up the menu.
    cout << setw(5) << "\nPlease Enter 'C' to Continue...\t";
    cin >> menuInput;

    //Utilizing getters and setters to set the values of the object.
    myInvestment.SetInvestment(t_InvestmentAmt);
    myInvestment.SetMonthlyDeposit(t_MonthlyDeposit);
    myInvestment.SetAnnualInterest(t_AnnualInterest);
    myInvestment.SetNumberYears(t_NumberOfYears);

    //Displaying the interest tables.
    myInvestment.InterestTables();

    //While loop to check for when the user decides to quit the program.
    while (menuInput !="q" && menuInput != "Q") {
        myInvestment.DisplayMenu();
        cin >> menuInput;

        //menu navigation that allows for the user to change any of the objects values and redisplay the tables with new
        //value.
        if (menuInput == "1"){
            cout << "Enter New Investment Amount: \t";
            cin >> t_InvestmentAmt;

            //Resetting the investment amount of the object the the new value.
            myInvestment.SetInvestment(t_InvestmentAmt);
            myInvestment.InterestTables();
        }
        else if (menuInput == "2"){
            cout << "Enter New Monthly Deposit Amount: \t";
            cin >> t_MonthlyDeposit;

            //Resetting the monthly deposit amount to the new value.
            myInvestment.SetMonthlyDeposit(t_MonthlyDeposit);
            myInvestment.InterestTables();
        }
        else if (menuInput == "3"){
            cout << "Enter New Annual Interest Amount: \t";
            cin >> t_AnnualInterest;

            //Changing the user input percentage to a decimal then assigning it to the object.
            t_AnnualInterest = t_AnnualInterest / 100;
            myInvestment.SetAnnualInterest(t_AnnualInterest);
            myInvestment.InterestTables();
        }
        else if (menuInput == "4"){
            cout << "Enter New Number of Years: \t";
            cin >> t_NumberOfYears;

            //Resetting the number of years to the new value.
            myInvestment.SetNumberYears(t_NumberOfYears);
            myInvestment.InterestTables();
        }
        else if (menuInput == "Q" || menuInput == "q"){
            cout << "";
        }
        else{

            //Error message for any unintended input value.
            cout << "Error, invalid input." << endl;
        }



    }


}
