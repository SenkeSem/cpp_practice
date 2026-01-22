#include "Practice4.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

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


void practice4()
{
	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c алгоритмом сортировки, бинарным предикатом и лямбда функцией:" << std::endl;

	std::vector<int> v = { 1,5,73,42,63,866,63,74,25,16 };

	std::sort(v.begin(), v.end(), [](int a, int b) {return a > b; }); // третий аргумент это анонимная функция

	//for (auto el : v)
	//{
	//	std::cout << el << std::endl;
	//}

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

	std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) { return a.Score < b.Score; });

	for (auto el : people)
	{
		std::cout << "Имя:\t" << el.Name << "\tбаллы:\t" << el.Score << std::endl;
	}

	std::cout << "\n___________________________________________________" << std::endl;
	std::cout << "Практика c find, find_if:" << std::endl;

	std::vector<int> vec = { 1,6,2,74,84,36,77,222,6,3,1,7,-4 };

	for (auto el : vec)
	{
		std::cout << el << " ";
	}
	std::cout << "\n";

	//int value1;
	//std::cout << "Введите искомое число: ";
	//std::cin >> value1;

	//if (std::find(vec.begin(), vec.end(), value1) != vec.end())
	//{
	//	std::cout << "такое число есть в коллекции" << std::endl;
	//}
	//else
	//{
	//	std::cout << "такого числа нет в коллекции" << std::endl;
	//}

	auto p = std::find_if(vec.begin(), vec.end(), [](int a) { return a % 4 == 0; });

	if (p != vec.end())
	{
		std::cout << "Найден элемент: " << *p << std::endl;
	}
	else
	{
		std::cout << "Элемент не найден" << std::endl;
	}

	std::vector<Person> people1
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

	auto p1 = std::find_if(people1.begin(), people1.end(), [](const Person& pe) { return pe.Score > 100; });

	if (p1 != people1.end())
	{
		std::cout << "Найден элемент: " << (*p1).Name << " " << (*p1).Score << std::endl;
	}
	else
	{
		std::cout << "Элемент не найден" << std::endl;
	}

}
