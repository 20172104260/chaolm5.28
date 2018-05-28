// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CFeet
{
private:
	int feet;
	int inches;

public:
	void display();
	void conversion(int a, int b);
	CFeet operator +(CFeet & ojbk);

};
void CFeet::display()
{
	cout << feet << " feet " << inches << " inches" << endl;
}

void CFeet::conversion(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}

CFeet CFeet::operator+(CFeet & ojbk)
{
	CFeet add;
	add.conversion(feet + ojbk.feet, inches + ojbk.inches);
	return add;
}


int main()
{
	CFeet A, B, C;
	A.conversion(-10,-8);
	A.display();
	B.conversion(12,6);
	B.display();
	C = A + B;
	C.display();
	return 0;
}

