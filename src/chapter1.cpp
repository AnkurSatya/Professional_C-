// #include <format>
// #include <vector>
// #include <typeinfo>
// #include <iostream>
// #include <string>
// #include <utility>
// #include <functional>
// #include <array>

// #include "employee.h"
// #include "references_vs_pointers.h"

// using std::cout;
// using std::format;
// using std::endl;
//
// struct SalaryStructure{
//     int baseSalary;
//     int holidayAllowance;
// };

// struct Employee{
//     char firstInitial;
//     char lastInitial;
//     int employeeNumber;
//     int salary;
//     SalaryStructure salaryStructure;
// };


// int& increment(int a){
//     int b = a+1;
//     cout << "Address of the main object: " << &b << endl;
//     return std::ref(b);
// }


// int main(){
    // int a {2};
    // auto& b {a};
    // auto c {a};

    // // for (int& ref: {std::ref(a), std::ref(b), std::ref(c)}) cout << &ref << endl;

    // auto& d = increment(a);
    // // cout << "Address of the returned object: " << &d << endl;
    // d = 20;
    // cout << d << endl;

    // int a;
    // int* const b {&a};
    // int const* c {&a};
    // const int* d {&a};

    // const auto p1 {&a};
    // *p1 = 20;

    // auto d {11, 22}; // Does not compile. This way only single value should be inside {}
    // First method
    // std::array a {11,22};
    // auto [b,c] {a};
    // // Second method
    // auto d = std::array {11,22};
// }

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// #include <array>
// #include <string>
// #include <limits>
// #include <typeinfo>

// #include <vector>
// #include <optional>

// // void addOne(int& a){
// //     a++;
// // };

// // class MyClass{
// //     private:
// //         const int& xref {5};
// //     public:
// //         MyClass(int& ref) : xref {ref}{
// //             cout << xref << endl;
// //         }
// // };

// // Optional type
// // std::optional <int> getHalf(int num){
// //     cout << "val is: " << checkVar << endl;
// //     if (num >= 0) return num /2 ;
// //     return std::nullopt;
// // }


// // [[noreturn]] void forceProgramTermination(){ exit(1); }

// // // Nodiscard is an attribute
// // [[nodiscard("Attribute testing")]] int add (int a, int b){ return a+b; }

// // double add (double a, double b){ return a+b; }


// // class CircleClass
// // {
// //     public:
// //         CircleClass(int x, int y, double radius)
// //             : m_x { x }, m_y { y }, m_radius {radius}  {
// //                 cout << format("Radius is {}", m_radius) << endl;
// //             }
// //     private:
// //         int m_x, m_y;
// //         double m_radius;
// // };

// // enum class Color : int{
// //     RED = 1,
// //     GREEN = 10,
// //     BLUE = 100
// // };

// // enum class Direction{
// //     NORTH = 'N'
// // };

// int main(){
//     // std::string name = "Ankur";
//     // std::cout << std::format("Hello, {}!\n", name);

//     // CircleClass myCircle{10, 10, 12.34};

//     // int uninitialisedInt;
//     // int initialisedInt {17179869} ;

//     // cout << format("{} is a random value", uninitialisedInt) << endl;
//     // cout << format("{} is a given value", initialisedInt) << endl;

//     // long l { 22147483649};
//     // cout << INT_MAX<<endl;
//     // cout << format("{} is a long type var", l) << endl;

//     // CHARS

//     // char a {'a'};
//     // signed char b {'a'};
//     // unsigned char c {200};

//     // cout << format("char: {}", a) << endl;
//     // cout << format("signed char: {}", b) << endl;
//     // cout << format("unsigned char: {}", c) << endl;

//     // Storing bytes and how to print them.
//     // std::byte b {1};
//     // cout << format("byte: {}", std::bitset<8>(std::to_integer<int>(b)).to_string()) << endl;
//     // cout << std::bitset<8>(std::to_integer<int>(b)) << endl;

//     // Numerical limits
//     // cout << "int\n";
//     // cout << format("Min int value: {}", std::numeric_limits<long long int>::min()) << endl;
//     // cout << format("Max int value: {}", std::numeric_limits<long long int>::max()) << endl;
//     // cout << format("Lowest int value: {}", std::numeric_limits<long long int>::lowest()) << endl;

//     // cout << "double\n";
//     // cout << format("Min double value: {}", std::numeric_limits<float>::min()) << endl;
//     // cout << format("Max double value: {}", std::numeric_limits<float>::max()) << endl;
//     // cout << format("Lowest double value: {}", std::numeric_limits<float>::lowest()) << endl;

//     // Casting
//     // float a {3.2445};

//     // cout << (int) a << endl; // Leftover from C
//     // cout << int (a) << endl; // Rarely used
//     // cout << static_cast<int>(a) << endl; // Verbose but the cleanest one. Also suppresses conversion warnings since it is an explicit conversion.

//     // unsigned char b {250};
//     // cout << static_cast<signed char>(b) << endl;

//     // Floating point arithmetic
//     // cout << "Using float to store the difference of almost identical numbers " << endl;
//     // float a {12345.7895f};
//     // float b {12345.7795f};
//     // cout << a - b << endl;

//     // cout << "Using double to store the difference of almost identical numbers " << endl;
//     // double c {12345.7895};
//     // double d {12345.7795};
//     // cout << c - d << endl;

//     // // Infinity and NaN
//     // float e {1.0f/0};
//     // float f {0.0f/0};

//     // cout << std::isinf(e) << endl;
//     // cout << std::isnan(f) << endl;

