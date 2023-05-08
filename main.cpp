#include <iostream>
#include "Travel.h"
using namespace std;

int main()
{
    char selection, choice, cont;
    int start, end, stop;
    Travel trip;
    
    do{
    cout << "Welcome to your Travel Planner\n\n"
         << "A. Low Cost\nB. Shortest Path\nC. Adjacent Cities\nD. Road Info\n"
         << "Please select an option from the menu above: ";
    cin  >> selection;
    
    trip.setSelection(toupper(selection));
    
    cout << "You have selected " << (char) toupper(selection) << endl << endl;
    
    cout << "1. Riverside\n2. Perris\n3. Moreno Valley\n4. Hemet\n";
    cout << "Select a starting point: ";
    cin  >> start;
    
    trip.setStart(start);
    end = 0;
    stop = 0;
    
    if (toupper(selection) == 'A' || toupper(selection) == 'B')
    {
        cout << "Select a destination: ";
        cin  >> end;
        cout << "Will you be making a stop (Y/N): ";
        cin  >> choice;
        if (toupper(choice) == 'Y')
        {
            cout << "Select a stop: ";
            cin  >> stop;
        }
    }
    trip.setEnd(end);
    trip.setStop(stop);
    trip.mainMenu(trip);
    cout << trip.getSelection() << endl
         << trip.getStart() << endl
         << trip.getStop() << endl
         << trip.getEnd() << endl;
        
    cout << "Would you like to plan another trip (Y/N)? ";
    cin  >> cont;
    }while (toupper(cont) == 'Y');
    
    cout << "\n\nThank you for using your Trip Planner.\nGOODBYE.";

    return 0;
}

