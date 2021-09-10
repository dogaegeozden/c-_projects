#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int additionFunc (int a, int b) {
    a = a + b;
    return a;
}

int subtractionFunc (int a, int b) {
    a = a - b;
    return a;
}

int multiplicationFunc (int a, int b) {
    a = a * b;
    return a;
}

int dividionFunc (int a, int b) {
    a = a / b;
    return a;
}

template<typename Map>
void PrintMap(Map& m)
{
    cout << "[ ";
    for (auto &item : m) {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]\n";
}

int main()
{
    map<string, string> operatorsMap = {{"Multiplication", "*",},
                                {"Division", "/",},
                                {"Addition", "+",},
                                {"Subtraction", "-",},
                                {"Power", "^",}};

    cout<<"List Of Operators"<<endl;
    PrintMap(operatorsMap);
    cout<<"\n";

    float n1;
    cout<<"Enter your first number here: ";
    cin>>n1;

    string so;
    float n2;


    while ( so != "exit" ) {
        cout<<"Enter your selection of operator here: ";
        cin>>so;
        cout<<"Enter your second number here: ";
        cin>>n2;
        if ( so == operatorsMap["Addition"] ) {
            n1 = additionFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == operatorsMap["Subtraction"] ) {
            n1 = subtractionFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == operatorsMap["Multiplication"] ) {
            n1 = multiplicationFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == operatorsMap["Division"] ) {
            n1 = dividionFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == operatorsMap["Power"] ) {
            n1 = pow (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        }
        else if (typeid(n2).name() != "f" ) {
            cout<<"You didn't entered valid number!";
            break;
        } else {
            cout<<"You didn't entered valid operator!";
            break;
        }
    }
}
