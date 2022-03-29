// LongLong.h
#pragma once
#include <string>

class LongLong
{
	long high;
	unsigned long low;
public:
	void Init(long _high, unsigned long _low);
	void display() const;
	std::string toString() const;

	long getHigh() const { return high; }
	void setHigh(long _high) { high = _high; }
	unsigned long getLow() const { return low; }
	void setLow(unsigned long _low) { low = _low; }
	
	LongLong friend add(LongLong l1, LongLong l2);
	LongLong friend sub(LongLong l1, LongLong l2);
	LongLong friend mult(LongLong l1, LongLong l2);
	LongLong friend div(LongLong l1, LongLong l2);
	LongLong friend mod(LongLong l1, LongLong l2);

	bool friend lessthan(LongLong l1, LongLong l2);
	bool friend greatthan(LongLong l1, LongLong l2);
	bool friend equal(LongLong l1, LongLong l2);
	bool friend nequal(LongLong l1, LongLong l2);
private:
	long long getLongLong() const;
};

