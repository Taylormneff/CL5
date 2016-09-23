#include <iostream>
#include <string>
using namespace std;


void A1()
{
	string website;
	cout << "Please enter a URL: ";
	cin >> website;

	string command;
	command = "ping" + website;

	system(command.c_str());


}

void B1()
{
	string firstName, lastName;
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name:  ";
	cin >> lastName;

	string formattedName = lastName + ", " + firstName;
	cout << "Formatted: " << formattedName << endl;

}

void C1()
{
	string note, filename;
	cout << "Enter a filename: ";
	cin >> filename;
	cin.ignore();
	cout << "Enter note: ";
	getline(cin, note);

	string command = "echo \"" + note + "\" > " + filename;
	system(command.c_str());

}


void D1()
{
	string sentence, searchFor;
	sentence = "Have a nice day.";
	cout << "Enter term to search for: ";
	getline(cin, searchFor);

	int foundPosition;
	foundPosition = sentence.find(searchFor);
	if (foundPosition != string::npos)
	{
		cout << "Found at " << foundPosition << endl;
	}
	else
	{
		cout << "Not found " << endl;
	}
}


int main
{
	string names[5];
	
}
