// Name: Annie Van
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>

int main()
{
  std::string location; // Location of trip
  int days; // Days the trip will take
  double hotel_expense;
  double meal_expense;
  double total;

  std::cout << "Welcome to the Business Trip Tracker!" << std::endl;

  std::cout << std::endl; //Blank line to seperate intro and questions

  std::cout << "What is the business trip location? ";
  std::cin.getline(location);
  location = location.substr(0,20);

  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_expense;

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_expense;

  total = hotel_expense + meal_expense;

  std::cout << "Location" << std::setw(8) << "Days" << std::setw(9) << "Hotel" << std::setw(9) << "Meals" << std::setw(9) << "Total\t" << std::endl;
  std::cout << std::fixed << std::setprecision(2) << location << std::setw(10) << days << std::setw(8) << hotel_expense << std::setw(12) << meal_expense << std::setw(10) << total << std::endl;
}
