#include <stdio.h>
int main(){
	
	FILE *fptr;
	fptr=fopen("haha.txt","r");
	
	char myString[100];
	
	//fgets(myString,100,fptr);
	
//	while(fgets(myString,100,fptr)){
//		printf("%s",myString);
//	}

 if(fptr!=NULL){
 	while(fgets(myString,100,fptr)){
 		printf("%s",myString);
	 }
 }
 else{
 	printf("Not able to open the file");
 }
 
	
	printf("%s",myString);
	
	fclose(fptr);
	
	
	return 0;
}
