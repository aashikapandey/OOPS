#include <iostream>
#include <string>
using namespace std;

class Passenger {
    int ticketNumber;
    string name;

public:
    Passenger(int ticket, string passengerName) : ticketNumber(ticket), name(passengerName) {}
    int getTicketNumber() const { return ticketNumber; }
    void display() const { cout << "Ticket Number: " << ticketNumber << ", Name: " << name << endl; }
};

class TicketReservationSystem {
    Passenger* passengers[50]; 
    int count = 0;

public:
    ~TicketReservationSystem() {
        while (count--) delete passengers[count];
    }

    void addPassenger(int ticketNumber, const string& name) {
        if (count < 50) passengers[count++] = new Passenger(ticketNumber, name);
        else cout << "System is full. Cannot add more passengers." << endl;
    }

    void displayPassengers() const {
        if (!count) cout << "No passengers in the system." << endl;
        else for (int i = 0; i < count; i++) passengers[i]->display();
    }

    Passenger* searchByTicketNumber(int ticketNumber) const {
        for (int i = 0; i < count; i++)
            if (passengers[i]->getTicketNumber() == ticketNumber) return passengers[i];
        return nullptr;
    }
};

int main() {
        TicketReservationSystem system;
    system.addPassenger(101, "Alice");
    system.addPassenger(102, "Bob");
    
    cout << "\nDisplaying all passengers:\n";
    system.displayPassengers();

    cout << "\nSearching for ticket 101:\n";
    if (auto found = system.searchByTicketNumber(101)) found->display();
    else cout << "Passenger not found.\n";

    cout << "\nSearching for ticket 999:\n";
    if (auto found = system.searchByTicketNumber(999)) found->display();
    else cout << "Passenger not found.\n";

    return 0;
}
