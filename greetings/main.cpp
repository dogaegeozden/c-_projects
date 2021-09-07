#include <iostream>

using namespace std;

int main()
{
    char name[75];
    cout<<"Please enter your name here: ";
    cin>>name;
    cin.ignore();
    cout<<"Greetings "<<name<<".\n";
    cin.get();
}
