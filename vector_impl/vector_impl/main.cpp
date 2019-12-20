//own implementation of vector
#include "pch.h"
#include <iostream>
#include "vector1.h"

struct some {
	int i;
	float f;
};

int main()
{
	Vector<some *>ps;
	Vector<some>s(2);

	s.resize(5);
	for (auto &i : s)
		std::cin >> i.i >> i.f;
	ps.push_back(new some);
	s.pop_back();

	return 0;
}
