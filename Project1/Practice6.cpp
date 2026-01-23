#include "Practice6.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <numeric>


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


void practice6()
{
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

	std::vector<int> vec2 = { 9,2,3,4,5,6,7,8,1 };
	std::vector<int> vec3 = { 1,2,3,4,5,6,7,8,9 };

	auto result_mismatch = std::mismatch(vec2.begin(), vec2.end(), vec3.begin(), vec3.end());
	std::cout << "First: " << *(result_mismatch.first) << "\tSecond: " << *(result_mismatch.second) << std::endl;
	std::cout << "\n\n";

	std::vector<Point> p1
	{
		Point(1,3),
		Point(4,5),
		Point(5,7),
	};

	std::vector<Point> p2
	{
		Point(1,3),
		Point(4,5),
		Point(5,7),
	};

	bool result_p = std::equal(p1.begin(), p1.end(), p2.begin(), p2.end(), [](const Point& a, const Point& b)
		{
			return ((a.x == b.x) && (a.y == b.y));
		});

	std::cout << "Результат сравнения двух векторов с точками: " << result_p << std::endl;
}
