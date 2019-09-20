// Name: Emmanuel Allison
// Date: February 5, 2017

// Purpose: This program is meant to generate a bill for sending a telegram, accept payment and
//instruct cashier how to give change. The amount owed is based on the number
//of words sent. Customers are charged at a rate of $1.50 for blocks of 5 words
//and $0.50 for single words.

# include <iostream>
# include <cstdlib>			// For the rand and srand function
# include <iomanip>			// For setprecision
# include <ctime>			// For the time function 
using namespace std;

int main ()

{
	unsigned seed = time (0);     //Collects the system's time
	srand(seed);				  // Seeds the random number generator
	
// Establishes the constants rate of what each block of 5 and 1 words will be worth.
	const double rate_5 = 1.50;
	const double rate_1 = .50;
	
// Establishes the amount for how much the customer needs to pay as decimal value.
	double amount_owed;
	
// Establishes string variables to hold the customer's information.
	string name, street_address, city, state, zip_code;
	
//Establishes integer variables for the number of words sent, the most efficent amount of dollars, quarters, dimes, nickels, 
//and pennies to be delivered in change, the amount recieved from the customer, the words that appear in groups of 5 and 
//the remainders of those words 
	int words_sent, dollars, quarters, dimes, nickels, pennies, amount_recieved, change, blocks_of_5, blocks_of_1, option;
	
	
	char letter;
	
	cout << "Welcome to Western Union Telegraph Company"<< endl << endl;
	
	cout << "1 - Process Telegram Bill" << endl;
	cout << "2 - Translate to Morse Code" << endl << endl;
	
	cout << "Enter your choice: ";
	cin >> option;
	
	switch (option)
	{
		default: cout << option << " is not an a vaild choice.";
		break;
		 
		case 1:
					cout << "Enter the name of the customer: ";		// Asks for the customer's full name
					getline(cin, name);									// *Note how cin.getline in used in place of cin to read the full statement*
	
					cout << "Enter street address: ";					//Asks for the customer's full street address
					getline(cin, street_address);
					
					cout << "Enter city: ";								//Asks for the customer's city
					getline(cin, city);
					
					cout << "Enter state: ";							//Asks for the customer's state
					getline(cin, state);
					
					cout << "Enter zip code: ";							//Asks for the customer's zip code
					getline(cin, zip_code);
					
					cout << "Enter the number of words sent: ";			//Asks for the number of words sent by the customer
					cin >> words_sent;
					
				// Divides the words sent by the user into groups of 5 and its remainders
					blocks_of_5 = words_sent / 5;
					blocks_of_1 = words_sent % 5;
					
				// Multiples the constant doubles by their respective group of 5 and single words, then add them to get
				// the amount of money due.
					amount_owed = (blocks_of_5 * rate_5) + (blocks_of_1 * rate_1);
					
				//Displays the string values of customer's information and the amount due as currency
					cout << endl;
					cout << name << endl;
					cout << street_address << endl;
					cout << city << ", "<< state << " " << zip_code << endl;
					cout << "Amount Owed: $" << setprecision(2) << fixed << amount_owed << endl << endl;
					
					cout << "Enter the amount recieved from the customer: ";			//Asks for the amount recieved from the customer
					amount_recieved = rand();											//Uses a random number for the amount recieved variable
					
				//Displays the payment from the customer
					cout << amount_recieved << endl;
					
				// If the amount recieved is greater than or equal to the amount owned, 
				// display the number of dollars, quarters, dimes, nickels, and pennies
				// that the customer should receive as change. If not, display error message.
				
				//Multiples the amount owed by 100
					amount_owed = amount_owed * 100;
					
					if (amount_recieved>=amount_owed) 
					{
					
						
					//Calculates the change/debt for the customer from their payment 
						change = amount_recieved - amount_owed;
							
						
					//Calculates the most efficent amount of dollars, quarters, dimes, nickels, 
					//and pennies in change
						dollars = change / 100;
						change = change % 100;
						
						quarters = change / 25;
						change = change % 25;
						
						dimes = change / 10; 
						change = change % 10;
						
						nickels = change / 5;
						change = change % 5;
						
						pennies = change / 1;
					
					//Displays the most efficent amount of dollars, quarters, dimes, nickels, 
					//and pennies in change
						cout << endl;
						cout << "Denomination\t" << "Number" << endl;
						cout << "____________\t" << "______" << endl;
						cout << "  Dollars   \t" << " " << dollars << " " << endl;
						cout << "  Quarters  \t" << " " << quarters << " " <<endl;
						cout << "  Dimes     \t" << " " << dimes << " " << endl;
						cout << "  Nickels   \t" << " " << nickels << " " << endl;
						cout << "  Pennies   \t" << " " << pennies << " " << endl;	
					  }  
				  
					else
					  {
						cout << endl;
						cout << "                                     *ERROR!*\n";
						cout << "Payment recieved from the customer is less than the amount owed. Please re-open this program and try again.";
								
					  }
						break;
								
		case 2:	
			cout << "Enter a single letter: ";
			cin >> letter;	
			
			switch (letter)
				{ 
					case 'a':
					case 'A': 	cout << endl;
					cout << "The letter " << letter << " translates to . -";
					break;
					
					case 'b':
					case 'B': 	cout << endl;
					cout << "The letter " << letter << " translates to - …";
					break;	
					
					case 'c':
					case 'C':
					cout << endl;
					cout << "The letter " << letter << " translates to - . - .";
					break;
					
					case 'd':
					case 'D': 	cout << endl;
					cout << "The letter " << letter << " translates to - . .";
					break;
					
					case 'e':
					case 'E': 	cout << endl; 
					cout << "The letter " << letter << " translates to .";
					break;
					
					case 'f':
					case 'F': 	cout << endl;
					cout << "The letter " << letter << " translates to . . - .";
					break;
					
					case 'g':
					case 'G': 	cout << endl; 
					cout << "The letter " << letter << " translates to - - .";
					break;
					
					case 'h':
					case 'H': 	cout << endl;
					cout << "The letter " << letter << " translates to . . . .";
					break;
					
					case 'i':
					case 'I': 	cout << endl;
					cout << "The letter " << letter << " translates to . .";
					break;
					
					case 'j':
					case 'J': 	cout << endl;
					cout << "The letter " << letter << " translates to . - - -";
					break;
					
					case 'k':
					case 'K': 	cout << endl;
					cout << "The letter " << letter << " translates to - . -";
					break;
					
					case 'l':
					case 'L': 	cout << endl;
					cout << "The letter " << letter << " translates to . - . .";
					break;
					
					case 'm':
					case 'M': 	cout << endl;
					cout << "The letter " << letter << " translates to - -";
					break;
					
					case 'n':
					case 'N': 	cout << endl;
					cout << "The letter " << letter << " translates to - .";
					break;
					
					case 'o':
					case 'O': 	cout << endl;
					cout << "The letter " << letter << " translates to - - -";
					break;
					
					case 'p':
					case 'P': 	cout << endl;
					cout << "The letter " << letter << " translates to . - - .";
					break;
					
					case 'q':
					case 'Q': 	cout << endl;
					cout << "The letter " << letter << " translates to - - . -";
					break;
					
					case 'r':
					case 'R': 	cout << endl;
					cout << "The letter " << letter << " translates to . - .";
					break;
					
					case 's':
					case 'S': 	cout << endl;
					cout << "The letter " << letter << " translates to . . .";
					break;
					
					case 't':
					case 'T': 	cout << endl;
					cout << "The letter " << letter << " translates to -";
					break;
					
					case 'u':
					case 'U': 	cout << endl; 
					cout << "The letter " << letter << " translates to . . -";
					break;
					
					case 'v':
					case 'V':	cout << endl;
					 cout << "The letter " << letter << " translates to . . . -";
					break;
					
					case 'w':
					case 'W': 	cout << endl;
					cout << "The letter " << letter << " translates to . - -" ;
					break;
					
					case 'x':
					case 'X':	cout << endl;
					cout << "The letter " << letter << " translates to - . . -";
					break;
					
					case 'y':
					case 'Y': 	cout << endl;
					cout << "The letter " << letter << " translates to - . - -";
					break;
					
					case 'z':
					case 'Z': 	cout << endl;
					cout << "The letter " << letter << " translates to - - . .";
					break;
					
					default: 	cout << endl;
					cout << letter << " is not a vaild letter";
					break;
				}
	}
return 0;
}
