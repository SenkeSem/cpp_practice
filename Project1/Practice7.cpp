#include "Practice7.h"

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

void Foo(std::string s)
{
	std::cout << s << std::endl;
};

void practice7()
{
	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c for_each:" << std::endl;

	std::list<std::string> l_str =
	{
		"Sasha",
		"Pasha",
		"Dasha",
		"Masha",
		"Dimasik",
		"Viktor",
	};

	std::for_each(l_str.begin(), l_str.end(), Foo);
	std::cout << "\n";

	std::for_each(l_str.begin(), l_str.end(), [](std::string& a)
		{
			a += "---";
		}
	);
	std::for_each(l_str.begin(), l_str.end(), Foo);


	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c unique:" << std::endl;

	std::vector<int> vec = { 1,2,3,3,3,3,4,5,6,6,7,8,99,99,17,394,52,77 };
	std::vector<int> vec1;

	for (auto el : vec)
	{
		std::cout << el << " ";

	}

	//auto p_uniq = std::unique(vec.begin(), vec.end());
	//vec.erase(p_uniq, vec.end());
	std::unique_copy(vec.begin(), vec.end(), std::back_inserter(vec1));

	std::cout << "\n";

	for (auto el : vec1)
	{
		std::cout << el << " ";

	}
}