//     // int i = 10;
//     // cout << i << endl;
//     // i = i << 2;
//     // cout << i << endl;

//     // Enumerators(Enums)

//     // Color primary {Color::RED};
//     // int secondary {Color::BLUE}; // this can be done with an Enum member but not an "Enum class" member. Read diff b/w the two.
//     // cout << format("primary color: {}", static_cast<int>(primary)) << endl;
//     // cout << format("primary color: {}", secondary) << endl;
//     // cout << typeid(Color::RED).name() << endl;

//     // Direction north {Direction::NORTH};
//     // cout << static_cast<char>(north) << endl;

//     // Structs
//     // SalaryStructure a{564454, 4545};

//     // Employee anEmployee;
//     // anEmployee.firstInitial = 'A';
//     // anEmployee.lastInitial = 'S';
//     // anEmployee.employeeNumber = 13;
//     // anEmployee.salary = 554434;
//     // anEmployee.salaryStructure = a;

//     // Functions
//     // int a {20};
//     // int b {43};
//     // // add(a,b);
//     // cout << add(a, b) << endl;

//     // double c {20.2};
//     // double d {26.5};
//     // cout << add(c,d ) << endl;

//     // // cout << add(c, b) << endl;
//     // cout << add(static_cast<int>(a), b) << endl;

//     // forceProgramTermination();

//     // Standard Libaray containers
//     // std::array <int, 4> arr { 1,2,3,6 }; // or std::array arr { 1,2,3 }; since C++ supports CTAD(Class template argument deduction).
//     // std::array <std::array <int, 5>, 3> arr2d{};

//     // cout << arr[0] << endl;
//     // cout << arr2d[1][2] << endl;

//     // std::vector <int> v{}; // or std::vector v {1,2}; since C++ supports CTAD.
//     // v.push_back(20);
//     // // cout << format("vector value: {}", v.[0]) << endl; // Using .at() is safer since
//     // cout << format("vector value: {}", v.at(0)) << endl;

//     // Optional type
//     // std::optional<int> a { getHalf(4) };
//     // cout << a.value() << endl;

//     // std::optional<int> b { getHalf(-1) };
//     // // cout << b.value() << endl;
//     // cout << b.value_or(-1) << endl;

//     // Loops
//     // for (int i {0}; i < 5; ++i){
//     //     cout << i << endl;
//     // }

//     // Employee employee {'A', 'S', 121, 100};

//     // Pointers
//     // int* a {new int {5}};
//     // cout << *a << endl;

//     // int* b {new int{5}};
//     // bool check { b && *b > 0};
//     // cout << "Check: " << check << endl;

//     // Use of const
//     // int* ip;
//     // ip = new int[10];
//     // ip[4] = 5;


//     // int const* ip1; // OR const int*
//     // ip1 = new int[10];
//     // // ip1[4] = 5;

//     // int* const ip2 {new int[5]};
//     // // ip2 = new int [2];
//     // ip2[2] = 3;

//     // int const* const ip3 {new int[3]};
//     // // ip3 = new int [4];
//     // // ip3[2] = 28;
// }
//     // int x {3};
// int& xref {x};
// int* xp = &x;
// cout << ((&x == &xref) && (&xref == xp)) << endl;

// std::array <int, 3> arr {1,2,3};
// auto& [a,b,c] {arr};
// cout << format("{}, {}, {}", a, b, c) << endl;
// a = 29;
// cout << arr[0] << endl;

// int x {3};
// addOne(x);
// cout << x << endl;

// Does not compile.
// int* p{ (int*) 8};
// p = new int {8};
// cout << *p << endl;

// int unSplit[] {1,2,3,4,5,6,7,8,9,10};
// int* oddNums {nullptr};
// int* evenNums {nullptr};
// size_t numOdds {0}, numEvens {0};

// separateOddsAndEvens(unSplit, std::size(unSplit), &oddNums, &numOdds, &evenNums, &numEvens);
// cout << "The pointers way -> \n";
// cout << format("size odd: {}, size even: {}", numOdds, numEvens) << endl;
// cout << oddNums[0] << endl;
// cout << evenNums[1] << endl;

// delete[] oddNums;
// oddNums = nullptr;
// delete[] evenNums;
// evenNums = nullptr;

// numOdds = numEvens = 0;
// cout << "The references way -> \n";
// separateOddsAndEvens(unSplit, std::size(unSplit), oddNums, numOdds, evenNums, numEvens);
// cout << format("size odd: {}, size even: {}", numOdds, numEvens) << endl;
// cout << oddNums[0] << endl;
// cout << evenNums[1] << endl;

// std::vector <int> allNums {1,2,3,4,5,6,7,8,9,10};
// std::vector <int> oddNums, evenNums;

// cout << "The vector way -> \n";
// separateOddsAndEvens(allNums, oddNums, evenNums);
// cout << format("size odd: {}, size even: {}", std::size(oddNums), std::size(evenNums)) << endl;
// cout << oddNums[0] << endl;
// cout << evenNums[1] << endl;

// std::vector <int> allNums {1,2,3,4,5,6,7,8,9,10};

// cout << "The vector way while considering NRVO optimisation-> \n";
// OddsAndEvens oddsAndEvens {separateOddsAndEvens(allNums)};
// cout << format("size odd: {}, size even: {}", std::size(oddsAndEvens.odds), std::size(oddsAndEvens.evens)) << endl;
// cout << oddsAndEvens.odds[0] << endl;
// cout << oddsAndEvens.evens[1] << endl;

// std::string str {"ankur"};
// const std::string& constStr {std::as_const(str)};
// cout << constStr << endl;
