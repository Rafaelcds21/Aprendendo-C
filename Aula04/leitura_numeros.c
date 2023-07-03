# include <stdio.h>
# include <stdlib.h>

/*
Leitor de números inteiros
*/

int main()
{
    int valor, valor2; // criei uma variável para guardar um valor do tipo inteiro
    
    valor = 1; // Atribui o valor 1 a variável valor
    //printf("\nO valor da variavel: %d\n", valor);

    printf("Digite uma valor inteiro: ");
    scanf("%d", &valor); // é tipo a função input do Python, do lado esquerdo é o tipo do dado e o lado direito é o nome da variável
    
    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
