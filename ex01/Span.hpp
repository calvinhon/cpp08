#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>

class Span {
    public:
        Span(unsigned int N);
        Span(const Span& src);
        Span& operator=(const Span& src);
        ~Span();

        void            addNumber(int num);
        void            addRange(unsigned int numOfElements);
		unsigned int	getSize() const;
		unsigned int	getEntries() const;
		int				getEntry(unsigned int i) const;
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
    
        class ElementOverflow: public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class NotEnoughElements: public std::exception {
            public:
                virtual const char* what() const throw();
        };

    private:
        Span();

        unsigned int	    _size;
        unsigned int	    _entries;
        std::vector<int>	_array;

};

std::ostream& operator<<(std::ostream& os, Span& s);

#endif