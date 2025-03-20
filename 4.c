#include <stdio.h>

int main(){
    float valorconta, porcentagem, gorgeta, totalPagar;
    
    printf("digite o valor da conta R$\n");
    scanf("%f", &valorconta);
    
    printf("digite o vaor da porcentagem\n");
    scanf("%f", &porcentagem);
    
    gorgeta = ((porcentagem /100) * valorconta);
    
    totalPagar = valorconta + gorgeta;
    
    printf("total : %.2f", totalPagar);


}
