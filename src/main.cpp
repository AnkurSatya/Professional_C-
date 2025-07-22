#include <format>
#include <iostream>
#include <string>

int main(){
    std::string name = "Ankur";
    std::cout << format("Hello, {}!\n", name);
    return 1;
}