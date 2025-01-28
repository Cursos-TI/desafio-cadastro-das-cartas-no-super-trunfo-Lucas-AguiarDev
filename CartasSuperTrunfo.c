#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste joão lucas da silva aguiar

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    //inicio da definicao das variaveis

    char pais[20];
//------------------------
    char nome_EA [20];

    char nome_A01[20];
    int cod_A01;
    int populacao_A01;
    float area_A01;
    float pib_A01;
    float turismo_A01;

    char nome_A02[20];
    int cod_A02;
    int populacao_A02;
    float area_A02;
    float pib_A02;
    float turismo_A02;

    char nome_A03[20];
    int cod_A03;
    int populacao_A03;
    float area_A03;
    float pib_A03;
    float turismo_A03;

    char nome_A04[20];
    int cod_A04;
    int populacao_A04;
    float area_A04;
    float pib_A04;
    float turismo_A04;

//------------------------

    char EB [20];

    char nome_B01[20];
    int cod_B01;
    int populacao_B01;
    float area_B01;
    float pib_B01;
    float turismo_B01;

    char nome_B02[20];
    int cod_B02;
    int populacao_B02;
    float area_B02;
    float pib_B02;
    float turismo_B02;

    char nome_B03[20];
    int cod_B03;
    int populacao_B03;
    float area_B03;
    float pib_B03;
    float turismo_B03;

    char nome_B04[20];
    int cod_B04;
    int populacao_B04;
    float area_B04;
    float pib_B04;
    float turismo_B04;

//------------------------

    char EC [20];

    char nome_C01[20];
    int cod_C01;
    int populacao_C01;
    float area_C01;
    float pib_C01;
    float turismo_C01;

    char nome_C02[20];
    int cod_C02;
    int populacao_C02;
    float area_C02;
    float pib_C02;
    float turismo_C02;

    char nome_C03[20];
    int cod_C03;
    int populacao_C03;
    float area_C03;
    float pib_C03;
    float turismo_C03;

    char nome_C04[20];
    int cod_C04;
    int populacao_C04;
    float area_C04;
    float pib_C04;
    float turismo_C04;

//------------------------

    char ED [20];
    char nome_D01[20];
    int cod_D01;
    int populacao_D01;
    float area_D01;
    float pib_D01;
    float turismo_D01;

    char nome_D02[20];
    int cod_D02;
    int populacao_D02;
    float area_D02;
    float pib_D02;
    float turismo_D02;

    char nome_D03[20];
    int cod_D03;
    int populacao_D03;
    float area_D03;
    float pib_D03;
    float turismo_D03;

    char nome_D04[20];
    int cod_D04;
    int populacao_D04;
    float area_D04;
    float pib_D04;
    float turismo_D04;

//------------------------

    char EE [20];

    char nome_E01[20];
    int cod_E01;
    int populacao_E01;
    float area_E01;
    float pib_E01;
    float turismo_E01;

    char nome_E02[20];
    int cod_E02;
    int populacao_E02;
    float area_E02;
    float pib_E02;
    float turismo_E02;

    char nome_E03[20];
    int cod_E03;
    int populacao_E03;
    float area_E03;
    float pib_E03;
    float turismo_E03;

    char nome_E04[20];
    int cod_E04;
    int populacao_E04;
    float area_E04;
    float pib_E04;
    float turismo_E04;

//------------------------

    char EF [20];
    
    char nome_F01[20];
    int cod_F01;
    int populacao_F01;
    float area_F01;
    float pib_F01;
    float turismo_F01;

    char nome_F02[20];
    int cod_F02;
    int populacao_F02;
    float area_F02;
    float pib_F02;
    float turismo_F02;

    char nome_F03[20];
    int cod_F03;
    int populacao_F03;
    float area_F03;
    float pib_F03;
    float turismo_F03;

    char nome_F04[20];
    int cod_F04;
    int populacao_F04;
    float area_F04;
    float pib_F04;
    float turismo_F04;

//------------------------

    char EG [20];

    char nome_G01[20];
    int cod_G01;
    int populacao_G01;
    float area_G01;
    float pib_G01;
    float turismo_G01;

    char nome_G02[20];
    int cod_G02;
    int populacao_G02;
    float area_G02;
    float pib_G02;
    float turismo_G02;

    char nome_G03[20];
    int cod_G03;
    int populacao_G03;
    float area_G03;
    float pib_G03;
    float turismo_G03;

    char nome_G04[20];
    int cod_G04;
    int populacao_G04;
    float area_G04;
    float pib_G04;
    float turismo_G04;

//------------------------

    char EH [20];
    
    char nome_H01[20];
    int cod_H01;
    int populacao_H01;
    float area_H01;
    float pib_H01;
    float turismo_H01;

    char nome_H02[20];
    int cod_H02;
    int populacao_H02;
    float area_H02;
    float pib_H02;
    float turismo_H02;

    char nome_H03[20];
    int cod_H03;
    int populacao_H03;
    float area_H03;
    float pib_H03;
    float turismo_H03;

    char nome_H04[20];
    int cod_H04;
    int populacao_H04;
    float area_H04;
    float pib_H04;
    float turismo_H04;

//------------------------------------------------------------------------------------------------
    



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
