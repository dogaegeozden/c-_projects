#include <iostream>

using namespace std;

int availableRooms[] = {1,5,9,10,11,15,20};
int sizeOfAvailableRooms = sizeof(availableRooms)/sizeof(availableRooms[0]);
string greeting = "Greetings! My name is Bob.\nRoom Numbers ";
int r;

int main () {
    cout<<greeting;

    while (r < sizeOfAvailableRooms-1 ) {
        cout<<availableRooms[r]<<", ";
        r = r+1;
    }

    cout<<"and "<<availableRooms[sizeOfAvailableRooms-1]<<" is available."<<endl;
}
