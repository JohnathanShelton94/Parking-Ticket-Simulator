// This is the main function of the Parking Ticket Simulator Project


#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include <iostream>
using namespace std;

int main() {
                // Test data
    ParkedCar car("Hyundai", "Sonata", "silver", "A12345", 120);  
    ParkingMeter meter(60);  
    PoliceOfficer officer("Mark Smith", "B123456");

    cout << "Testing ParkingTicket Generation:\n";
    if (car.getMinutesParked() > meter.getMinutesPurchased()) {
        ParkingTicket ticket(car, meter, officer);
        ticket.printTicket();
    }
    else {
        cout << "No parking violation.\n";
    }

    return 0;
}
