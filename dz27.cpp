#include "Passport.h"
#include <vector>
#include <ctime>
#include "ForeignPassport.h"
long randSeries(Passport& passport) {
    srand(time(0));
    long x = 0l;
    x= abs(rand() % (10000000000000 - 1000000000000 + 1) + 1000000000000);
    vector<long> arr;
    while (true) {
        for (int i = 0; i < arr.size(); i++) {
            if (x == arr[i]) {
                x = abs(rand() % (9999999999999 - 1000000000000 + 1) + 1000000000000);
                i = -1;  
            }
        }
        arr.push_back(x);
        passport.setSeries(x);
        break;
    }
    return x;
}
long randNumber(Passport& passport) {
    srand(time(0));
    long x = rand() % (9999999999 - 1000000000 + 1) + 1000000000;
    vector<long> arr;
    while (true) {
        for (int i = 0; i < arr.size(); i++) {
            if (x == arr[i]) {
                x = rand() % (9999999999 - 1000000000 + 1);
                i = -1;
            }
        }
        arr.push_back(x);
        passport.setNumber(x);
        break;
    }
    return x;
}
int main()
{
    srand(time(0));
    Date birth(2008, 6, 24);
    Date issue(2023, 7, 23);
    Passport a;
    Passport b;
    randSeries(b);
    randNumber(b);
    b.setSecondName("Stizhakov");
    b.setName("Bohdan");
    b.setDateOfBirth(birth);
    b.setPlaceOfBirth("Kharkiv");
    b.setDateOfIssue(issue);
    b.setAuthority("6316");
    b.setThirdName("Ivanovich");
    b.setRegistration("Lyubotin");
    b.showInfo();
    cout << "----------------\n";
    a.showInfo();
    cout << "---------------------------------------\n";
    ForeignPassport c;
    randSeries(c);
    randNumber(c);
    c.setSecondName("Stizhakov");
    c.setName("Bohdan");
    c.setDateOfBirth(birth);
    c.setPlaceOfBirth("Kharkiv");
    c.setDateOfIssue(issue);
    c.setAuthority("6316");
    c.setThirdName("Ivanovich");
    c.setRegistration("Lyubotin");
    Date open_visa(2020, 11, 12);
    Date close_visa(2023, 9, 3 );
    Visa visa1("Japan", open_visa, close_visa);
    Visa visa2;
    c.addVisa(visa1);
    c.addVisa(visa2);
    visa1.showVisa();
    visa2.showVisa();
    cout << "---------------------\n";
    c.showInfo();
}
