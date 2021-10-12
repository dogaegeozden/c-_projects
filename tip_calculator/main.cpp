#include <iostream>
#include<cstdlib>
#include<cstring>
#include<string>

float tipCalculator(float x, float y){
    float result = x * y;
    return result;
}

using namespace std;

int main ( int argc, char *argv[100] )
{
    if (argc == 3) {
        // Converts the second argument(Bill Amount) to float
        char *billAmountR = argv[1];
        strcpy(billAmountR, argv[1]);
        string billAmountS(billAmountR);
        float billAmount = stof(billAmountS);

        // Converts the third argument(Tip Amount) to float and by dividing it to 100 allows users to avoid using decimal numbers.
        char *tipAmountR = argv[2];
        strcpy(tipAmountR, argv[2]);
        string tipAmountS(tipAmountR);
        float tipAmount = stof(tipAmountS) / 100;
        cout<<"Tip Amount = $"<<tipCalculator(billAmount, tipAmount)<<endl;

    } else {
        cout<<"Usage: ./main billAmount tipAmount"<<endl;
        cout<<"Hint: Avoid using % or $. Just use numbers such as 20.5 10"<<endl;
    }

}

