# include <stdio.h>
# include <stdlib.h>

// Caracter de quebra de linha -> \n, tem que ser inserido dentro das aspas e cada \n representa uma quebra de linha

int main()
{
    /*
    printf é uma função de saída, isso quer dizer que o código mostrará no terminal o que
    estiver dentro das aspas (simples ou duplas) que estarão dentro dos parênteses.
    */
    
    printf("Hello, World!\n");

    // Todo tipo de caracter entre aspas será impresso.
    printf("123");

    printf("Valor esperado: %d", printf("\nOi\n"));

    return 0;
}
