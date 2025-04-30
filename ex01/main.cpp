#include "Span.hpp"

int main() {
	try {
		std::cout << "\033[34mSubject test >>>\033[0m\n";
		Span one(5);
		one.addNumber(6);
		one.addNumber(3);
		one.addNumber(17);
		one.addNumber(9);
		one.addNumber(11);
		std::cout << one << '\n';
		std::cout << "Shortest span: " << one.shortestSpan() << '\n'; 
		std::cout << "Longest span: " << one.longestSpan() << '\n'; 
		std::cout << one;
		std::cout << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	try {
		std::cout << "\033[34mAdd range >>>\033[0m\n";
		Span two(-5);
		two.addRange(5);
		std::cout << two << '\n';
		std::cout << "Shortest span: " << two.shortestSpan() << '\n'; 
		std::cout << "Longest span: " << two.longestSpan() << '\n'; 
		std::cout << two;
		std::cout << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	
    return 0;
}