#include "Visa.h"

Visa::Visa()
{
    country = "Ukraine";
    Date open_visa;
    Date close_visa;
    visa_opening_date = open_visa;
    visa_closing_date = close_visa;
}

Visa::Visa(string country, Date visa_opening_date, Date visa_closing_date)
{
    this->country = country;
    this->visa_opening_date = visa_opening_date;
    this->visa_closing_date = visa_closing_date;
}

void Visa::setCountry(string country)
{
    this->country = country;
}

void Visa::setVisaOpeningDate(Date visa_opening_date)
{
    this->visa_opening_date = visa_opening_date;
}

void Visa::setVisaClosingDate(Date visa_closing_date)
{
    this->visa_closing_date = visa_closing_date;
}

string Visa::getCountry() const
{
    return country;
}

Date Visa::getVisaOpeningDate() const
{
    return visa_opening_date;
}

Date Visa::getVisaClosingDate() const
{
    return visa_closing_date;
}
void Visa::showVisa() const 
{
    cout << "country: " << country << endl;
    cout << "Date of open: " << visa_opening_date << endl;
    cout << "Date of close: " << visa_closing_date << endl;
}
