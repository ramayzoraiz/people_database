#include"binary-search-tree.h"
#include"PERSONS.h"
#include<iostream>
#include<string>

int main()
{
	BinaryTree b1;
	person p1;
	cout << "\n\nDo you want to register (press y to continue) : \t";
	char ask;
	cin >> ask;
	while (ask == 'y')
	{
		p1.getdata();
		b1.Insert(p1);
		cout << "\n\nDo you want to register (press y to continue) : \t";
		cin >> ask;
	}

	b1.show_root();
	system("pause");
	return 0;
}