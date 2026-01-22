#include "Practice3.h"
#include <iostream>
#include <stack>
#include <list>
#include <queue>

void practice3()
{
	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика со stack:" << std::endl;

	std::stack<int, std::list<int>> st;

	st.push(1);
	st.push(3);
	st.push(5);
	st.emplace(7); // метод emplace работает быстрее, т.к. создаёт новый объект непосредственно внутри stack
	st.emplace(15);
	st.emplace(26);
	st.emplace(27);
	st.emplace(526);
	st.emplace(7);

	auto cont = st._Get_container(); // обошли адаптер stack и получили доступ сразу к list
	std::cout << cont.front() << "\n" << std::endl;

	//std::cout << st.top() << std::endl;
	//st.pop();
	//std::cout << st.top() << std::endl;
	//std::cout << st.size() << std::endl;

	while (!st.empty())
	{
		std::cout << st.top() << std::endl;
		st.pop();
	}

	std::cout << "___________________________________________________" << std::endl;
	std::cout << "Практика с queue и priority_queue:" << std::endl;

	std::queue<int> q;

	q.push(1);
	q.push(3);
	q.push(5);
	q.push(7);
	q.push(9);
	q.push(11);

	while (!q.empty())
	{
		std::cout << q.front() << std::endl;
		q.pop();
	}

	std::cout << q.size() << std::endl;
	std::cout << "\n";

	std::priority_queue<int> pq;
	pq.push(7);
	pq.push(1);
	pq.push(11);
	pq.push(6);
	pq.push(-3);

	//std::cout << pq.top() << std::endl;
	while (!pq.empty())
	{
		std::cout << pq.top() << std::endl;
		pq.pop();
	}
}
