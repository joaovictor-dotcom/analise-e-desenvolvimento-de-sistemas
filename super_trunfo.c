#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // primeira carta

    char nome[50], estado[50], codigo[50], cidade[50];
    int populacao, turismo;
    float tamanho, pib;

    printf("Voc� est� come�ando a jogar Super Trunfo!\n Inicie nos informando seu nome:\n");
    scanf("%s", &nome);
    printf("Bem-vindo ao jogo, %s!\n", nome);
    printf("Agora, qual � o Estado da sua carta?\n");
    scanf("%s", &estado);

    printf("Agora, qual � o c�digo da sua carta?\n");
    scanf("%s", &codigo);

    printf("Agora, qual � o nome da sua carta?\n");
    scanf("%s", &cidade);

    printf("Agora, qual � a popula��o da sua carta?\n");
    scanf("%d", &populacao);

    printf("Agora, qual � o tamanho da cidade da sua carta em km�?\n");
    scanf("%f", &tamanho);

    printf("Agora, qual � o PIB da cidade da sua carta?\n");
    scanf("%f", &pib);

    printf("Agora, quantos pontos turisticos tem a cidade da sua carta?\n");
    scanf("%d", &turismo);

    // segunda carta
    printf("Agora que voc� j� criou sua primeira carta, vamos criar a segunda!\n");

    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, turismo2;
    float tamanho2, pib2;

    printf("Concentre-se na segunda carta agora, %s!\n", nome);
    printf("Agora, qual � o Estado da sua carta?\n");
    scanf("%s", &estado2);

    printf("Agora, qual � o c�digo da sua carta?\n");
    scanf("%s", &codigo2);

    printf("Agora, qual � o nome da sua carta?\n");
    scanf("%s", &cidade2);

    printf("Agora, qual � a popula��o da sua carta?\n");
    scanf("%d", &populacao2);

    printf("Agora, qual � o tamanho da cidade da sua carta em km�?\n");
    scanf("%f", &tamanho2);

    printf("Agora, qual � o PIB da cidade da sua carta?\n");
    scanf("%f", &pib2);

    printf("Agora, quantos pontos turisticos tem a cidade da sua carta?\n");
    scanf("%d", &turismo2);
    
    // impress�o das cartas
    printf("Agora eu vou mostrar os dados das cartas que voc� montou, %s!\n", nome);

    //carta 1
    printf("Carta 1:\nEstado: %s\nC�digo: %s\nNome da Cidade: %s\nPopula��o: %d\n�rea: %f\nPIB: %f\nPontos Tur�sticos: %d", estado, codigo, cidade, populacao, tamanho, pib, turismo);

    //carta 2
    printf("Carta 2:\nEstado: %s\nC�digo: %s\nNome da Cidade: %s\nPopula��o: %d\n�rea: %f\nPIB: %f\nPontos Tur�sticos: %d", estado2, codigo2, cidade2, populacao2, tamanho2, pib2, turismo2);

    return 0;
}