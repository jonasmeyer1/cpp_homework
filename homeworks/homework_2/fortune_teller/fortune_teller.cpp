#include <iostream>
#include <string>
#include <map>
#include <array>


using std::cout;
using std::cin;
using std::endl;
using std::string_literals::operator""s;

void fortune_teller_func() {
    std::map<std::string, std::string> noun = {
        {"spring", "STL guru"},
        {"summer", "C++ expert"},
        {"autumn", "coding beast"},
        {"winter", "software design hero"},
    };

    std::array<std::string, 3> ending = {
        "eats UB for breakfast",
        "finds errors quicker than the compiler",
        "is not afraid of C++ error messages"};


    std::array<std::string, 2> adjective{};


    cout << "Welcome to the fortune teller program!" << endl;
    cout << "Please enter your name:" << endl;
    std::string name{};
    cin >> name;

    cout << "Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
    std::string season{};
    cin >> season;

    cout << "Please enter an adjective:" << endl;
    cin >> adjective[0];

    cout << "Please enter another adjective:" << endl;
    std::string adj2{};
    cin >> adjective[1];

    std::string res{};
    res = name + ", the" + adjective[name.size() % adjective.size()] + " " + noun.at(season) + " " + ending[name.size() % ending.size()];
    
    cout << res << endl; 
}

int main() {
    fortune_teller_func();
    return 0;
}
