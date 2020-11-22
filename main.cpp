#include<iostream>
#include<fstream>
#include<string>

int main(void)
{
	std::ifstream file("lloyds.csv");
 	std::string buf((std::istreambuf_iterator<char>(file)),
                       (std::istreambuf_iterator<char>()));
                       
	std::cout << buf;
 
	return 0;
}
