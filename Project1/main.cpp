#include "Practice.h"
#include "Practice1.h"
#include "Practice2.h"
#include "Practice3.h"
#include "Practice4.h"
#include "Practice5.h"
#include "Practice6.h"
#include "Practice7.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <numeric>
#include <random>

class IAction
{
public:
	virtual void Action() = 0;
};

class CatAction : public IAction
{
	virtual void Action() override
	{
		std::cout << "Гладим кота" << std::endl;
	}
};

class DogAction : public IAction
{
	virtual void Action() override
	{
		std::cout << "Гуляем с собакой" << std::endl;
	}
};

class SleepAction : public IAction
{
	virtual void Action() override
	{
		std::cout << "Спим" << std::endl;
	}
};

class CoffeeAction : public IAction
{
	virtual void Action() override
	{
		std::cout << "Пьём вкусный кофе" << std::endl;
	}
};

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

class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int x, y;
};

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Доброе утро мир! Я верю меня слышно :)" << std::endl;

	//Dictionary obj;
	//obj.PrintMessage("Привет мир!");

	//практика с vector, итераторами и list
	//practice(); 

	//практика с forward_list, array и перегрузкой операторо сравнения
	//practice1(); 

	//практика с deque, set/multiset и map/multimap
	//practice2();

	//практика со stack, queue и priority_queue
	//practice3();

	//практика с алгоритмом сортировки, бинарным предикатом и лямбда функцией
	//практика с алгоритмом find, find_if
	//practice4();

	//практика с copy, copy_if, remove, remove_if и алгоритмами по нахождению максимального и минимального значения в контейнерах
	//practice5();

	//практика с accumulate, equal и mismatch
	//practice6();

	//практика с for_each, unique и copy_unique
	//practice7();

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c random_shuffle:" << std::endl;

	std::vector<int> vec = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
	std::shuffle(vec.begin(), vec.end(), std::mt19937(std::random_device()()));

	for (auto el : vec)
	{
		std::cout << el << " ";
	}
	std::cout << "\n";
	std::cout << "\n";

	IAction* arr[4] =
	{
		new CatAction(),
		new DogAction(),
		new SleepAction(),
		new CoffeeAction(),
	};

	std::shuffle(std::begin(arr), std::end(arr), std::mt19937(std::random_device()()));

	for (auto &el : arr)
	{
		el->Action();
	}





	return 0;
}