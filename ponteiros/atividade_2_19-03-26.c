#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10


int main(){
	srand(time(NULL));
	
	int values[length];
	int *zip;
	short int v, m;
	short int repeat;
	
	
	
	for(v=0; v<length; v++)
		do {
			values[v] = rand() % 100;
			repeat = 0;
			for(m=0;m<v;m++)
				if(values[v] == values[m])
				repeat = 1;
		}while(repeat == 1);
		
	for(v=0;v<length;v++)
		printf("[%d]\n",values[v]);
		
	
	int *address = values+(sizeof(values)/sizeof(int));
	
	for(zip=values;zip<=address;zip++)
		printf("%p  %2d\n",&*zip,*zip);

	return 0;
}
	
	

