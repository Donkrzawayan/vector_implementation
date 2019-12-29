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
	ps.push_back(new some);

	Vector<some>s(2);
	s.resize(3);
	for (auto &i : s)
		std::cin >> i.i >> i.f;
	s.pop_back();
	std::cout << s.front().i << '\n';
	s.erase(s.begin());
	some a{ 6, 9.9F };
	s.push_back(std::move(a));
	for(auto &i: s)
		std::cout << i.i;

	return 0;
}
