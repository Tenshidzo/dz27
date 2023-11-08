#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Passport
{
protected:
	long series;
	long number;
	string second_name;
	string name;
	Date date_of_birth;
	string place_of_birth;
	Date date_of_issue;
	string authority;
private:
	string third_name;
	string registration;
public:
	Passport();
	Passport(long series, long number, string second_name, string name, Date date_of_birth,
		string place_of_birth, Date date_of_issue, string authority, string third_name,
		string registration);

	void setSeries(long series);
	void setNumber(long number);
	void setSecondName(string second_name);
	void setName(string name);
	void setDateOfBirth(Date date_of_birth);
	void setPlaceOfBirth(string place_of_birth);
	void setDateOfIssue(Date date_of_issue);
	void setAuthority(string authority);
	void setThirdName(string third_name);
	void setRegistration(string registration);
	
	long getSeries()const;
	long getNumber() const;
	string getSecondName() const;
	string getName() const;
	Date getDateOfBirth() const;
	string getPlaceOfBirth() const;
	Date getDateOfIssue() const;
	string getAuthority() const;
	string getThirdName() const;
	string getRegistration() const;

	void showInfo() const;
};

