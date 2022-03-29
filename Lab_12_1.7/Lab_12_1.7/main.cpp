// main.cpp
#include <iostream>
#include <Windows.h>
#include "Cursor.h"
#include "LongLong.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Cursor cur;
	cur.read();
	cur.display();
	
	cur.changeView();
	cur.SizeUp();
	cur.SizeUp();

	cur.display();

	cur.move(13, -3);
	cur.SizeDown();
	
	cur.display();

	return 0;
}