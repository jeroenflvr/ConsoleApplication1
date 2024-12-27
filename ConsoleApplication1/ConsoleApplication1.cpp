#include <iostream>
#include <vector>
#include <string>
#include <array> // Include the array header

int sum(int a, int b) {
    return a + b;
}


template <size_t N>
int findStringIndex(const std::array<std::string, N>& list, const std::string& target) {
    for (size_t i = 0; i < list.size(); ++i) {
        if (list[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num1 = 0, num2 = 0;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    int result = sum(num1, num2);
    std::cout << "The sum is: " << result << "\n";

    std::array<std::string, 4> list = { "beer", "apple", "banana", "cherry" }; 
    std::string target;

    while (true) {
        std::cout << "Enter a string to find (or 'pp' to exit): ";
        std::cin >> target;

        if (target == "pp") {
            break;
        }

        int index = findStringIndex(list, target);
        if (index != -1) {
            std::cout << "The string is at index: " << index << "\n";
        } else {
            std::cout << "String not found in the list.\n";
        }
    }
    return 0;
}
