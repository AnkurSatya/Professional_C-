#include <format>
#include <iostream>
#include <string>
#include <limits>

using std::cout;
using std::format;
using std::endl;

// class CircleClass
// {
//     public:
//         CircleClass(int x, int y, double radius)
//             : m_x { x }, m_y { y }, m_radius {radius}  {
//                 cout << format("Radius is {}", m_radius) << endl;
//             }
//     private:
//         int m_x, m_y;
//         double m_radius;
// };

int main(){
    // std::string name = "Ankur";
    // std::cout << std::format("Hello, {}!\n", name);
    
    // CircleClass myCircle{10, 10, 12.34};

    // int uninitialisedInt;
    // int initialisedInt {17179869} ;

    // cout << format("{} is a random value", uninitialisedInt) << endl;
    // cout << format("{} is a given value", initialisedInt) << endl;

    // long l { 22147483649};
    // cout << INT_MAX<<endl;
    // cout << format("{} is a long type var", l) << endl;

    // CHARS

    // char a {'a'};
    // signed char b {'a'};
    // unsigned char c {200};
    
    // cout << format("char: {}", a) << endl;
    // cout << format("signed char: {}", b) << endl;
    // cout << format("unsigned char: {}", c) << endl;

    // Storing bytes and how to print them.
    // std::byte b {1};
    // cout << format("byte: {}", std::bitset<8>(std::to_integer<int>(b)).to_string()) << endl;
    // cout << std::bitset<8>(std::to_integer<int>(b)) << endl;

    // Numerical limits
    // cout << "int\n";
    // cout << format("Min int value: {}", std::numeric_limits<long long int>::min()) << endl;
    // cout << format("Max int value: {}", std::numeric_limits<long long int>::max()) << endl;
    // cout << format("Lowest int value: {}", std::numeric_limits<long long int>::lowest()) << endl;

    // cout << "double\n";
    // cout << format("Min double value: {}", std::numeric_limits<float>::min()) << endl;
    // cout << format("Max double value: {}", std::numeric_limits<float>::max()) << endl;
    // cout << format("Lowest double value: {}", std::numeric_limits<float>::lowest()) << endl;

    // Casting
    float a {3.24454545454545};
}