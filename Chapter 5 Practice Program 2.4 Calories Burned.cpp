//Chapter 5 Practice Program 2
//Programming Challenge 4: Calories Burned

# include <iostream>
using namespace std;

int main ()
{
	const double CALORIES_BURN_PER_MINUTE = 3.6;
	
	cout << "This program calculates the calories burned while on a treadmill." << endl << endl;
	
	for (int minute = 5; minute <= 30; minute += 5)
		cout << minute << " minutes on the treadmill will burn " << minute * CALORIES_BURN_PER_MINUTE << " calories." << endl << endl;
	
	return 0;
}
