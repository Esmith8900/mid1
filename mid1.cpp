#include <iostream>
#include <cstdlib>
using namespace std;

double milesToKm(double miles);

int main(int argc, char *argv[])
{
    double miles = 1.0;
    if (argc > 1) {
        miles = atof(argv[1]);
    }
    cout << miles << " miles = ";
    cout << milesToKm(miles) << " Km" << endl;
    cout << endl;
    return 0;
}

double milesToKm(double miles)
{
    return (miles * 0.62137);
}


