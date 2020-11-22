#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void)
{
	ofstream file;
	file.open("test.txt");
	auto in = 0.0;
	auto cu = 0.0;
	char save; 

	cout << "Investment: ";
	cin >> in;
	
	cout << "Current account: ";
	cin >> cu;

	cout << "Do you want to save? y/n: ";
	cin >> save;
	
	if(save == 'y')
		file << in + cu;
	
	file.close();	
	
	return 0;
}
