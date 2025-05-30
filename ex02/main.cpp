#include "MutantStack.hpp"

int main() {

	std::cout << "\033[34mSubject tests >>>\033[0m\n";
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17); 
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{ 
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "\033[34mCheck copy >>>\033[0m\n";
	std::cout << "Top of s: " << s.top() << std::endl;
	std::cout << "Size of s: " << s.size() << std::endl;

	std::cout << "\033[34mList check >>>\033[0m\n";
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17); 
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	std::list<int>::iterator lst_it = lst.begin();
	std::list<int>::iterator lst_ite = lst.end();
	++lst_it;
	--lst_it;
	while (lst_it != lst_ite)
	{ 
		std::cout << *lst_it << std::endl;
		++lst_it;
	}

	return 0;
}