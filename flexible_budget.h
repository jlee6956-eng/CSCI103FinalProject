#ifndef FLEXIBLEBUDGET_H
#define FLEXIBLEBUDGET_H

#include "budget.h"

class FlexibleBudget : public Budget{
public:
    FlexibleBudget(double allowance, double savingsGoal, double leewayPercent);

    void setLeewayPercent(double percent);
    double getLeewayPercent() const;

    // Checks spending against allowance plus the percentage leeway
    bool isOverBudget() const override;

private:
    double leewayPercent_;
};

#endif