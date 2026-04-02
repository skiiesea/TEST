#include <iostream>
#include <string>

int great(const std::string str)
{
    std::cout << "Greatings, " << str << std::endl;
}

int main() 
{
    std::string name;
    std::cout << "Input your Name: " << std::endl;
    std::cin >> name;
    great(name)
    return 0;
}
