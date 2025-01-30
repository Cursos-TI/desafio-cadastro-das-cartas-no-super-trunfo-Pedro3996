#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
/* utilizando as variaveis armazena de forma organizada para ambos os lados.
 assim não ocorre erros e as informações seguem cada uma de uma forma que fique mais facil e correto de realizar*/
    char nome[60];
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos; 
/* aqui está o código base para que de forma "organizada" você possa responder e cadastrar as informações de sua "carta".
utilizando os tipos de fontes que consigam ler de forma mais precisa e simples assim resultando em uma pratica sem erros.
*/
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite o código da cidade (Ex: A1):\n");
    scanf("%s", codigo);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos possui:\n");
    scanf("%d\n", &pontos); 

//aqui está o resultado que aparecerá com as informações registradas estando organizados

    printf("Aqui estão os valores de sua carta:\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Código da cidade: %s\n", codigo);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos); 


    return 0;
}
