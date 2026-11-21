#include "budget.h"

#ifndef FIXEDBUDGET_H
#define FIXEDBUDGET_H


class FixedBudget : public Budget {
    private:
        int maxAllowance;
        bool warning;
        bool rejectedCounter;
        int max_rejected;

    public: 
        FixedBudget(allowan