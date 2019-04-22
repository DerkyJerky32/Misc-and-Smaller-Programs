//Derrick Demers
//This short program includes pointers and temporary variables
//The point of this program takes an element from the user and uses it as the array size
//Then the user makes elements for each part of the array

#include <iostream>
using namespace std;

int main() 
{
	int* pointer = nullptr; //We create a pointer integer and set it as a null pointer
	int input; //The input for the array size
	int temp; //The temporary integer we use for each element within the array

	cout << "How many items do you want in the array?" << endl << "Array Size: ";
	cin >> input;

	pointer = new int[input]; //We set the input as the pointer so now the array is made with new array

	for (int counter = 0; counter < input; counter++) //This for loop gets elements for each part of the array which was entered by
													 //The user earlier
	{
		cout << "Enter element #" << counter + 1 << ": " << endl;
		cin >> temp;
		*(pointer + counter) = temp;
	}
	
	cout << "The number of items entered is " << input << endl;
	cout << "The elements in the array are as follows" << endl;
	for (int counter = 0; counter < input; counter++) //This for loop prints the elements entered onto the array
	{
		cout << "Element number " << counter + 1 << " is " << *(pointer + counter) << endl;

	}

	delete[]pointer; //This deletes the pointer and the array in the program

	return 0;
}
