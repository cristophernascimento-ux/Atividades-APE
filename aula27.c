#include <stdio.h> 

 

int main()  

{ 

    char nome [200]; 
    int gramas; 
    int cm; 
    int idade; 
    float imc; 

    puts("nome:"); 
    fflush(stdin); 
    fgets(nome,sizeof(nome),stdin); // Ao invés de 128 posso usar também sizeof(nome); 
    puts("idade"); 
    fflush(stdin); 
    scanf("%d",&idade); 
    puts("massa[g]:"); 
    fflush(stdin); 
    scanf("%d",&gramas); 
    puts("altura[cm]:"); 
    fflush(stdin); 
    scanf("%d",&cm); 
    imc=((gramas/10000.0)/((cm/100.0)*(cm/100.0))*10); 
    printf("IMC: %.2f\n", imc); 
    if (imc >= 35.0) {
        printf("Classificação: Obesidade extrema");
    } 
    else if (imc >=30.0 && imc <35.0) {
        printf("Classificação: Obesidade");
    } 
    else if (imc >=25.0 && imc <=29.9) {
        printf("Classificação: Excesso de peso");
    } 
    else if (imc >=18.5 && imc <=24.9) {
        printf("Classificação: Peso normal");
    } 
    else if (imc <18.5) {
        printf("Classificação: Baixo Peso");
        }
    
return 0;
}

 