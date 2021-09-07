#include <iostream>

using namespace std;

int main() {

    int age;
    string idCheck;

    cout<<"Hey, how old are you?\n";
    cin>>age;

    if ( age <= 18 ) {
        cout<<"Go away!";
    } else if ( age >= 60 ) {
        cout<<"Aren't you too old grandpa.\nCan I see your id?\n";
        cin>>idCheck;
        if ( idCheck.find("yes")!=-1 || idCheck.find("Yes")!=-1 ) {
            cout<<"Alright get in.\n";
        } else {
            cout<<"I'm sorry. Can't let you get in without id.\n";
            cin.ignore();
        }
    } else {
        cout<<"Can I see your id?\n";
        cin>>idCheck;
        if ( idCheck.find("yes")!=-1 || idCheck.find("Yes")!=-1 ) {
            cout<<"You can get in.\n";
        } else {
            cout<<"Get out of the line. You can't get in.\n";
            cin.ignore();
        }
    }
}

