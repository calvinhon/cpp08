#include "easyfind.hpp"

int main(int ac, char** av) {
    if (ac != 2 || !isdigit(av[1][0])) {
        std::cout << "Input only 1 argument, an int" << std::endl;
        return 1;
    }
    int arr[] = {-5, 1, 1, 0, 100, 50};
    int value = atoi(av[1]);
    
    std::cout << "\033[34mVector test >>>\033[0m" << std::endl;
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
    try {
        std::cout << easyfind(vec, value) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\033[34mDeque test >>>\033[0m" << std::endl;
    std::deque<int> deque(arr, arr + sizeof(arr) / sizeof(int));
    try {
        std::cout << easyfind(deque, value) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\033[34mList test >>>\033[0m" << std::endl;
    std::list<int> list(arr, arr + sizeof(arr) / sizeof(int));
    try {
        std::cout << easyfind(list, value) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\033[34mArray test >>>\033[0m" << std::endl;
    std::array<int, sizeof(arr) / sizeof(int)> array;
    std::copy(arr, arr + sizeof(arr) / sizeof(int), array.begin());
    try {
        std::cout << easyfind(array, value) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\033[34mForward List test >>>\033[0m" << std::endl;
    std::forward_list<int> forward_list(arr, arr + sizeof(arr) / sizeof(int));
    try {
        std::cout << easyfind(forward_list, value) << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}