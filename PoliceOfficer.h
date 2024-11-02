//This is the PoliceOfficer header file for the Parking Ticket Simulator Project


#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
using namespace std;

class PoliceOfficer {
private:
    string name;
    string badgeNumber;

public:
    PoliceOfficer(string nm = "Officer", string bn = "Badge") : name(nm), badgeNumber(bn) {}

    string getName() const { return name; }
    string getBadgeNumber() const { return badgeNumber; }

    void setName(string nm) { name = nm; }
    void setBadgeNumber(string bn) { badgeNumber = bn; }
};

#endif
