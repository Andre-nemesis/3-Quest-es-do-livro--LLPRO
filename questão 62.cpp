#include <stdio.h>

int main() {
   int Nalun,N1,N2,Med,Contr = 0,Tnota = 1;
   
   printf("Digite o numero de alunos em sua classe: ");
   scanf("%d",&Nalun);
   
   while(Contr < Nalun) {
        printf("Digite a primeira nota: ");
        scanf("%d",&N1);
        
        while (N1 > 10 || N1 < 0) {
            printf("Valor de Nota invalido.\nTente novamente.\n\n");
            printf("Digite a primeira nota: ");
            scanf("%d",&N1);
        }
        
        printf("Digite a segunda nota: ");
        scanf("%d",&N2);
       
       while (N2 > 10 || N2 < 0) {
            printf("Valor de Nota invalido.\nTente novamente.\n\n");
            printf("Digite a segunda nota: ");
            scanf("%d",&N2);
        }
       
        printf("\n\nProximo aluno.\n\n");
       
        Tnota = Tnota + N1 + N2;
        Contr += 1;
   }
   
     Med = Tnota / Nalun;
   
    printf("A media foi %d",Med);
   
    return 0;
}
