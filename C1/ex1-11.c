/*
 * Encuentra bugs en el programa si es que hay
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
	int c;
	int lines, words, count, state;

	state = OUT;
	lines = words = count = 0;

	while((c = getchar()) != EOF){
		count++;
		
		if(c == '\n'){
			lines++;	
		}
		
		if(c == '\n' || c == ' ' || c == '\t'){
			state = OUT;			
		}
		else if(state == OUT){
			state = IN;
			words++;
		}
	}

	printf("Newlines: %d\n", lines);	
	printf("Words: %d\n", words);
	printf("Total chars: %d\n", count);
}
