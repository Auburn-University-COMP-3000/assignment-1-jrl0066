#include <iostream>
#include <math.h>

using namespace std;

int main(){

    const int acc=32; //sets the contant acceleration.
    int t; //declares variable for time.
    int distance; // declares variable distance.

    cout << "Enter a time in seconds: " << endl; //prompt for user input of t.
    cin >> t; //user input of t
    distance = (0.5*acc)*(t*t); //calculates distance based on given t.
    cout << "An object in freefall for " << t; //outputs the distance
    cout << " seconds will fall " << distance << " feet";
    return 0;

}