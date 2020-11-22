#include<fstream>
#include"io.h"

using namespace std;

void File::save (double a)
{
	ofstream file;		
	file.open("test.txt");
	
	file << a;			
	file.close();	
}
