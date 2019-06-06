#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{

	struct Autor
	{
		std::string name;
		std::string book;
		size_t count;
		size_t year;
		void show()
		{
			std::cout << "============================\n";
			std::cout << "Name :" << name << std::endl;
			std::cout << "Book :" << book << std::endl;
			std::cout << "Count :" << count << std::endl;
			std::cout << "Year :" << year << std::endl;
		}
	};

	std::ifstream bin_file;
	std::string buff;
	bin_file.open("D:\sss.txt");
	while (!bin_file.eof())
	{
		Autor temp;
		std::getline(bin_file, temp.name);
		std::getline(bin_file, temp.book);
		bin_file >> temp.count;
		bin_file >> temp.year;
		if (temp.book.find("dead") != std::string::npos)
		{
			temp.show();
		}
		
	}
}