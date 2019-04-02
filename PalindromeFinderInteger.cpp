//Derrick Demers
//4-1-2019
//This program takes a number given by the user and flips it in reverse order and checks to see if it
//is a palindrome number.
//Q: What is a palindrome number?
//A: A palindrome number is a number that is the same going forwards and backwards

#include <iostream>

using namespace std;

int main()
{
	int Number, UserNum, Digit, Reverse = 0; // UserNum is the number given by the user, Number is what is going to be used to check the palindrome
											 // Digit is what Number turns into during the calculation process, Reverse is the reverse of UserNum
	cout << "Welcome to the palindrome finder. " << endl;
	cout << "Please enter a positive number from 0 to 9999" << endl;
	cout << "Number: ";
	cin >> UserNum;

	Number = UserNum; //setting the user number as Number for the calculations

	do {
		Digit = UserNum % 10;
		Reverse = (Reverse * 10) + Digit;
		UserNum = UserNum / 10;
	} while (UserNum != 0);

	cout << "You entered " << Number << endl; //this part will show the number entered
	cout << "The number reversed is " << Reverse << endl; //and this part will show the number reversed

	if (Number == Reverse) //This will check to see if the number the user entered is equal 
						   //to the number put in reverse
		cout << "The number is a palindrome." << endl;
	else
		cout << "The number is not a palindrome." << endl;


	return 0;

}
