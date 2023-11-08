#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>
class ForeignPassport :
    public Passport
{
protected:
    vector<Visa> list_of_visa;
public:
    ForeignPassport();
    void addVisa(const Visa& visa);
    void showInfo() const;
};

