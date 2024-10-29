#include <stdio.h>
int main(){
    int pecastotais;
    int pecasdefeituosas;
    printf("qual a quantidade de pecas defeituosas?");
    scanf("%d", &pecasdefeituosas);
    int porcentagem =(pecastotais/100*0,1);
    if(pecasdefeituosas<= porcentagem){
        printf("a maquina precisa de manutencao");
    }
    else if(pecasdefeituosas< porcentagem){
        printf("a maquina nao precisa de manutencao");
    }



    }