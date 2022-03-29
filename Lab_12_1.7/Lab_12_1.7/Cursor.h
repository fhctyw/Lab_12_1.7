#pragma once
#include "LongLong.h"

class Cursor
{
	LongLong position;
	char size;
	bool view;
public:
	bool Init(unsigned int x = 0, unsigned int y = 0, char size = 1, bool  view = false);
	void read();
	void display() const;
	std::string toString() const;

	LongLong getPosition() { return position; };
	bool setPosition(LongLong ll);
	char getSize() { return size; }
	bool setSize(char s);
	bool getView() { return view; }
	void setView(bool v) { view = v; }

	void move(long x, long y);
	void changeView();
	void SizeUp();
	void SizeDown();

	void Show();
	void Hide();
};

