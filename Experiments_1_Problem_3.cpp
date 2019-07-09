#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	float netBalance,payment,d1,d2,averageDailyBalance,interest;
	netBalance =0;
	payment =0;
	d1 =0;
	d2 =0;
	averageDailyBalance =0;
	interest=0;
 cout << fixed << showpoint << setprecision(2);

	cout << "Experiment 1 - Problem 3. " << endl;
	cout << "------------------------- \n\n\n";
	cout << "Please enter your net balance: " << flush;
	cin >> netBalance;
	cout << "Please enter the number of days in the billing cycle: "<<flush;
	cin >> d1;
	cout << "Please enter the number of days payment is made before billing cycle: "<<flush;
	cin >> d2;
	averageDailyBalance =(netBalance * d1-payment * d2) / d1;
	interest = (averageDailyBalance * 0.0097);
	cout << "Your interest is: "<<interest <<endl;


 system("pause");
 getch();
 return 0;
}