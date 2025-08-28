#include <stdio.h>

int main(){
	FILE *fptr;
	
	fptr=fopen("test.txt","w");
	
	fprintf(fptr,"Hello,Ganesh How are you");
	fclose(fptr);
	return 0;
}
