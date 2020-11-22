#include"iostream"

int main(void)
{
	FILE *f =  fopen("lloyds.csv", "r");
	char buff[255];
	
	fgets(buff, 255, f);
	printf("%s", buff);

  	fclose(f);
  
	return 0;
}
