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
	Vector<some>s(2);
	s.resize(3);
	for (auto &i : s)
		std::cin >> i.i >> i.f;
	s.pop_back();
	s.erase(s.begin());
	some a{ 6, 9.9F };
	s.push_back(std::move(a));
	for (auto &i : s)
		std::cout << i.i << 't';

	Vector<int *>intint; //something new-alocated
	intint.push_back(new int);
	intint.push_back(new int);
	intint.push_back(new int);
	intint.push_back(new int);

	delete *(intint.begin() + 2); //using erase after new-alocation
	intint.erase(intint.begin() + 2);

	for (auto &i : intint)
		delete i;

	return 0;
}
