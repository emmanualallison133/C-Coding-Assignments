
// Written by Emmanuel Allison
// Date: January 20, 2017
// Purpose: This program prompts the user for a whole number from 1 to 8 and 
// displays its binary equivalent.

# include <iostream>
# include <cmath>
using namespace std;

int main ()
{
	int value, binary1, binary2, binary3, binary4, binary5, binary1r, binary2r, binary3r, binary4r;
	
	cout << "This program find the binary equivalent of whole numbers 1 through 8" << endl << endl;
	
	cout << "Enter a number 1 through 8: ";
	cin >> value;
	
	binary1 = value / 2;
	binary1r = value % 2;
	
	binary2 = binary1 / 2;
	binary2r = binary1 % 2;
	
	binary3 = binary2 / 2;
	binary3r =binary2 % 2;
	
	binary4 = binary3 / 2;
	binary4r =binary3 % 2;	
	
	
	cout << "The binary equivalent is: " << binary4r << binary3r << binary2r << binary1r;
	
	return 0;
}

