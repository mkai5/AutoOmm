#include <stdio.h>
#include "main.h"

int write (int prev)
{
	FILE * fp;
	int t=prev;

	while(1){
		fp=fopen("./prayer-wheel.txt","w+");
		if (fp){
			for (int j=0; j<100000; j++){
				fputs("ཨོཾ་མ་ཎི་པདྨེ་ཧཱུྃ\n", fp);
				printf("Rotations: %d\n",++t);
			}
		}
		else{
			break;
		}
	}

	return t;
}

int main ()
{
	int total=0;
	int temp;

	while(1){
		temp=write(total);
		total+=temp;
		if (total>10000000)
			total=0;
	}

	return 0;
}