#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int pontos;
    float populacao, area, PIB;
    char pais, estado, codigo[50]; 

    printf ("Nome do País:\n");
    scanf ("%s",&pais);

    printf ("Nome do Estado:\n");
    scanf ("%s",&estado);

    printf ("Código do estado:\n");
    scanf ("%s",&codigo);
    
    printf ("População:\n");
    scanf ("%f",&populacao);
    
    printf ("Área:\n");
    scanf ("%f",&area);
    
    printf ("PIB:\n");
    scanf ("%f",&PIB);
    
    printf ("Pontos turísticos:\n");
    scanf ("%d",&pontos);

    printf("_________________________________________________________________\n");
    printf("País:%s\n estado:%s\n Código do estado:%s\n", pais, estado, codigo);
    printf("População:%f\n Área:%f\n PIB:%f\n", populacao, area, PIB);
    printf("Pontos turísticos:%d\n", pontos);
   
    return 0;
}
