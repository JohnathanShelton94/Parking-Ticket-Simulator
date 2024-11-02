//This is the ParkingTicket implementation file for the Parking Ticket Simulator Project


#include "ParkingTicket.h"
#include <cmath>
#include <iostream>
using namespace std;

ParkingTicket::ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o)
    : car(c), meter(m), officer(o), fine(0) {
    calculateFine();
}

void ParkingTicket::calculateFine() {
    int overtimeMinutes = car.getMinutesParked() - meter.getMinutesPurchased();
    if (overtimeMinutes > 0) {
        fine = 25.0 + 10.0 * ceil((overtimeMinutes - 60) / 60.0);
    }
}

void ParkingTicket::printTicket() const {
    cout << "*** Parking Ticket ***\n";
    cout << "Officer " << officer.getName() << " Badge Number: " << officer.getBadgeNumber() << endl;
    cout << "Vehicle License Number: " << car.getLicenseNumber() << endl;
    cout << "Make: " << car.getMake() << " Model: " << car.getModel() << " Color: " << car.getColor() << endl;
    cout << "Meter Minutes: " << meter.getMinutesPurchased() << " Minutes Parked: " << car.getMinutesParked() << endl;
    cout << "Parking Fine: $" << fine << endl;
}
