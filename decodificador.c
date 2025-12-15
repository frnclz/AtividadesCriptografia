#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void decodificar(char mensagem[], int deslocamento){
    for(int i = 0; mensagem[i] != '\0'; i++){
        if(isupper(mensagem[i])){
            mensagem[i] = 'A' + (mensagem[i] - 'A' - deslocamento + 26) % 26;
        } else if(islower(mensagem[i])){
            mensagem[i] = 'a' + (mensagem[i] - 'a' - deslocamento + 26) % 26;
        }
    }
}

int main() {
    char mensagem[100];
    int deslocamento;
    
    printf("Digite a mensagem codificada: \n");
    gets(mensagem); 
    
    printf("Tentando todos os deslocamentos possiveis:\n");
    for (deslocamento = 1; deslocamento < 26; deslocamento++) {
        char mensagem_decodificada[100];
        strcpy(mensagem_decodificada, mensagem); 
        
        decodificar(mensagem_decodificada, deslocamento);
        
        printf("Deslocamento %d: %s\n", deslocamento, mensagem_decodificada);
    }
    
    return 0;
}
