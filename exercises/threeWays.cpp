#include <iostream>
#include <vector>
#include <algorithm>

// use STL algorithm to check if all elements are divisible by 3
// implement 3 versions:
// * lambda
// * functor
struct DivisibleBy3
{
    bool operator()(int np)
    {
        return np % 3 == 0;
    }
};
// * function
bool isDivisibleBy3(int np);

int main() {
    std::vector numbers = {18, 21, 36, 90, 27, 14, 103};

    // Function
    std::cout << "Function - Number of divisible by 3: " <<
    std::count_if(numbers.begin(), numbers.end(), isDivisibleBy3) << std::endl;

    // Lambda
    // First version
    auto isDivisibleBy3Lambda = [](int np) { return np % 3 == 0; };
    // Second version
    std::cout << "Lambda - Number of divisible by 3: " <<
    std::count_if(numbers.begin(), numbers.end(), [](int np) { return np % 3 == 0; })  << std::endl;
    
    // Functor
    std::cout << "Functor - Number of divisible by 3: " <<
    std::count_if(numbers.begin(), numbers.end(), DivisibleBy3{}) << std::endl;
    
    return 0;
}

bool isDivisibleBy3(int np)
{
    return (np % 3 == 0);
}
