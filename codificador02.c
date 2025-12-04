#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Dupla: Franciele Alves e Kaillane Martins

void criptografar(char mensagem[], int deslocamento){
    for(int i = 0; mensagem[i] != '\0'; i++){
        if(isupper(mensagem[i])){
            mensagem[i] = 'A' + (mensagem[i] - 'A' + deslocamento) % 26;
        }else if(islower(mensagem[i])){
            mensagem[i] = 'a' + (mensagem[i] - 'a' + deslocamento) % 26;
        }
    }
}

int main()
{
    char mensagem[100];
    int deslocamento = 0;
    
    printf("Digite a mensagem: \n");
    gets(mensagem);
    printf("Digite o deslocamento: \n");
    scanf("%d", &deslocamento);
    criptografar(mensagem, deslocamento);
    printf("mensagem codificada: %s\n", mensagem);
    
    return 0;
}