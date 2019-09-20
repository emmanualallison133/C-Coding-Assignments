//Chapter 5 Practice Program 1
//Programming Challenge 3: Ocean Levels

# include <iostream>
using namespace std;

int main ()
{
	const int NEXT_25_YEARS = 25;
	const double RISES_PER_YEAR = 1.5;

	
	cout << "This program displays how much ocean levels will rise in the next 25 years" << endl << endl;
	cout << "Year\t" << "The Ocean Will Have Risen..." << endl;
	cout << "____\t" << "____________________________" << endl;
	
	
	for (int count = 1; count <= NEXT_25_YEARS; count++)
		cout << count << "\t" << count * RISES_PER_YEAR << " mLs" << endl << endl;

return 0;
}

