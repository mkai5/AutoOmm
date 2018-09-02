#include <stdio.h>

int main ()
{
FILE * fp;

while(1){
fp=fopen("./prayer-wheel.txt","w+");
fputs("ཨོཾ་མ་ཎི་པདྨེ་ཧཱུྃ", fp);
}

fclose(fp);
return 0;
}