#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <forward_list>

class NotFound: public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Value not found!";
        }
};

template <typename T>
std::string easyfind(T container, int val) {
    typename T::iterator it = std::find(container.begin(), container.end(), val);
    if (it != container.end()) {
        std::stringstream ss;
        ss << "Value found at index: " << std::distance(container.begin(), it);
        return ss.str();
    }
    throw NotFound();
}

#endif