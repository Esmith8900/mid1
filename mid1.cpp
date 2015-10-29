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

    if (argv[0] < 0.0) { // (indicates unit test)
	float miles[200] = { };
	float kilos[200] = { }; 


	cout << endl;
	return 0;
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


