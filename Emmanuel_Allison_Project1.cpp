
// Name: Emmanuel Allison
// Date: January 31, 2016

// Purpose: This program is meant to generate a bill for sending a telegram, accept payment and
//instruct cashier how to give change. The amount owed is based on the number
//of words sent. Customers are charged at a rate of $1.50 for blocks of 5 words
// and $0.50 for single words.

# include <iostream>

# include <iomanip>
using namespace std;

int main ()

{
	const double rate_5 = 1.50;
	const double rate_1 = .50;
	
	double blocks_of_5, blocks_of_1, amount_owed, cash, change;
	
	string name, street_address, city, state, zip_code;
	
	int words_sent, dollars, quarters, dimes, nickels, pennies, amount_recieved;
	
	cout << "Enter the name of the customer: ";
	getline(cin, name);
	
	cout << "Enter street address: ";  
	getline(cin, street_address);
	
	cout << "Enter city: ";
	getline(cin, city);
	
	cout << "Enter state: ";
	getline(cin, state);
	
	cout << "Enter zip code: ";
	getline(cin, zip_code);
	
	cout << "Enter the number of words sent: ";
	cin >> words_sent;
	
	blocks_of_5 = words_sent / 5;
	blocks_of_1 = words_sent % 5;
	
	amount_owed = (blocks_of_5 * rate_5) + (blocks_of_1 * rate_1);
	
	cout << endl;
	cout << name << endl;
	cout << street_address << endl;
	cout << city << ", "<< state << " " << zip_code << endl;
	cout << "Amount Owed: $" << setprecision(2) << fixed << amount_owed << endl << endl;
	
	cout << "Enter the amount recieved from the customer: ";
	cin >> amount_recieved;
	
	cash = amount_recieved * 0.01;
	
	change = cash - amount_owed;
	 
	dollars = change / 1;
	quarters = (change - dollars) / .25;
	dimes = (change - quarters) *.10;
	nickels = (change - dimes) * .05;
	pennies = (change - nickels) * .01;
	
	cout << endl;
	cout << "Denomination\t" << "Number" << endl;
	cout << "____________\t" << "______" << endl;
	cout << "  Dollars   \t" << " " << dollars << " " << endl;
	cout << "  Quarters  \t" << " " << quarters << " " <<endl;
	cout << "  Dimes     \t" << " " << dimes << " " << endl;
	cout << "  Pennies   \t" << " " << pennies << " " << endl;
	
	return 0;
	
}
dimes = quarters * .10;
	nickels = dimes * .05;
	pennies = nickels * .01;

