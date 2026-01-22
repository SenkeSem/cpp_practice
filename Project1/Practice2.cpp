#include "Practice2.h"
#include <iostream>
#include <deque>
#include <set>
#include <map>
#include <string>


void practice2()
{
	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с deque(двусторонняя очередь):" << std::endl;

	std::deque<int> de = { 1,4,17 };
	de.push_back(18);
	de.push_front(-5);

	for (auto el : de)
	{
		std::cout << el << std::endl;
	}

	std::cout << "\n";
	std::cout << de.front() << std::endl;
	std::cout << de.max_size() << std::endl;

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с set и multiset(создан на основе бинарного дерева):" << std::endl;

	std::set<int> s;
	s.insert(1);
	s.insert(4);
	s.insert(17);
	s.insert(24);
	s.insert(5);
	s.insert(-8);

	//s.erase(1);
	//s.erase(17);

	for (auto& el : s)
	{
		std::cout << el << std::endl;
	}

	//int value;
	//std::cin >> value;
	//// итератор будет указывать на end, если не найдёт число в set

	//if (auto it = s.find(value) != s.end())
	//{
	//	std::cout << "Число " << value << " найдено в set :)" << std::endl;
	//}
	//else
	//{
	//	std::cout << "Число " << value << " НЕ найдено в set :(" << std::endl;
	//}

	std::multiset<int> ms = { 1,1,5,7,8,15,73,73 };

	std::cout << "\n";
	for (auto& el : ms)
	{
		std::cout << el << std::endl;
	}

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с map и multimap:" << std::endl;

	//std::pair<int,std::string> p(1, "телефон");
	//std::cout << p.first << std::endl;
	//std::cout << p.second << std::endl;

	std::map<int, std::string> myMap;
	myMap.insert(std::make_pair(1, "телефон"));
	myMap.emplace(2, "шоколад");
	myMap.emplace(3, "вода");
	myMap.emplace(7, "вода1");
	myMap.emplace(10, "вода2");
	myMap.emplace(-4, "вода3");
	myMap.emplace(77, "вода4");

	//myMap.erase(-4);
	//myMap.erase(77);
	//myMap.erase(1);

	//std::multimap<std::string, int> myMap;

	//myMap.emplace("Вася", 12);
	//myMap.emplace("Вася", 19);
	//myMap.emplace("Саша", 27);
	//myMap.emplace("Дима", 172);
	//myMap.emplace("Толя", 1666);

	for (auto& el : myMap)
	{
		std::cout << el.first << " " << el.second << std::endl;
	}

	int key;
	std::cin >> key;
	
	if (myMap.find(key) != myMap.end())
	{
		std::cout << "Элемент с ключом " << key << " присутствует" << " и содержит значение " << myMap[key] << std::endl;
	}
	else
	{
		std::cout << "Элемент с ключом " << key << " отсутствует" << std::endl;
	}
}
