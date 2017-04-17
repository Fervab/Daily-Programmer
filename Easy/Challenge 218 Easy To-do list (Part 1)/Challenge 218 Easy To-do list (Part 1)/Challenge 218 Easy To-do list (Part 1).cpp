// Challenge 218 Easy To-do list (Part 1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void addItem(string list[], string item, int counter);

void deleteItem(string list[], int deleteNum);

void viewList(string list[], int counter);

int main()
{
	string menuChoice; 
	string item; 
	string list[10]; 
	int counter = 0; 
	int deleteNum; 

	cout << "Enter a command: Add item to list: 'add'. Delete item from list: 'delete'. View list: 'view'. Exit program: 'exit'" << endl;
	cin >> menuChoice; 

	while (menuChoice != "exit")
	{
		if (menuChoice == "add")
		{
			cout << "Type task to be added: ";
			cin >> item;
			addItem(list, item, counter);
		}
		else if (menuChoice == "delete")
		{
			cout << "Select the task number you wish to delete: " << endl;
			viewList(list, counter);
			cin >> deleteNum; 
			deleteItem(list, deleteNum);
		}
		else if (menuChoice == "view")
		{
			viewList(list, counter);
		}

		counter++;

		cout << "Enter a command: Add item to list: 'add'. Delete item from list: 'delete'. View list: 'view'. Exit program: 'exit'" << endl;
		cin >> menuChoice;
	}

    return 0;
}

void addItem(string list[], string item, int counter)
{
	list[counter] = item; 
}

void deleteItem(string list[], int deleteNum)
{
	list[deleteNum] = "";
}

void viewList(string list[], int counter)
{
	int count = 1;
	for (int i = 0; i < counter; i++)
	{
		if (list[i] != "")
		{
			cout << count << " " << list[i] << endl;
		}
		count++;
	}
}