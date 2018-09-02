#include <stdio.h>

int main ()
{
	FILE * fp;
	int t=0;

	while(1){
		fp=fopen("./prayer-wheel.txt","w+");
		if (fp){
			for (int j=0; j<1000000; j++){
				fputs("ཨོཾ་མ་ཎི་པདྨེ་ཧཱུྃ\n", fp);
				t++;
			}
		}
		else{
			break;
		}
	}

	printf("%d\n",t);
	return 0;
}