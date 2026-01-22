#include "Practice.h"
#include <list>
#include <vector>
#include <iostream>

void PrintList(const std::list<int>& list)
{
	for (auto i = list.cbegin(); i != list.cend(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "\n";
}


void practice()
{
	std::vector<int> myVec;
	myVec.reserve(100);
	myVec.push_back(15);
	myVec.push_back(5);
	myVec.push_back(62);
	myVec.push_back(93);

	for (int i = 0; i < myVec.size(); ++i)
	{
		std::cout << myVec[i] << std::endl;
	}

	std::cout << "capacity вектора: " << myVec.capacity() << std::endl;

	myVec.push_back(114);
	myVec.push_back(115);
	myVec.push_back(116);
	myVec.push_back(117);
	myVec.push_back(118);
	std::cout << "capacity вектора: " << myVec.capacity() << std::endl;

	myVec.shrink_to_fit();
	std::cout << "capacity вектора: " << myVec.capacity() << std::endl;

	std::cout << "_____________________________________________________________________" << std::endl;
	std::cout << "Практика с итераторами:\n" << std::endl;

	for (std::vector<int>::reverse_iterator it = myVec.rbegin(); it != myVec.rend(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "\n";
	std::vector<int>::iterator it1 = myVec.begin();
	std::cout << *it1 << std::endl;
	std::advance(it1, 3);
	std::cout << *it1 << std::endl;

	std::cout << "_____________________________________________________________________" << std::endl;
	std::cout << "Практика с контейнером list(двусвязный список):\n" << std::endl;

	std::list<int> myList = { 17, 273, 1, 22, 72 };
	myList.push_back(10);
	myList.push_back(12);
	myList.push_front(14);
	myList.push_front(16);
	myList.push_front(18);


	PrintList(myList);
	myList.sort();
	PrintList(myList);

	myList.pop_back();  // pop методы
	myList.pop_front();
	PrintList(myList);

	myList.remove(72); // удаление конкретного элемента, если он есть в списке
	myList.remove(10);
	myList.remove(17);
	PrintList(myList);
}
