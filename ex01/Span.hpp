#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
    public:
        Span(unsigned int N);
        Span(const Span& src);
        Span& operator=(const Span& src);
        ~Span();

        void            addNumber(int num);
        void            addRange(int numOfElements);
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

        unsigned int	    _elementCount;
        std::vector<int>	_array;

};

#endif