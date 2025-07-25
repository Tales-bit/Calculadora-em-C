#include<stdio.h>

int main(){
    float v, w, y, z;
    int x; // A variavel x é inteira
    char caractere;
 for(w=0; w<256; w++){

    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Opcao: ");
    if(scanf("%d", &x)!=1){
            while(getchar()!= '\n');
        printf("\nErro: entrada nao numerica, por favor, digite um numero\n\n");
        continue;
    }

    if(x==1){
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &y);
        printf("Digite o segundo numero: ");
        scanf("%f", &z);
        float a=y+z;
        printf("Resultado: %f + %f = %f\n\n", y, z, a);

        for(v=0; v<256; v++){
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &caractere);
        if(caractere=='s' || caractere=='S'){
            printf("\n\n\n");
            break;
        }
        if(caractere=='n' || caractere=='N'){
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            w=256;
            break;
        }
        printf("Respota invalida. Por favor, digite 's' para sim ou 'n' para nao\n\n");
        }
    }

    if(x==2){
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &y);
        printf("Digite o segundo numero: ");
        scanf("%f", &z);
        float a=y-z;
        printf("Resultado: %f - %f = %f\n\n", y, z, a);

         for(v=0; v<256; v++){
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &caractere);
        if(caractere=='s' || caractere=='S'){
            printf("\n\n\n");
            break;
        }
        if(caractere=='n' || caractere=='N'){
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            w=256;
            break;
        }
        printf("Respota invalida. Por favor, digite 's' para sim ou 'n' para nao\n\n");
        }
    }
    if(x==3){
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &y);
        printf("Digite o segundo numero: ");
        scanf("%f", &z);
        float a=y*z;
        printf("Resultado: %f * %f = %f\n\n", y, z, a);

         for(v=0; v<256; v++){
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &caractere);
        if(caractere=='s' || caractere=='S'){
            printf("\n\n\n");
            break;
        }
        if(caractere=='n' || caractere=='N'){
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            w=256;
            break;
        }
        printf("Respota invalida. Por favor, digite 's' para sim ou 'n' para nao\n\n");
        }
    }
    if(x==4){
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &y);
        printf("Digite o segundo numero: ");
        scanf("%f", &z);
        if(z==0){
            printf("Erro: Divisao por zero nao e permitida\n\n");
        } else{
            float a=y/z;
            printf("Resultado: %f / %f = %f\n\n", y, z, a);
        }

         for(v=0; v<256; v++){
        printf("Deseja realizar outra operacao? (s/n):");
        scanf(" %c", &caractere);
        if(caractere=='s' || caractere=='S'){
            printf("\n\n\n");
            break;
        }
        if(caractere=='n' || caractere=='N'){
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            w=256;
            break;
        }
        printf("Respota invalida. Por favor, digite 's' para sim ou 'n' para nao\n\n");
        }
    }
    if(x==5){
       printf("\nAdeus!\n");
       break;
    }
    if(x>5 || x<1){
        printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
    }
    if(x>0 && x<1){
        printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
    }
    if(x>1 && x<2){
        printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
    }
    if(x>2 && x<3){
        printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
    }
    if(x>3 && x<4){
        printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
    }
    if(x>4 && x<5){
        printf("\nErro: opcao invalida, por favor digite uma opcao valida\n\n");
    }
 }
}
