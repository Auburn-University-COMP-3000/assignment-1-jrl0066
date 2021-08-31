#include <iostream>

using namespace std;

int main(){

    int FTemp; //decares the variable for Fahrenheit.
    int CTemp = 100; //declares the variable for Celcius to be 100.

    do{ //loop for decrimenting Celcius until the value is the same in Fahrenheit.

        FTemp = 32 + ((9.0/5.0)*(--CTemp));
        
    }
    while (FTemp != CTemp);

    cout << "The tempereatures are the same at " << FTemp << " degerees Fahrenheit "; //outut for what value are Celcius and Fahrenheit the same.
    cout << "and " << CTemp << " degrees Celsius";

    return 0;
}