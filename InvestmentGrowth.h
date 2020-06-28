//
//

#ifndef PROJECT2_INVESTMENTGROWTH_H
#define PROJECT2_INVESTMENTGROWTH_H
#include <string>
using namespace std;

class InvestmentGrowth {

public:
    //Declaring the different functions.
    void InterestTables();
    void DisplayMenu();

    void SetInvestment(double investmentAmt);
    void SetMonthlyDeposit (double monthlyDeposit);
    void SetAnnualInterest (double annualInterest);
    void SetNumberYears (int numberYears);

    double GetInvestment();
    double GetMonthlyDeposit();
    double GetAnnualInterest();
    int GetNumberYears();


    //Private variables that do not need to be accessed directly by the user.
private:
    double m_InvestmentAmt;
    double m_MonthlyDeposit;
    double m_AnnualInterest;
    int m_NumberOfYears;
    double m_NewBalancee;
    double m_EarnedInterest;

};


#endif //PROJECT2_INVESTMENTGROWTH_H
