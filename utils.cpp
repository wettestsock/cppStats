#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "header.hpp"

int test(int a, int b) {
	int c = a * b;
	return a + b + c;

};

void initialize() {
	int rows = 0;
	int cols = 0;
	int i = 0;
	std::string in;
	std::cout << "EFFICIENT TABLE DATA ANALYZER\nby Dmytro Moshkovskyi\n\n";
	while (rows<1)
	{
		std::cout << "How many rows?\t";
		std::cin >> in;
		try
		{
			rows = std::stoi(in);
		}
		catch (const std::invalid_argument&)
		{
			continue;
		}
		catch (const std::out_of_range&) {
			continue;
		}
	}
	for (i = 0; i < rows; ++i) {
		std::cout << "Row " << i + 1 << " name:\t";
	}

	while (cols < 1)
	{
		std::cout << "How many columns?\t";
		std::cin >> cols;
	}

	for (i = 0; i < cols; ++i) {
		std::cout << "Column " << i + 1<<" name:\t";
	}
	


};

table::table() {
	
};

table::~table() {

}

void table::print() {

}

void table::print(table) {

};
