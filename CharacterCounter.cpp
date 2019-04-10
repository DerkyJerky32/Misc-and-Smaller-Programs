//Derrick Demers
//4-10-19
//This program counts the number if letters within a string

#include <iostream>
using namespace std;

int main()
{
	int length; //getting the integer for the word length
	char word[20]; //the user entered word using the 'char' data type in an array
	cout << "Enter a word:    ";

	cin >> word;

	length = strlen(word); //using 'strlen', the program can count the characters in the array/string and assign it to 'length'

	cout << "Your word is " << length << " characters long." << endl; //the program gives the amount of characters
	return 0;
}

