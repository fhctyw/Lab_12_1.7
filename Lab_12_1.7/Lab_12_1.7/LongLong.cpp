#include "LongLong.h"
#include <iostream>
#include <sstream>
using namespace std;

string showbits(const void* ptr, int bytes) {
	stringstream ss;
	unsigned char* arr = (unsigned char*)ptr;

	for (int i = 0; i < bytes; i++)
	{
		for (int j = 0; j < 8; j++)
			arr[i] & (1 << j) ? ss << "1" : ss << "0";
		ss << " ";
	}
	return ss.str();
}


void LongLong::Init(long _high, unsigned long _low)
{
	setHigh(_high);
	setLow(_low);
}

void LongLong::display() const
{
	cout << toString() << endl;
}

std::string LongLong::toString() const
{
	long long l = getLongLong();
	stringstream ss;
	ss << "high: " << high << " low: " << low << endl
		<< "high: " << showbits(&high, sizeof(high)) << " low: " << showbits(&low, sizeof(low)) << endl;
	return ss.str();
}

long long LongLong::getLongLong() const
{
	long a[] = { high, low };
	return *(long long*)&a;
}

LongLong add(LongLong l1, LongLong l2)
{
	LongLong ll;
	long long ll1 = l1.getLongLong();
	long long ll2 = l2.getLongLong();
	long long r = ll1 + ll2;

	long *res = (long*)&r;

	ll.high = res[0];
	ll.low = res[1];
	return ll;
}

LongLong sub(LongLong l1, LongLong l2)
{
	LongLong ll;
	long long ll1 = l1.getLongLong();
	long long ll2 = l2.getLongLong();
	long long r = ll1 - ll2;

	long* res = (long*)&r;

	ll.high = res[0];
	ll.low = res[1];
	return ll;
}

LongLong mult(LongLong l1, LongLong l2)
{
	LongLong ll;
	long long ll1 = l1.getLongLong();
	long long ll2 = l2.getLongLong();
	long long r = ll1 * ll2;

	long* res = (long*)&r;

	ll.high = res[0];
	ll.low = res[1];
	return ll;
}

LongLong div(LongLong l1, LongLong l2)
{
	LongLong ll;
	long long ll1 = l1.getLongLong();
	long long ll2 = l2.getLongLong();
	long long r = ll1 / ll2;

	long* res = (long*)&r;

	ll.high = res[0];
	ll.low = res[1];
	return ll;
}

LongLong mod(LongLong l1, LongLong l2)
{
	LongLong ll;
	long long ll1 = l1.getLongLong();
	long long ll2 = l2.getLongLong();
	long long r = ll1 % ll2;

	long* res = (long*)&r;

	ll.high = res[0];
	ll.low = res[1];
	return ll;
}

bool lessthan(LongLong l1, LongLong l2)
{
	return l1.getLongLong() < l2.getLongLong();
}

bool greatthan(LongLong l1, LongLong l2)
{
	return l1.getLongLong() > l2.getLongLong();
}
