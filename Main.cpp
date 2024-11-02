// This is the main function of the Parking Ticket Simulator Project


#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
            // Test data from the table
    vector<int> minutesParked = { 45, 65, 120, 150, 180, 200, 240, 300, 350 };
    int minutesPurchased = 60;

            // Officer and car details (sample data)
    PoliceOfficer officer("Mark Smith", "B123456");
    ParkedCar car("Hyundai", "Sonata", "silver", "A12345");

    cout << "Testing ParkingTicket Generation:\n";
    cout << "---------------------------------\n";

            // Iterate through test cases
    for (size_t i = 0; i < minutesParked.size(); ++i) {
        car.setMinutesParked(minutesParked[i]);
        ParkingMeter meter(minutesPurchased);

        cout << "Test Case " << (i + 1) << ": Car Parked for " << minutesParked[i] << " minutes.\n";

        if (car.getMinutesParked() > meter.getMinutesPurchased()) {
            ParkingTicket ticket(car, meter, officer);
            ticket.printTicket();
        }
        else {
            cout << "No parking violation.\n";
        }

        cout << "---------------------------------\n";
    }

    return 0;
}
