#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Car{
private:
    string licencePlate;
    string owner;
public:
    Car(string lp, string o) : licencePlate(lp), owner(o) {}

    string getLicencePlate() const {
        return licencePlate;
    }

    void display() const {
        cout << "Licence Plate: " << licencePlate << ", Owner: " << owner << endl;
    }
};
class ParkingLot {
private:
    vector<Car> parkedCars;
    vector<bool> bookingStatus;
    int capacity;
public:
    ParkingLot(int cap) : capacity(cap), bookingStatus(cap, false) {}
    bool parkCar(const Car& car) {
        for (int i = 0; i < capacity; ++i) {
            if (!bookingStatus[i]) {
                parkedCars.push_back(car);
                bookingStatus[i] = true;
                return true;
            }
        }
        cout << "Parking lot is full!" << endl;
        return false;
    }
    bool bookSpot(int spot) {
        if (spot >= 0 && spot < capacity) {
            if (!bookingStatus[spot]) {
                bookingStatus[spot] = true;
                cout << "Spot " << spot << " is booked." << endl;
                return true;
            } else {
                cout << "Spot " << spot << " is already booked." << endl;
                return false;
            }
        } else {
            cout << "Invalid spot number!" << endl;
            return false;
        }
    }
    void displayParkedCars() const {
        cout << "Parked Cars: \n";
        for (const auto& car : parkedCars) {
            car.display();
        }
    }
    void displayBookingStatus() const {
        cout << "Booking Status:\n";
        for (int i = 0; i < capacity; ++i) {
            cout << "Spot " << i << ": " << (bookingStatus[i] ? "Booked" : "Available") << endl;
        }
    }
};
int main() {
    ParkingLot myParkingLot(6);
    Car car1("BC123", "Sanjay Gore");
    Car car2("YZ456", "Janvi Manse");
   // myParkingLot.bookSpot(0);
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.displayParkedCars();
    myParkingLot.displayBookingStatus();

    return 0;
}
