#include "Practice.h"
#include "Practice1.h"
#include "Practice2.h"
#include "Practice3.h"
#include "Practice4.h"
#include "Practice5.h"
#include "Practice6.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <numeric>

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

void Foo(std::string s)
{
	std::cout << s << std::endl;
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

	std::vector<int> vec = {1,2,3,3,3,3,4,5,6,6,7,8,99,99,17,394,52,77};
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

	


	return 0;
}