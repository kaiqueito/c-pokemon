#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int tecla, tecla2;
    int cacar;
    int pokemon, a, vazio;
    int capturar, x, tentativa;

    char *nomes[22];
    char *chance[4];
    
    printf("====POKÉMON====\n\n");
    printf("Selecione:\n");
    printf("1. Começar\n");
    printf("2. Sair\n\n");

    scanf("%d", &tecla);

    switch (tecla) {
    
        case 1:
        printf("\nDigite '1' para caçar pokémon.\n\n");
        scanf("%d", &cacar);
    
        if (cacar == 1) {
            printf("\nCaçando...\n\n");
    
            nomes[0] = "Charmander";
            nomes[1] = "Charmander";
            nomes[3] = "Nada";
            nomes[4] = "Squirtle";
            nomes[5] = "Squirtle";
            nomes[6] = "Nada";
            nomes[7] = "Bulbassauro";
            nomes[8] = "Bulbassauro";
            nomes[9] = "Nada";
            nomes[10] = "Pikachu";
            nomes[11] = "Pikachu";
            nomes[12] = "Nada";
            nomes[13] = "Cartepie";
            nomes[14] = "Cartepie";
            nomes[15] = "Nada";
            nomes[16] = "Rattata";
            nomes[17] = "Rattata";
            nomes[18] = "Nada";
            nomes[19] = "Zapdos - LENDÁRIO";
            nomes[20] = "Articuno - LENDÁRIO";
            nomes[21] = "Moltres - LENDÁRIO";
    
            srand(time(NULL));
    
            for (a = 0; a < 1; a++) {
                pokemon = rand() % 22;
                printf("Sua busca resultou em: \n\n%s <===\n\n", nomes[pokemon]);
            }
    
            vazio = nomes[pokemon];
                
            if (vazio == "Nada") {
                printf("Tente novamente!\n\n");
            } else {
                printf("Deseja capturá-lo?\n");
                printf("1. Sim\n");
                printf("2. Não\n\n");
    
                scanf("%d", &tecla2);
    
                switch (tecla2) {
    
                    case 1:
                    printf("\nVocê arremessou sua pokébola!\n\n");
                            
                    chance[0] = "Capturou";
                    chance[1] = "Capturou";
                    chance[2] = "Capturou";
                    chance[3] = "Não capturou";
    
                    srand(time(NULL));
    
                    for (x = 0; x < 1; x++) {
                        capturar = rand() % 4;
                    }
    
                    tentativa = chance[capturar];
    
                    if (tentativa == "Capturou") {
                        printf("Você capturou um: \n\n%s <===\n\n", nomes[pokemon]);
                        printf("Pokédex:\n\n");

                        if (nomes[pokemon] == "Charmander") {
                            printf("Charmander <=== Possui\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        }
                        if (nomes[pokemon] == "Squirtle") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle <=== Possui\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        }
                        if (nomes[pokemon] == "Bulbassauro") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro <=== Possui\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        }         
                        if (nomes[pokemon] == "Pikachu") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu <=== Possui\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        }                
                        if (nomes[pokemon] == "Cartepie") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie <=== Possui\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        } 
                        if (nomes[pokemon] == "Rattata") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata <=== Possui\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        } 
                        if (nomes[pokemon] == "Zapdos - LENDÁRIO") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO <=== Possui\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        }
                        if (nomes[pokemon] == "Articuno - LENDÁRIO") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO <=== Possui\n");
                            printf("Moltres - LENDÁRIO (Não possui)\n\n");
                        }
                        if (nomes[pokemon] == "Moltres - LENDÁRIO") {
                            printf("Charmander (Não possui)\n");
                            printf("Squirtle (Não possui)\n");
                            printf("Bulbassauro (Não possui)\n");
                            printf("Pikachu (Não possui)\n");
                            printf("Cartepie (Não possui)\n");
                            printf("Rattata (Não possui)\n");
                            printf("Zapdos - LENDÁRIO (Não possui)\n");
                            printf("Articuno - LENDÁRIO (Não possui)\n");
                            printf("Moltres - LENDÁRIO <=== Possui\n\n");
                        }
                        printf("Fim.\n");
                        break;
                        
                    } else {                            
                        printf("Você não conseguiu capturar! O pokemon fugiu. Tente novamente!");   
                        break;
                    }
                    
                    case 2:
                    printf("\nVocê deixou o pokemon ir embora!\n\n");
                    printf("Fim.\n");
                    break;
                }
            }
            
        } else {
            printf("Incorreto. Tente novamente!\n\n");
        }
        break;
        
        case 2:
        break;
    }
}

    