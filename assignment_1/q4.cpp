#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double spfWeightWater = 62.4; //declares the variable for specific weight of water.
    double weightSphere; //delcares the variable for weight of sphere.
    double radiusSphere; //declares the variable for radius of sphere.
    const double pi = 3.14159; //declares the constance for pi.
    double volumeSphere; //declares the variable for volume of sphere.
    double bForce; //declares the variable for bouyancy force.
    
    cout << "Input the weight of the sphere in pounds: "; //prompts user for weight of sphere.
    cin >> weightSphere; //user input for weight of sphere.
    cout << "Input radius of the sphere in feet: "; //prompt user for radius of sphere.
    cin >> radiusSphere; //user input for radius of phere

    volumeSphere = ((4/3)*pi)*pow(radiusSphere, 3.0); //calculates volume based on given inputs.
    bForce = volumeSphere * spfWeightWater; //calculates bouyancy force.

    if (bForce >= weightSphere){ //boolean for if sphere will sink or float
        cout << "The sphere will float.";
    }

    else{
        cout << "The sphere will sink in water.";
    }

    return 0;
}