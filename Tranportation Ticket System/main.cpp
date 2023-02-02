#include <iostream>
#include <fstream>
using namespace std;

class Bus
{
private:
    string Name;
    int Total_P, Remaining_P, Bus_Seats, Empty_Seats;
public:
    Bus (string name, int bus_S, int total_P): Name(name), Bus_Seats(bus_S), Total_P(total_P)
    {
        Remaining_P = Total_P%Bus_Seats;
        Empty_Seats = Bus_Seats - Remaining_P;
    }
    //Function to print Empty Seats
    void avail_seats()
    {
        if(Remaining_P == 0)
            cout << "No Empty Seats Left" << endl;
        else
            cout << Name << " has " << Empty_Seats << " Empty Seats left \n" << endl;
    }
    //Function to print file for ticket information
    void print_ticket()
    {
        ofstream Print_Ticket;
        Print_Ticket.open("For_Printing.txt");
        Print_Ticket << "This bus ticket is for: " << Name << endl
                     << "Which has a total of: " << Bus_Seats << " seats" << endl
                     << "   -->Please present this ticket to the conductor<-- \n";
        Print_Ticket.close();
    }
};

int main()
{
    int B_Seats, T_Passengers;
    string B_name;
    //Ask for Bus name, Total Seats of the bus and Total Passengers waiting
    cout << "Bus name: "; cin >> B_name;
    cout << "Total Bus Seats: "; cin >> B_Seats;
    cout << "Total Passengers: "; cin >> T_Passengers;
    //Calculates Empty Seats available
    Bus b1(B_name, B_Seats, T_Passengers);
    //Prints to the screen empty seats available
    b1.avail_seats();
    //Writing ticket information to another file for printing
    b1.print_ticket();
}
