#include "contact_stat.h"
#include <iostream>


//Contact_stat::Contact_stat() {
//	std::cin >> _number;
//	std::cin >> _city;
//	std::cin >> _country;
//}
Contact_stat::Contact_stat()
	: Contact_stat("-", "-", "-") {
    std::cin.getline(_number, sizeof(_number));
    std::cin.getline(_city, sizeof(_city));
    std::cin.getline(_country, sizeof(_country));
}
Contact_stat::Contact_stat(const char* number, const char* city, const char* country) {
    for (int i = 0; i < sizeof(_number); ++i) { 
        _number[i] = number[i];
    }
    for (int i = 0; i < sizeof(_number); ++i) {
        _city[i] = city[i];
    }
    for (int i = 0; i < sizeof(_number); ++i) {
        _country[i] = country[i];
    }
}

void Contact_stat::Show() const {
	std::cout << "number:" << _number << "\n"<< "city:" << _city << "\n"<< "country:" << _country << "\n";
}