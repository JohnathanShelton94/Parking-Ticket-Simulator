//This is the ParkingMeter header file for the Parking Ticket Simulator Project


#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
    int minutesPurchased;

public:
    ParkingMeter(int minutes = 0) : minutesPurchased(minutes) {}

    int getMinutesPurchased() const { return minutesPurchased; }
    void setMinutesPurchased(int minutes) { minutesPurchased = minutes; }
};

#endif
