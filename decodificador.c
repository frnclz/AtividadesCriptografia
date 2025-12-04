#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char word[128];
	int nword[128];
	int len;
	int i;
	int w;
	int z;
	char tempword[128];
	
	scanf("%[^\n]s", word);
	len = strlen(word);	
	
	for(i = 0; i < len; i++){
		w = 0;
		while(word[i] != letras[w]){
			w++;
			
		}
		nword[i] = w;
		
	}
	
	for(i = 0; i < len; i++){
		printf("%d", nword[i]);
	}
	printf("\n");
	for(i = 1; i <= 26; i++){
		for(z = 0; z < len; z++){
			w = nword[z] + i;
			if(w >= 26){
				w -= 26;
			}
			printf("%c", letras[w]);
		}
		printf("\n");	
	}
	
	
	return 0;
}