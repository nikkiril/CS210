//
//

#include "InvestmentGrowth.h"
#include <iostream>
#include <iomanip>

void InvestmentGrowth::InterestTables(){
    //Initializing the balance to the initial investment.
    m_NewBalancee = m_InvestmentAmt;

    cout <<"\n" <<endl;
    cout <<setfill('=')<<setw(75)<<"="<<endl;
    cout << "\tBalance and Interest Without Additional Monthly Deposits" << endl;
    cout <<setfill('=')<<setw(75)<<"="<<endl;
    cout <<"Year \t\t Year End Balance \t\t Year End Earned Interest" <<endl;
    cout <<setfill('-')<<setw(75)<<"-"<<endl;

    for (int i = 0; i < m_NumberOfYears; i++){
        //Computing the earned interest and new balance for the earned interest table without added monthly deposits.
        m_EarnedInterest = (m_NewBalancee * m_AnnualInterest) * (i + 1);
        m_NewBalancee = m_NewBalancee + m_EarnedInterest;

        //outputting the investment table information.
        cout << fixed << showpoint << setprecision(2) << setfill(' ') << i + 1 << "\t\t\t$ " << m_NewBalancee << "\t\t\t$ " << m_EarnedInterest << endl;
    }
    cout <<"\n" <<endl;
    cout <<setfill('=')<<setw(75)<<"="<<endl;
    cout << "\tBalance and Interest With1 Additional Monthly Deposits" << endl;
    cout <<setfill('=')<<setw(75)<<"="<<endl;
    cout <<"Year \t\t Year End Balance \t\t Year End Earned Interest" <<endl;
    cout <<setfill('-')<<setw(75)<<"-"<<endl;

    //Resetting the balance to the initial investment amount.
    m_NewBalancee = m_InvestmentAmt;

    for (int i = 0; i < m_NumberOfYears; i++){
        //Computing the earned interest and new balance for the earned interest table with added monthly deposits.
        m_NewBalancee = m_NewBalancee + (m_MonthlyDeposit * (12 * (i + 1)));
        m_EarnedInterest = (m_NewBalancee * m_AnnualInterest) * (i + 1);
        m_NewBalancee = m_NewBalancee + m_EarnedInterest;

        //Ouputting the information to the table.
        cout << fixed << showpoint << setprecision(2) << i + 1 << "\t\t\t$ " << m_NewBalancee << "\t\t\t$ " << m_EarnedInterest << endl;

    }
}
// Function to display the menu to the user.
void InvestmentGrowth::DisplayMenu(){
    cout <<setfill('=')<<setw(75)<<"="<<endl;
    cout << "\t\t\tMENU" << endl;
    cout <<setfill('=')<<setw(75)<<"="<<endl;
    cout << "1 - Change Initial Investment Amount" << endl;
    cout << "2 - Change Monthly Deposit Amount" << endl;
    cout << "3 - Change Annual Interest Amount" << endl;
    cout << "4 - Change Number of Years" << endl;
    cout << "Q - Quit" << endl;
}

//Setters and Getters functions for manipulating the values of the object.
void InvestmentGrowth::SetInvestment(double investmentAmt){
    m_InvestmentAmt = investmentAmt;
}

void InvestmentGrowth::SetMonthlyDeposit(double monthlyDeposit) {
    m_MonthlyDeposit = monthlyDeposit;
}

void InvestmentGrowth::SetAnnualInterest(double annualInterest) {
    m_AnnualInterest = annualInterest;
}

void InvestmentGrowth::SetNumberYears(int numberYears) {
    m_NumberOfYears = numberYears;
}

double InvestmentGrowth::GetInvestment() {
    return m_InvestmentAmt;
}

double InvestmentGrowth::GetMonthlyDeposit() {
    return m_MonthlyDeposit;
}

double InvestmentGrowth::GetAnnualInterest() {
    return m_AnnualInterest;
}

int InvestmentGrowth::GetNumberYears() {
    return m_NumberOfYears;
}