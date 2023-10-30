#include <iostream>
#include <string>
using namespace std;

class parkVehicle
{
private:
    int bus_slot = 2, car_slot = 5, bike_slot = 5, auto_slot = 5;
    int earnings = 0, bus_count = 0, car_count = 0, bike_count = 0, auto_count = 0;
    string ownerName, parkingDate, vehicleNumber, vehicleFee;

public:
    void park_vehicle();
    void check_status();
    void bike_park();
    void auto_park();
    void car_park();
    void bus_park();
    void print_receipt();
};
// This function will print parking receipt
void parkVehicle::print_receipt()
{
    cout << "\n       Here is your receipt!\n";
    cout << "***************************************\n";
    cout << "Vehicle owner name: " << ownerName << endl;
    cout << "Vehicle number: " << vehicleNumber << endl;
    cout << "Vehicle parking date: " << parkingDate << endl;
    cout << "Vehicle parking fees: " << vehicleFee << endl;
    cout << "***************************************\n";
}
// this function will handle bus parking operations
void parkVehicle::bus_park()
{
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, ownerName);

    cout << "Enter vehicle number: ";
    getline(cin, vehicleNumber);

    cout << "Enter parking date: ";
    getline(cin, parkingDate);

    vehicleFee = "200";
    earnings += 200;

    print_receipt();
    bus_count++;
}
// this function will handle car parking operations
void parkVehicle::car_park()
{
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, ownerName);

    cout << "Enter vehicle number: ";
    getline(cin, vehicleNumber);

    cout << "Enter parking date: ";
    getline(cin, parkingDate);

    vehicleFee = "150";
    earnings += 150;

    print_receipt();
    car_count++;
}
// this function will handle bike parking operations
void parkVehicle::bike_park()
{
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, ownerName);

    cout << "Enter vehicle number: ";
    getline(cin, vehicleNumber);

    cout << "Enter parking date: ";
    getline(cin, parkingDate);

    vehicleFee = "50";
    earnings += 50;

    print_receipt();
    bike_count++;
}
// this function will handle auto parking operations
void parkVehicle::auto_park()
{
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, ownerName);

    cout << "Enter vehicle number: ";
    getline(cin, vehicleNumber);

    cout << "Enter parking date: ";
    getline(cin, parkingDate);

    vehicleFee = "100";
    earnings += 100;

    print_receipt();
    auto_count++;
}
// this function will handle all parking operations
void parkVehicle::park_vehicle()
{
    int choose;
again:
    cout << "\nPress 1 to park Bus" << endl;
    cout << "Press 2 to park Car" << endl;
    cout << "Press 3 to park Bike" << endl;
    cout << "Press 4 to park Auto" << endl;
    cout << "Choose parking vehicle: ";
    cin >> choose;

    switch (choose)
    {
    case 1:
        if (bus_slot == 0)
        {
            cout << "\nSorry! Bus parking slot is not available\n";
        }
        else
        {
            bus_park();
            bus_slot--;
        }
        break;
    case 2:
        if (car_slot == 0)
        {
            cout << "\nSorry! Car parking slot is not available\n";
        }
        else
        {
            car_park();
            car_slot--;
        }
        break;
    case 3:
        if (bike_slot == 0)
        {
            cout << "\nSorry! Bike parking slot is not available\n";
        }
        else
        {
            bike_park();
            bike_slot--;
        }
        break;
    case 4:
        if (auto_slot == 0)
        {
            cout << "\nSorry! Auto parking slot is not available\n";
        }
        else
        {
            auto_park();
            auto_slot--;
        }
        break;
    default:
        cout << "\nInvalid choice, try again\n";
        goto again;
    }
}
// This function will check parking status
void parkVehicle::check_status()
{
    cout << "\n               -: PARKING STATUS :-\n\n";
    cout << bus_count << " Bus is parked | " << bus_slot << " Bus slot is available" << endl;
    cout << car_count << " Car is parked | " << car_slot << " Car slot is available" << endl;
    cout << bike_count << " Bike is parked | " << bike_slot << " Bike slot is available" << endl;
    cout << auto_count << " Auto is parked | " << auto_slot << " Auto slot is available" << endl;
    cout << "Total earnings: " << earnings << endl;
}

int main()
{
    int choose;
    parkVehicle park;

    do
    {
        cout << "\n      -: WELCOME TO AKS PARKING STAND :-\n\n";
        cout << "This is vehicle fees chart\n";
        cout << "Bus parking fees 200               Car parking fees 150\n";
        cout << "Bike parking fees 50               Auto parking fees 100\n";
        cout << "\nPress 1 to park your vehicle\n";
        cout << "Press 2 to check parking status\n";
        cout << "Press 3 to exit\n";

    again:
        cout << "Choose your option: ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            park.park_vehicle();
            break;
        case 2:
            park.check_status();
            break;
        case 3:
            cout << "\nThank you for using our parking stand\n\n";
            break;
        default:
            cout << "\nInvalid option, try again\n";
            goto again;
        }
    } while (choose != 3);

    return 0;
}

