/*
 * Imprime la entrada una palabra por linea 
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
	int c;
	bool previous_was_ws = false;	

	while((c = getchar()) != EOF){
		/*if(c == '\n'){
			continue;	
		}
		*/

		if(c != ' ' && c != '\t' && c != '\n'){
			putchar(c);
			previous_was_ws = false;
		}
		else if(!previous_was_ws){
			previous_was_ws = true;
			putchar('\n');	
		}
	}
}
