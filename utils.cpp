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

//HELPER FUNCTIONS
int table::get_Uint(const std::string& question){
	std::string in;
	int out = 0;
	while (out == 0)
	{
		std::cout << question << '\t';
		std::cin >> in;
		try
		{
			out= abs(std::stoi(in));
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


void table::len_check(const str_cell*& c, size_t& lenCounter) {
	if (c.data.length() > colLen)
		lenCounter = c.data.length();
};





table::table(): 
//member initialization list
rows(get_Uint("How many rows?")),  //rows init
cols(get_Uint("How many columns?")),  //cols init
rowLen(1),
colLen(1),
colHead(new str_cell) //head cell init
rowHead(new str_cell) //head cell init
{
	//constructor body
	//TODO: add capabilities for multiple table storage

	//std::cout << head->data << N << head->right << N <<head->down<<N;
	

	str_cell* c = colHead;
		

	for (int i = 0; i < rows; ++i) {
		str_cell* newRow = new str_cell;
		std::cout << "Row " << i+1 << " name:\n";
		std::getline(std::cin, newRow->data);

		len_check(newRow, rowLen);
		c->down = newRow;
		c = newRow;

	}

	c = rowHead;
	for (int i = 0; i < cols; ++i) {
		str_cell* newCol = new str_cell;
		std::cout << "Col " << i+1 << " name:\n";
		std::getline(std::cin, newCol->data);

		len_check(newCol, colLen);

		c->right = newCol;
		c = newCol;
	}
	std::cout << "row len: " << rowLen << N << "col len: " << colLen<<N;





};


table::~table() {
	//destructor
	//deallocates all the raw pointers
	//TODO: DELETE ALL ROWS 

	str_cell* col_del = head;
	while (col_del != NULL) {
		

		str_cell* temp = col_del;
		col_del = col_del->down;
		delete temp;
	}
	head = nullptr; //makes head null

	//std::cout << "deleted the pointers"<< N;
}

void table::print() {

}

void table::print(table) {

};
