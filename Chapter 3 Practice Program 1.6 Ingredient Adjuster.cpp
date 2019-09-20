#include <iostream>
using namespace std;

int main () 
{
	int cookies;
	double butter, sugar, flour;
	
	cout << "How many cookies do you want to make?" << endl;
	cin >> cookies;
	
	sugar = cookies * .03125;
	butter = cookies * .02083333333;
	flour = cookies * .05729166666;
	
	
	cout << "The recipe will require:" << endl;
	cout << sugar << " cups of sugar" << endl;
	cout << butter << " cups of butter" << endl;
	cout << flour << " cups of flour" << endl;
	
	return 0;
}
