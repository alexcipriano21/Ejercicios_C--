#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int varones, mujeres;
    
    cout << "Varones: "; cin >>varones;
    cout << "Mujeres: "; cin >>mujeres;

    int total = varones + mujeres;
    double pVarones = varones * 100.0 / total;
    double pMujeres = mujeres * 100.0 / total;

    printf("% Varones = %4.2f %\n", pVarones);
    printf("% Mujeres = %4.2f %\n", pMujeres);; 


    return 0;
}