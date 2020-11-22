#include<iostream>
#include"io.h"

using namespace std;

int main(void)
{
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
	{
		File f;
		f.save(in + cu);
	}

	return 0;
}
