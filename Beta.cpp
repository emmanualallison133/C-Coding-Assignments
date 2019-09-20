# include <iostream>		
# include <iomanip>			
# include <ctime>		
# include <fstream>		
using namespace std;

int main ()
{
	const int TELEGRAM_BILL = 1;
	const int MORSE_CODE = 2;
	const int DATA_FILE = 3;
	const int QUIT = 4;
	
	
// Establishes the constants rate of what each block of 5 and 1 words will be worth.
	const double rate_5 = 1.50;
	const double rate_1 = .50;
	
// Establishes the amount for how much the customer needs to pay as decimal value.
	double amount_owed;
	
// Establishes string variables to hold the customer's information.
	string name, street_address, city, state, zip_code;
	string input;
	string code;
	
//Establishes integer variables for the number of words sent, the most efficent amount of dollars, quarters, dimes, nickels, 
//and pennies to be delivered in change, the amount recieved from the customer, the words that appear in groups of 5 and 
//the remainders of those words 
	int words_sent, dollars, quarters, dimes, nickels, pennies, amount_recieved, change, blocks_of_5, blocks_of_1, option;
	
	ifstream inputFile; 		//reads the TelegramData.txt file
	
	
	
cout << "Welcome to Western Union Telegraph Company";

do
{
	cout << endl << endl;
	cout << "1 - Process Telegram Bill" << endl;
	cout << "2 - Translate to Morse Code" << endl;
	cout << "3 - Process a Data File" << endl;
	cout << "4 - Quit" << endl << endl;
	
	cout << "Enter your choice: ";
cin >> option;	
	
	while (option < TELEGRAM_BILL || option > QUIT)
		{
			cout << endl;
			cout << option << " is not a valid choice" << endl << endl << endl;
			
			cout << endl;
			cout << "1 - Process Telegram Bill" << endl;
			cout << "2 - Translate to Morse Code" << endl;
			cout << "3 - Process a Data File" << endl;
			cout << "4 - Quit" << endl << endl;
	
			cout << "Enter your choice: ";
		cin >> option; 
		}
	
	if (option != QUIT)
	{

	switch (option)
		{ 
			case TELEGRAM_BILL:
				
					cout << "Enter the name of the customer: ";		// Asks for the customer's full name
					cin.ignore();									// * Not how cin.ignore is used to skip a character in the keyboard buffer.
					
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
					cin >> amount_recieved;										
					
				// If the amount recieved is greater than or equal to the amount owned, 
				// display the number of dollars, quarters, dimes, nickels, and pennies
				// that the customer should receive as change. If not, display error message.
				
				//Multiples the amount owed by 100
					amount_owed = amount_owed * 100;
					
					while (amount_recieved < amount_owed)	
					{
						cout << endl;
						cout << "                                     *ERROR!*\n";
						cout << "Please enter a satisfactory payment: ";
						cin >> amount_recieved;	
					}
						
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
						break;
					
			case MORSE_CODE:
				cout << endl;
				
				cout << "Enter a message: ";
				cin.ignore();
				
				getline (cin, input);
				
				cout << "Translation:"; 
					
				for (int count; count < input.length(); count++)
				{
					input.at(count);
					
					switch (input.at(count))
					{
						default:
							code = "'";
						break;
						
						case 'a':
						case 'A': 
							code = " . -";
						break;
						
						case 'b':
						case 'B':
							code = " - . . .";
						break;	
						
						case 'c':
						case 'C':
							code = " - . - .";
						break;
						
						case 'd':
						case 'D': 
							code = " - . .";
						break;
						
						case 'e':
						case 'E': 
							code = " .";
						break;
						
						case 'f':
						case 'F': 
							code = " . . - .";
						break;
						
						case 'g':
						case 'G': 
							code = " - - .";
						break;
						
						case 'h':
						case 'H': 
							code = " . . . .";
						break;
						
						case 'i':
						case 'I':
							code = " . .";
						break;
						
						case 'j':
						case 'J': 
							code = " . - - -";
						break;
						
						case 'k':
						case 'K': 
							code = " - . -";
						break;
						
						case 'l':
						case 'L': 
							code = " . - . .";
						break;
						
						case 'm':
						case 'M':
							code = " - -";
						break;
						
						case 'n':
						case 'N':
							code = " - .";
						break;
						
						case 'o':
						case 'O': 
							code = " - - -";
						break;
						
						case 'p':
						case 'P': 
							code = " . - - .";
						break;
						
						case 'q':
						case 'Q': 
							code = " - - . -";
						break;
						
						case 'r':
						case 'R': 
							code = " . - .";
						break;
						
						case 's':
						case 'S': 
							code = " . . .";
						break;
						
						case 't':
						case 'T':
							code = " -";
						break;
						
						case 'u':
						case 'U': 
							code = " . . -";
						break;
						
						case 'v':
						case 'V':
							code = " . . . -";
						break;
						
						case 'w':
						case 'W': 
							code = " . - -" ;
						break;
						
						case 'x':
						case 'X':
							code = " - . . -";
						break;
						
						case 'y':
						case 'Y': 
							code = " - . - -";
						break;
						
						case 'z':
						case 'Z': 
							code = " - . .";
						break;
					
						case ',':
							code = ",";
						break;
						
						case '!': 
						code = "!";
						break;
						
						case '?': 
						code = "?";
						break;
						
						case ' ': 
						code = " ";
						break;
						
						case ':': 
						code = ":";
						break;
						
						case '&':
						code = "&";
						break;
						
						case ';':
						code = ";";
						break;
						
						case '.':
						code = ".";
						break;
						
						case '-':
						code = "-";
						break;
					}
					
					cout << code;
				}
					cout << endl << endl;
					break;
					
			case DATA_FILE:
				cout << endl;
				
				inputFile.open("TelegramData.txt");
				while (inputFile >> name)
				{
					cin.ignore();
					getline(inputFile, name);	
					cout << name << endl;
					
					getline(inputFile, street_address);
					cout << street_address << endl;
					
					getline(inputFile, city);
					getline(inputFile, state);
					getline(inputFile, zip_code);
			
					inputFile >> words_sent;
					
				// Divides the words sent by the user into groups of 5 and its remainders
					blocks_of_5 = words_sent / 5;
					blocks_of_1 = words_sent % 5;
					
				// Multiples the constant doubles by their respective group of 5 and single words, then add them to get
				// the amount of money due.
					amount_owed = (blocks_of_5 * rate_5) + (blocks_of_1 * rate_1);
					
					cout << city << ", "<< state << " " << zip_code << endl;
					cout << "Amount Owed: $" << setprecision(2) << fixed << amount_owed << endl << endl;
				}
		}					
	}	
						
} while (option != QUIT);
		
return 0;		
 }

	

