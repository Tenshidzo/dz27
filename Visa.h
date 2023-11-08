#pragma once
#include <string>
#include "Date.h"
class Visa
{
protected:
	string country;
	Date visa_opening_date;
	Date visa_closing_date;
public:
	Visa();
	Visa(string country, Date visa_opening_date, Date visa_closing_date);

	void setCountry(string country);
	void setVisaOpeningDate(Date visa_opening_date);
	void setVisaClosingDate(Date visa_closing_date);

	string getCountry() const;
	Date getVisaOpeningDate() const;
	Date getVisaClosingDate() const;

	void showVisa() const;
};

