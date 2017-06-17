#include "stdio.h"
#include <iostream>

using namespace std;

// define constants (ie. label)
#define LENGTH_USERNAME  40  // reserve 40 characters to store the user's name


//===== Main Program =====
void main()
{
	char userName[40];

	// Prompt for user's name
	cout << “Please enter your name";
	cin >> userName;

	// print out hello message
	cout << "Hello, " << userName << endl;
}