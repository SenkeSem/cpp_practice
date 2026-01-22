#include "Practice1.h"
#include <forward_list>
#include <array>
#include <iostream>



void practice1()
{
	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с forward_list:\n" << std::endl;

	std::forward_list<int> fl;
	fl.push_front(1);
	fl.push_front(13);
	fl.push_front(26);
	fl.push_front(15);
	fl.push_front(8);

	std::forward_list<int>::iterator it = fl.before_begin();

	fl.erase_after(it);

	for (auto el : fl)
	{
		std::cout << el << std::endl;
	}

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с array(статический массив):" << std::endl;

	std::array<int, 4> arr = { 1, 2, 4, 6 };

	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с перегрузкой операторов сравнения для контейнеров STL:" << std::endl;

	std::forward_list<int> f = { 1,52,73,84,24,73,22 };
	std::forward_list<int> f1 = { 1,52,73,84,24,73 };

	bool result = (f > f1);

	std::cout << "Результат сравнения: " << result << std::endl;


}
