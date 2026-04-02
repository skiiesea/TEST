#include <iostream>
#include <string>

int add(int a, int b) 
{
    return a + b;
}

int main() 
{
    std::string name;
    std::cout << "Input your Name: " << std::endl;
    std::cin >> name;
    std::cout << "Greatings, " << name;
    return 0;
}
