#include "Array.hpp"
#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

void print_header(std::string title) {
    std::cout << "\n" << YELLOW << "=== " << title << " ===" << RESET << std::endl;
}

int main() {
    print_header("TEST 1: EMPTY ARRAY");
    Array<int> empty;
    std::cout << "Size of empty: " << empty.size() << std::endl;
    try {
        std::cout << "Trying to access empty[0]..." << std::endl;
        std::cout << empty[0] << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Caught expected exception: " << e.what() << RESET << std::endl;
    }


    print_header("TEST 2: INT ARRAY DEFAULT INITIALIZATION");
    unsigned int n = 5;
    Array<int> numbers(n);
    std::cout << "Created array of size " << numbers.size() << ":" << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << " (should be 0)" << std::endl;
    }

    print_header("TEST 3: STRING ARRAY");
    Array<std::string> words(3);
    words[0] = "Hello";
    words[1] = "C++";
    words[2] = "Template";
    
    std::cout << "String array contents:" << std::endl;
    for (unsigned int i = 0; i < words.size(); i++) {
        std::cout << "words[" << i << "] = " << CYAN << words[i] << RESET << std::endl;
    }

    print_header("TEST 4: DEEP COPY & ASSIGNMENT");
    Array<std::string> words_copy(words);
    std::cout << "Copied words into words_copy. Modifying words_copy[0]..." << std::endl;
    words_copy[0] = "BYE";

    std::cout << "Original words[0]: " << GREEN << words[0] << RESET << " (should be Hello)" << std::endl;
    std::cout << "Copy words_copy[0]: " << RED << words_copy[0] << RESET << " (should be BYE)" << std::endl;

    Array<std::string> words_assigned;
    words_assigned = words;
    std::cout << "Assigned words to words_assigned. Size: " << words_assigned.size() << std::endl;

    print_header("TEST 5: OUT OF BOUNDS");
    try {
        std::cout << "Accessing index 10 in array of size 3..." << std::endl;
        words[10] = "CRASH";
    } catch (const std::exception& e) {
        std::cout << RED << "Caught expected exception: " << e.what() << RESET << std::endl;
    }

    std::cout << "\n" << GREEN << "--- All tests completed ---" << RESET << "\n" << std::endl;

    return 0;
}
