#include "Pair.h"

Pair::Pair()
{
	Pair::x = 0;
	Pair::y = 0;
}

Pair::Pair(int x, int y)
{
	Pair::x = x;
	Pair::y = y;
}

Pair::Pair(const Pair& pair)
{
	x = pair.x;
	y = pair.y;
}

bool Pair::operator==(const Pair& pair)
{
	if (this->x == pair.x && this->y == pair.y)
	{
		return true;
	}
	else if (this->x == pair.y && this->y == pair.x)
	{
		return true;
	}
	return false;
}
