//This is the ParkedCar header file for the Parking Ticket Simulator Project


#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar {
private:
    string make;
    string model;
    string color;
    string licenseNumber;
    int minutesParked;

public:
    ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln = "LICENSE", int mn = 0)
        : make(mk), model(ml), color(co), licenseNumber(ln), minutesParked(mn) {}

    string getMake() const { return make; }
    string getModel() const { return model; }
    string getColor() const { return color; }
    string getLicenseNumber() const { return licenseNumber; }
    int getMinutesParked() const { return minutesParked; }

    void setMake(string mk) { make = mk; }
    void setModel(string ml) { model = ml; }
    void setColor(string co) { color = co; }
    void setLicenseNumber(string ln) { licenseNumber = ln; }
    void setMinutesParked(int mn) { minutesParked = mn; }
};

#endif
