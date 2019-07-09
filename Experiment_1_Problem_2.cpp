#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	float mass,density, volume;
	
 cout << fixed << showpoint << setprecision(2);
 cout << "Experiment 1 - Problem 2. \n";
 cout << "______________________ \n\n\n";
 cout << "Please enter mass: " << flush;
 cin >> mass; cout << "g" << endl;
 cout << "Please enter Density: " <<flush;
 cin >> density; cout << "cm^3" << endl;
 volume = (0.25 * mass) / density;
 cout << "The volume of the object is: "<< volume << " cubic centimeters. \n\n\n\n\n" <<endl;

 system("pause");
 getch();
 return 0;
}