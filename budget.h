#ifndef BUDGET_H
#define BUDGET_H

class Budget {
    private:
    double monthlyAllowance;
    bool active;
    double balance;
    double totalSpending;

    public:
    Budget(double allowance);
    virtual void setAllowance(double allowamce);
    double getAllowance() const;
    void addExpense(double expense);
 