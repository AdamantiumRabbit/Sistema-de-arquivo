
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*criar,salvar, ler, excluir, listar*/



void criarArquivo(){
    printf("cria arquivo\n");
    
} 


void lerArquivo(){
    printf("ler arquivo\n");
    
} 


void salvarArquivo(){
    printf("salvar arquivo\n");
    
} 


void excluirArquivo(){
    printf("excluir arquivo\n");
    
} 


void listarArquivo(){
    printf("listar arquivo\n");
    
} 



int main(){


    char comando[256] = "criar abacaxi";
    char argumento[256] = "";
    char c[2] = "";
    printf("\ninic\n");
    
    /*Valida os comando no console */
    do{
        gets(comando);


        int i = 0;
        int j = 0;
        int auxArgumento = 0; //false
        int tamanhoComando = strlen(comando);

         do{ 
            printf("%c\n",comando[i]);
            i++;
            
        }while(comando[i] != ' ' &&  tamanhoComando > i  );//acha a cordenada do espaço
            
        comando[i] = '\0';
        i++;
        fflush(stdout);
        
        do{
            printf("i: %d, j: %d\n",i,j);
            argumento[j] = comando[i];
            comando[i] = ' ';
            j++;
            i++;
        
        }while(comando[i] != '\0');

        
        printf("argumento %s\n", argumento);
         
         
        if(strcmp(comando,"criar") == 0){   
            criarArquivo();
            continue;
        }
        else if(strcmp(comando,"ler")== 0){
            lerArquivo();
            continue;
        }
        else if(strcmp(comando,"salvar")== 0){
            salvarArquivo();
            continue;
        }
        else if(strcmp(comando,"excluir")== 0){
            excluirArquivo();
            continue;
        }
        else if(strcmp(comando,"listar")== 0){
            listarArquivo();
            continue;
        }else{
            printf("comando invalido\n");
        }


    }while(strcmp("STOP", comando) != 0);

    return 0;

}
