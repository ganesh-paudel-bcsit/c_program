#include <stdio.h>
int main(){
	FILE *fptr;
	
	//create a file
	fptr=fopen("ganesh.txt","w");
	
	//close the file
	fclose(fptr);
	
	return 0;
	
}
