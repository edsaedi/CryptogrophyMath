#pragma once
class Pair
{
public:
	int x;
	int y;
	Pair();
	Pair(int x, int y);
	Pair(const Pair& pair);
	bool operator==(const Pair& pair);
};

