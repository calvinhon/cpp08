#include "easyfind.hpp"

int main() {
    int arr[] = {-5, 1, 1, 0, 100, 50};
    int value = 1;
    
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

    return 0;
}