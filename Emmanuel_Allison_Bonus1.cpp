// Name: Emmanuel Allison
// Date: January 23, 2016
// Purpose: This program is meant to calculate the number of acres
// in a tract of land with 391,876 square feet.

#include <iostream>
using namespace std;

int main()
{
	int land, acre, total;
	
	land = 391876;
	acre = 43560;
	
	total = land / acre;
	
	cout << "There are " << total << " arces in a tract of land with " << land << " square feet." << endl;
	
	return 0;
}
