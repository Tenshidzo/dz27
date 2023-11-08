#include "Passport.h"

Passport::Passport()
{
    series = 0l;
    number = 0l;
    second_name = "Undefine";
    name = "Undefine";
    Date birth_day;
    Date issue;
    date_of_birth = birth_day;
    place_of_birth = "Undefine";
    date_of_issue = issue;
    authority = "Undefine";
    third_name = "Undefine";
    registration = "Undefine";
}

Passport::Passport(long series, long number, string second_name, string name, Date date_of_birth, string place_of_birth, Date date_of_issue, string authority, string third_name, string registration)
{
    this->series = series;
    this->number = number;
    this->second_name = second_name;
    this->name = name;
    this->date_of_birth = date_of_birth;
    this->place_of_birth = place_of_birth;
    this->date_of_issue = date_of_issue;
    this->authority = authority;
    this->third_name = third_name;
    this->registration = registration;
}

void Passport::setSeries(long series)
{
    this->series = series;
}

void Passport::setNumber(long number)
{
    this->number = number;
}

void Passport::setSecondName(string second_name)
{
    this->second_name = second_name;
}

void Passport::setName(string name)
{
    this->name = name;
}

void Passport::setDateOfBirth(Date date_of_birth)
{
    this->date_of_birth = date_of_birth;
}

void Passport::setPlaceOfBirth(string place_of_birth)
{
    this->place_of_birth = place_of_birth;
}

void Passport::setDateOfIssue(Date date_of_issue)
{
    this->date_of_issue = date_of_issue;
}

void Passport::setAuthority(string authority)
{
    this->authority = authority;
}

void Passport::setThirdName(string third_name)
{
    this->third_name = third_name;
}

void Passport::setRegistration(string registration)
{
    this->registration = registration;
}

long Passport::getSeries() const
{
    return series;
}

long Passport::getNumber() const
{
    return number;
}

string Passport::getSecondName() const
{
    return second_name;
}

string Passport::getName() const
{
    return name;
}

Date Passport::getDateOfBirth() const
{
    return date_of_birth;
}

string Passport::getPlaceOfBirth() const
{
    return place_of_birth;
}

Date Passport::getDateOfIssue() const
{
    return date_of_issue;
}

string Passport::getAuthority() const
{
    return authority;
}

string Passport::getThirdName() const
{
    return third_name;
}

string Passport::getRegistration() const
{
    return registration;
}

void Passport::showInfo() const
{
    cout << "Passport: \n\n";
    cout << "Series: " << series << endl;
    cout << "Number: "<<number << endl;
    cout << "Second_name: "<<second_name << endl;
    cout << "Name: " << name << endl;
    cout << "Third Name: " << third_name << endl;
    cout << "Date of birth: " << date_of_birth << endl;
    cout << "Place of birth: " << place_of_birth << endl;
    cout << "Date of issue: " << date_of_issue << endl;
   cout << "Authority: " << authority << endl;
    
    cout << "Registration: " << registration << endl ;
}
