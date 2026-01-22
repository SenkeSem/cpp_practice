#include "Dictionary.h"
#include "Practice.h"
#include "Practice1.h"
#include "Practice2.h"
#include "Practice3.h"
#include "Practice4.h"
#include "Practice5.h"

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

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c accumulate:" << std::endl;

	std::vector<int> vec = { 11,22,33,44,55,66,77,88,99 };
	int total = std::accumulate(vec.begin(), vec.end(), 0, [](int a, int b) {
		//return (a * b);

		if (b % 2 == 0)
			return a + b;

		return a;

		// контролируем работы алгоритмы в анонимной функции
		// a - аккумулятор, b - поступающее значение
		});

	std::cout << "Total: " << total << std::endl;

	std::vector<int> vec1 = { 1,2,3,4,5,6,7,8,9 };
	std::string str = std::accumulate(next(vec1.begin()), vec1.end(), std::to_string(vec1[0]), [](std::string a, int b) {
		return (a + "_" + std::to_string(b));
		});

	std::cout << "Преобразование int'ов в строку: " << str << std::endl;


	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика c equal и mismatch:" << std::endl;

	std::list<int> ls1 = { 1,2,3,4,5,6,7,8,9 };
	std::list<int> ls3 = { 1,2,3,4,5,6,7,8,9,11,24 };
	std::list<int> ls2 = { 1,2,3,4,5,6,7,8,9,11,24 };

	bool result = std::equal(ls1.begin(), ls1.end(), ls2.begin(), ls2.end());
	bool result1 = std::equal(ls2.begin(), ls2.end(), ls3.begin());
	std::cout << "Результат сравнения ls1 с ls2: " << result << std::endl;
	std::cout << "Результат сравнения ls2 с ls3: " << result1 << std::endl;




	return 0;
}