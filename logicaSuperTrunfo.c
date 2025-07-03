#include <stdio.h>

typedef struct {
    char estado;             // Letra de 'A' a 'H'
    char codigo_carta[5];    // Ex: "A01", "B03"
    char nome_cidade[100];   // Nome da cidade
    int populacao;           // Número de habitantes
    float area;              // Área em km²
    float pib;               // Produto Interno Bruto
} Cidade;

int main() {
    Cidade cidade;

    cidade.estado = 'C';
    snprintf(cidade.codigo_carta, sizeof(cidade.codigo_carta), "C02");
    snprintf(cidade.nome_cidade, sizeof(cidade.nome_cidade), "Nova Esperança");
    cidade.populacao = 250000;
    cidade.area = 135.75;
    cidade.pib = 320000000.00;

    printf("Estado: %c\n", cidade.estado);
    printf("Código da carta: %s\n", cidade.codigo_carta);
    printf("Nome da cidade: %s\n", cidade.nome_cidade);
    printf("População: %d\n", cidade.populacao);
    printf("Área (km²): %.2f\n", cidade.area);
    printf("PIB: R$ %.2f\n", cidade.pib);

    return 0;
