#include <iostream>
#include <math.h>

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

int main()
{
    float n1;
    cout<<"Enter your first number here: ";
    cin>>n1;

    string operators[] = {"+","-","*","/"};

    string so;
    float n2;


    while ( so != "exit" ) {
        cout<<"Enter your selection of operator here: ";
        cin>>so;
        cout<<"Enter your second number here: ";
        cin>>n2;
        if ( so == "+" ) {
            n1 = additionFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == "-" ) {
            n1 = subtractionFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == "*" ) {
            n1 = multiplicationFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == "/" ) {
            n1 = dividionFunc (n1, n2);
            cout<<"Result = "<<n1<<"\n";
        } else if ( so == "^" ) {
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





