# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	const double priceA = 15.0;
	const double priceB = 12.0;
	const double priceC = 9.0;
	
	int classA_tickets, classB_tickets, classC_tickets; 
	double income;
	
	cout << "How many tickets were sold for Class A?" << endl;
	cin >> classA_tickets;
	
	cout << "How many tickets were sold for Class B?" << endl;
	cin >> classB_tickets;
	
	cout << "How many tickets were sold for Class C?" << endl;
	cin >> classC_tickets;
	
	income = (classA_tickets * priceA) + (classB_tickets * priceB) + (classC_tickets * priceC);
	
	cout << "The amount of income generated from ticket sales is: $" << setprecision(2) << fixed << income << endl;
	
	return 0;
}
