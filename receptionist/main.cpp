#include <iostream>

using namespace std;

int availableRooms[] = {1,5,9,10,11,15,20};
int sizeOfAvailableRooms = sizeof(availableRooms)/sizeof(availableRooms[0]);
string greeting = "Greetings!";
int r;

int main () {
    cout<<greeting<<"\n"<<endl;

    while (r < sizeOfAvailableRooms) {
        cout<<"Room "<<availableRooms[r]<<" is available."<<endl;
        r = r+1;
    }
}
