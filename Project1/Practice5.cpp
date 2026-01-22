#include "Practice5.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>

class Person
{
public:
	Person(std::string name, double score)
	{
		this->Name = name;
		this->Score = score;
	}

	bool operator()(const Person& p)
	{
		return p.Score > 180;
	}

	std::string Name;
	double Score;
};



void practice5()
{
	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c copy, copy_if:" << std::endl;

	std::vector<Person> people
	{
		Person("Даша",30),
		Person("Андрей",180),
		Person("Максим",62),
		Person("Аполон",173),
		Person("Гриша",200),
		Person("Дима",17),
		Person("Женя",160),
		Person("Саша",150),
		Person("Игорь",140),
		Person("Петя",133),
	};

	std::vector<Person> result;

	std::copy_if(people.begin(), people.end(), std::back_inserter(result), [](const Person& a) {return (a.Score >= 135); });

	std::cout << "Всего элементов в векторе: " << result.size() << std::endl;

	for (auto elem : result)
	{
		std::cout << "Имя:\t" << elem.Name << "\tбаллов:\t" << elem.Score << std::endl;
	}

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c remove, remove_if:" << std::endl;

	std::vector<int> v = { 1,52,3,26,73,4,6,2,3,4,5,3,6,7,8,9 };
	for (auto el : v)
	{
		std::cout << el << " ";
	}
	std::cout << "\n";

	//auto point = std::remove(v.begin(), v.end(), 3); 
	//v.erase(point, v.end());

	auto point1 = std::remove_if(v.begin(), v.end(), [](const int& a) {return (a <= 8); });
	v.erase(point1, v.end());


	for (auto el : v)
	{
		std::cout << el << " ";
	}
	std::cout << "\n";


	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Поиск наибольшего элемента:" << std::endl;

	std::vector<int> vec = { 1,2,3,4,777,5,6,7,8,9,35,25,36,47,58,69,13,15,36,47,74 };
	std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
	std::cout << "Наибольший элемент в векторе: " << *max << std::endl;

	std::list<int> l1 = { 1,2,3,4,177,5,6,7,8,9,35,25,36,47,58,69,13,15,36,47,74 };
	std::list<int>::iterator max1 = std::max_element(l1.begin(), l1.end());
	std::cout << "Наибольший элемент в списке: " << *max1 << std::endl;


	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Поиск наименьшего элемента:" << std::endl;

	const int SIZE = 6;
	int arr[SIZE] = { -5,6,94,26,84,2 };

	auto min = std::min_element(arr, arr + SIZE);
	std::cout << "Минимальный элемент в массиве: " << *min << std::endl;

	std::list<int> l2 = { 1,2,3,4,177,5,6,7,8,47,58,69,13,15,36,47,74 };
	auto minmax = std::minmax_element(l2.begin(), l2.end());

	std::cout << "Максимальный элемент списка l2: " << *minmax.second << "\nМинимальный элемент списка l2: " << *minmax.first << std::endl;
}
