#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
    list_of_visa;
}

void ForeignPassport::addVisa(const Visa& visa)
{
    list_of_visa.push_back(visa);
}
void ForeignPassport::showInfo() const
{
    Passport::showInfo();
    cout << "List of Visas:\n";
    for (int i = 0; i < list_of_visa.size(); i++)
    {
        /*cout << "Country: " << list_of_visa[i].getCountry() << endl;
        cout << "Visa Opening Date: " << list_of_visa[i].getVisaOpeningDate() << endl;
        cout << "Visa Closing Date: " << list_of_visa[i].getVisaClosingDate() << endl;*/
        list_of_visa[i].showVisa();
    }
}
