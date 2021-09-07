#include <iostream>

using namespace std;

int main()
{
    string name;
    cout<<"Please enter your name here: ";
    cin>>name;
    cin.ignore();
    cout<<"Greetings "<<name<<".\n";
    cin.get();
}
