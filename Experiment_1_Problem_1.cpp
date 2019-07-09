#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	cout << "Experiment 1 - Problem 1." << endl;
	cout << "______________________  \n" << endl;

	double box;
	double side;
	double prem;
	double gen;


	cout << fixed << showpoint;

	cout << "Ticket sales calculator. \n\n\n" << endl;
	cout << "Please enter the number of Box Tickets sold at price P250.00: " << flush;
	cin >> box;
	cout << " " << endl;

	cout << "Please enter the number of Sideline Tickets sold at price P100.00: " << flush;
	cin >> side;
	cout << " " << endl;

	cout << "Please enter the number of Premium Tickets sold at price P50.00: " << flush;
	cin >> prem;

	
	cout << " " << endl;

	cout << "Please enter the number of General Admission Tickets sold at price P25.00:" << flush;
	cin >> gen;
	
	cout << " " << endl;

	cout << "Calculating....." << endl;
	cout << "Number of BOX tickets"  << "         " << "P"  << setprecision(2)  << 250.00*box << endl;
	cout << "Number of side tickets"  << "         "<< "P"  << 100.00*side << setprecision(2)  << endl;
	cout << "Number of Premium tickets"  << "         "<< "P"  << 50.00*prem << setprecision(2)  << endl;
	cout << "Number of General Admission tickets"  << "         "<< "P"  << 25.00*gen << setprecision(2)  << endl;
	cout << "-----------------------------" << endl;
	cout << "Total number of Tickets Sold" << "         " << box+prem+side+gen << "PCS" << endl;
	cout << "Total Sales" <<  "         " << "P" << box*250.00+side*100.00+prem*50.00+25.00*gen << endl;
	cout << " " << endl;
	cout << " " << endl;


system("pause");
 getch();
 return 0;
}