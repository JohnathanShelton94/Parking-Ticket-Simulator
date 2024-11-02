//This is the ParkingTicket header file for the Parking Ticket Simulator Project


#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <string>
#include <iostream>

class ParkingTicket {
private:
    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer;
    double fine;

public:
    ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o);

    void calculateFine();
    void printTicket() const;
};

#endif
