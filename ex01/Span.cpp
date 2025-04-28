#include "Span.hpp"

Span::Span(unsigned int N): _size(N), _entries(0), _array(N) {}

Span::Span(const Span& src): _size(src._size), _entries(src._entries), _array(src._array) {}

Span& Span::operator=(const Span& src) {
	if (this != &src) {
		_size = src._size;
		_entries = src._entries;
		_array = src._array;
	}
	return *this;
}

Span::~Span() {}

unsigned int Span::getSize() const { return _size; }

unsigned int Span::getEntries() const { return _entries; }

int Span::getEntry(unsigned int i) const { return _array[i]; }

void Span::addNumber(int num) {
	if (_entries < _size) {
		_array[_entries] = num;
		_entries++;
	}
	else
		throw ElementOverflow();
}

void Span::addRange(unsigned int numOfElements) {
	if (numOfElements <= _size - _entries) {
		std::vector<int>::iterator begin = _array.begin();
		std::advance(begin, _entries);
		std::vector<int>::iterator end = begin;
		std::advance(end, numOfElements);
		int	randNumRange = 100;
		srand(time(NULL));
		for (; begin != end; ++begin) {
			*begin = rand() % (2 * randNumRange + 1) - randNumRange;
			_entries++;
		}
	}
	else
		throw ElementOverflow();
}

unsigned int Span::shortestSpan() {
	int	span;

	if (_entries < 2)
		throw NotEnoughElements();
	std::sort(_array.begin(), _array.begin() + _entries);
	span = abs(_array[1] - _array[0]);
	for (unsigned int i = 3; i < _entries + 1; ++i)
		span = std::min(abs(_array[i - 1] - _array[i - 2]), span);
	return span;
}

unsigned int Span::longestSpan() {
	if (_entries < 2)
		throw NotEnoughElements();
	std::sort(_array.begin(), _array.begin() + _entries);
	return abs(_array[_entries - 1] - _array[0]);
}

const char* Span::ElementOverflow::what() const throw() {
	return "Too many elements!";
}

const char* Span::NotEnoughElements::what() const throw() {
	return "Not enough elements!";
}

std::ostream& operator<<(std::ostream& os, Span& s) {
	unsigned int	size = s.getSize();
	os << "Array: ";
	for (unsigned int i = 0; i < size; ++i)
		os << s.getEntry(i) << " ";
	return os;
}
