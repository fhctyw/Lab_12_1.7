#include "Cursor.h"
#include <sstream>
#include <iostream>

using namespace std;

bool Cursor::Init(unsigned int x, unsigned int y, char s, bool v)
{
    if (s > 0 && s <= 15) {
        position.Init(x, y);
        size = s;
        view = v;
        return true;
    }
    else
        return false;
}

void Cursor::read()
{
    unsigned int x, y;
    int s;
    bool v;
    do
    {
        cout << "¬вед≥ть позиц≥ю по x: "; cin >> x;
        cout << "¬вед≥ть позиц≥ю по y: "; cin >> y;
        cout << "¬вед≥ть розм≥р: "; cin >> s;
        cout << "¬ед≥ть вид курсору(1 - horizontal, 0 - vertical): "; cin >> v;
    } while (!Init(x, y, s, v));
}

void Cursor::display() const
{
    cout << toString() << endl;
}

string Cursor::toString() const
{
    stringstream ss;
    ss << '(' << position.getHigh() << ", " << position.getLow() << ") size: " << (int)size << (view ? " horizontal" : " vertical");
    return ss.str();
}

bool Cursor::setPosition(LongLong ll)
{
    if (ll.getHigh() >= 0)
    {
        position = ll;
        return true;
    }
    else
        return false;
}

bool Cursor::setSize(char s)
{
    if (s > 0 && s < 16)
    {
        size = s;
        return true;
    }
    else
        return false;
}

void Cursor::move(long x, long y)
{
    Hide();

    LongLong ll;
    ll.Init(x, y);
    position = add(position, ll);

    Show();
}

void Cursor::changeView()
{
    view = !view;
}

void Cursor::SizeUp()
{
    setSize(size + 1);
}

void Cursor::SizeDown()
{
    setSize(size - 1);
}

void Cursor::Show()
{
    cout << "Cursor shows" << endl;
}

void Cursor::Hide()
{
    cout << "Cursor hides" << endl;
}
