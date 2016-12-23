#pragma once

#ifndef PERSONS
#define PERSONS

#include<iostream>
#include<string>
using namespace std;

class person
{
public:
	string full_name;
	unsigned int reg_no;

	person():full_name(),reg_no(){}

	void getdata()
	{
		cout << "\n Enter full name : \t ";
		cin.ignore();
		getline(cin, full_name);
		cout << " Enter registration number : \t"; 
		cin >> reg_no;
	}

	bool compare_names(string name1)                                            //for insert function in binary tree
	{
		if (full_name < name1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	void showdata() const
	{
		cout << "\n Full name : \t" << full_name;
		cout << "\n Number : \t" << reg_no;
	}
};

#endif           //PERSON
