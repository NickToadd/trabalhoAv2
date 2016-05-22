#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() 
 { 
     
     // Variáveis que são necessárias para efetuar a programação.
     
     int i, j, auxiliar; 
     float nota[30]; 
     char nome[30][30];  
     char auxiliar1[30];
     
     // Meu nome e meu link.
     
     printf("Olá, meu nome é Nícolas Serrano e este programa pode ser visto no seguinte endereço do github: https://github.com/NickToadd/trabalhoAv2/blob/master/trab.c\n"); 
 
     // Utilização do for
 
 for(i=0;i<=29;i++) 
     { 
         printf("\nEntre com nome do aluno %d: ", i+1); 
         scanf("%s", nome[i]); 
         printf("entre com nota de %s: ", nome[i]); 
         scanf("%f", &nota[i]); 
     } 
 for(i=0;i<=29;i++ ) 
     { 
      for(j=i+1;j<=29;j++)  
       { 
          if ( nota[j] > nota[i] ) 
           { 
            auxiliar = nota[j]; 
            nota[j] = nota[i]; 
            nota[i] = auxiliar; 
               
            strcpy(auxiliar1, nome[j]); 
            strcpy(nome[j], nome[i]); 
            strcpy(nome[i], auxiliar1); 
          } 
       }  
       
        // Imprimir resultados da tabela
       
     } 
     printf("\nListagem da av1\n"); 
     printf("----------------"); 
     printf("\nNome do aluno\tav1\n"); 

  for(i=0;i<=29;i++) 
     { 
         printf("%s\t\t%.2f\n", nome[i], nota[i]); 
     } 
 return 0;
 } 
