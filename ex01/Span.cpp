#include "Span.hpp"

Span::Span(unsigned int N): _elementCount(0), _array(N) {}

Span::Span(const Span& src): _elementCount(src._elementCount), _array(src._array) {}

Span& Span::operator=(const Span& src) {
	if (this != &src) {
		_elementCount = src._elementCount;
		_array = src._array;
	}
	return *this;
}

Span::~Span() {}

void            Span::addNumber(int num) {
	_array.push_back(num);
}

void            Span::addRange(int numOfElements) {
	crand(time(0));
}

unsigned int    Span::shortestSpan() {

}

unsigned int    Span::longestSpan() {

}

const char* Span::ElementOverflow::what() const throw() {
	return "Too many elements!";
}

const char* Span::NotEnoughElements::what() const throw() {
	return "Not enough elements!";
}
