//Derrick Demers
//April 9, 2019
//This program checks to see if a user-defined word, or string, is a palindrome
//(a word/number that is the same read forwards and backwards, example: level, kayak, racecar, etc.)

#include <iostream>
using namespace std;

int main()
{
	char word[20]; //Here we will be using an array of characters that act like a string
	int count, length, wrdLength;
	int flag = 0; //This flag will indicate if the statement is true or false
    cout << "Please enter a word or number: ";
	cin >> word;

	length = strlen(word); //using strlen, the program can count the number of characters within our array of characters/string

	for (count = 0; count < length; count++) //This for loop checks to see if the user entered a word; if they did, the loop will begin
	{
		if (word[count] != word[length - count - 1]) //this if statement checks to see if the given word is not a palindrome
		{
			flag = 1; //if the given word is not a palindrome, then the falg gets switch from 0 (false) to 1 (true)
			break;

		};
	};

	if (flag) //This if statement is here to check the status of the flag
	{
		cout << word << " is NOT a palindrome" << endl;
	}

	else
	{
		cout << word << " is a palindrome" << endl;
	}

	system("pause");
	return 0;
}

