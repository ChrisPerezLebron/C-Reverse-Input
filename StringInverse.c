#include <stdio.h> 

int main( ){

	printf("Enter a message: "); 
	
	char string[80]; 
	
	int count = 0; 
	char currentChar = getchar(); 
	while( count < 80 &&  currentChar != '\n') {
		string[count] = currentChar; 
		count++; 
		currentChar = getchar(); 
	}
	
	//last stored character will be count--
	count--;
	
	for( ; count >= 0; count--) {
		printf("%c", string[count]); 
	} 

}
