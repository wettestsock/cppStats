#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "header.hpp"

int test(int a, int b) {
	int c = a * b;
	return a + b + c;

};

void init() {
	std::cout << "EFFICIENT TABLE DATA ANALYZER\nby Dmytro Moshkovskyi\n\n";
	table a;
}


int table::get_Uint(const std::string& question){
	std::string in;
	int out = 0;
	while (out < 1)
	{
		std::cout << question << '\t';
		std::cin >> in;
		try
		{
			out= std::stoi(in);
		}
		catch (const std::invalid_argument&)
		{
			continue;
		}
		catch (const std::out_of_range&) {
			continue;
		}
	}
	std::cout << N;
	return out;
};

table::table(): 
//member initialization list
rows(get_Uint("How many rows?")),  //rows init
cols(get_Uint("How many columns?")),  //cols init
head(new cell<std::string>) //head cell init
{
	//constructor body

	*head = {"TABLE", nullptr, nullptr}; //head values init
	//TODO: add capabilities for multiple table storage
	
	//std::cout << head->data << N << head->right << N <<head->down<<N;

	
	cell<std::string>* c = head;
	for (int i = 1; i < rows; ++i) {
		cell<std::string>* newCell = new cell<std::string>;
		
		std::cout << "Row " << i + 1 << " name:\t";
		std::cin >> newCell->data;
		c->down = newCell;
		c = newCell;




	}
	for (int i = 0; i < cols; ++i) {
		cell<std::string>* newCell = new cell<std::string>;
		std::cout << "Column " << i + 1 << " name:\t";
		std::cin >> newCell->data;
	}



};


table::~table() {

}

void table::print() {

}

void table::print(table) {

};
