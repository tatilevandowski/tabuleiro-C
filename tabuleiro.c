#include <stdio.h>

void imprimeTabuleiro(int tabuleiro[8][8]);
void menu(int opcao);
int tabuleiro[8][8] = {0};
int linha, coluna, opcao;

int main() {
    	menu(opcao);
    return 0;
}

void menu(int opcao){
	
    tabuleiro[2][5] = 1;     // Inicializa a peça na posição (2, 5)
	
    imprimeTabuleiro(tabuleiro);
    printf("   -----------------------\n");

	do{

    printf("Deseja mover a peca? (1 - Sim, 0 - Nao): ");
    scanf("%i", &opcao);

        if (opcao == 1) {
            printf("Informe a nova linha (0-8): ");
            scanf("%i", &linha);
            printf("Informe a nova coluna (0-8): ");
            scanf("%i", &coluna);

    linha -= 1;
    coluna -=1;
    
            if (linha >= 0 && linha < 8 && coluna >= 0 && coluna < 8) {
                tabuleiro[linha][coluna] = 1;
                tabuleiro[2][5] = 0;
		
                printf("\n   -----------------------\n");
                imprimeTabuleiro(tabuleiro);
                printf("   -----------------------\n");
                                
            } else {
                printf("Coordenadas invalidas!\n");
            }
        }
	} while (opcao == 1);
	
	printf("Encerrando o programa. Até a próxima!\n");

} 


void imprimeTabuleiro(int tabuleiro[8][8]) {
	printf("   1  2  3  4  5  6  7  8\n");
    printf("   -----------------------\n");
    
    for (int linha = 0; linha < 8; linha++) {
    	printf("%i|", linha + 1);
        for (int coluna = 0; coluna < 8; coluna++) {
            printf(" %i ",  tabuleiro[linha][coluna]);
            tabuleiro[linha][coluna] = 0;
        }
        printf("\n");
    }
}