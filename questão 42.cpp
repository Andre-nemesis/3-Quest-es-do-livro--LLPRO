#include <stdio.h>

int main() {
    int codigo,idade,idaemano,Ttrab,ingresso;
    
    printf("Digite seu codigo: ");
    scanf("%d",&codigo);
    printf("Digite seu ano de nascimento: ");
    scanf("%d",&idade);
    printf("Digite o ano em que ingressou na empresa: ");
    scanf("%d",&ingresso);
    
    idaemano = 2022 - idade;
    Ttrab = 2022 - ingresso;
    
    if (idaemano >= 65 || Ttrab >= 30 || (idaemano >= 60 && Ttrab >= 25)) printf("Requerer aposentadoria\n");
    
    else printf("Não requerer\n");

    return 0;
}

