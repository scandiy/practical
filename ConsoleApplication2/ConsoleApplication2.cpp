#include <iostream>
#include <string>
#include <ctime>


int main() {
    // Введення даних
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Розрахунок року народження
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    int birthYear = currentYear - age;

    // Виведення результату
    std::cout << "Hi, " << name << "! Your birth year: " << birthYear << std::endl;

    return 0;
}