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
    char nome_EA[20];

    char nome_A01[20];
    char cod_A01[3];
    int populacao_A01;
    float area_A01;
    float pib_A01;
    float turismo_A01;

    char nome_A02[20];
    char cod_A02[3];
    int populacao_A02;
    float area_A02;
    float pib_A02;
    float turismo_A02;

    char nome_A03[20];
    char cod_A03[3];
    int populacao_A03;
    float area_A03;
    float pib_A03;
    float turismo_A03;

    char nome_A04[20];
    char cod_A04[3];
    int populacao_A04;
    float area_A04;
    float pib_A04;
    float turismo_A04;

//------------------------

    char nome_EB [20];

    char nome_B01[20];
    char cod_B01[3];
    int populacao_B01;
    float area_B01;
    float pib_B01;
    float turismo_B01;

    char nome_B02[20];
    char cod_B02[3];
    int populacao_B02;
    float area_B02;
    float pib_B02;
    float turismo_B02;

    char nome_B03[20];
    char cod_B03[3];
    int populacao_B03;
    float area_B03;
    float pib_B03;
    float turismo_B03;

    char nome_B04[20];
    char cod_B04[3];
    int populacao_B04;
    float area_B04;
    float pib_B04;
    float turismo_B04;

//------------------------

    char nome_EC [20];

    char nome_C01[20];
    char cod_C01[3];
    int populacao_C01;
    float area_C01;
    float pib_C01;
    float turismo_C01;

    char nome_C02[20];
    char cod_C02[3];
    int populacao_C02;
    float area_C02;
    float pib_C02;
    float turismo_C02;

    char nome_C03[20];
    char cod_C03[3];
    int populacao_C03;
    float area_C03;
    float pib_C03;
    float turismo_C03;

    char nome_C04[20];
    char cod_C04[3];
    int populacao_C04;
    float area_C04;
    float pib_C04;
    float turismo_C04;

//------------------------

    char nome_ED [20];
    char nome_D01[20];
    char cod_D01[3];
    int populacao_D01;
    float area_D01;
    float pib_D01;
    float turismo_D01;

    char nome_D02[20];
    char cod_D02[3];
    int populacao_D02;
    float area_D02;
    float pib_D02;
    float turismo_D02;

    char nome_D03[20];
    char cod_D03[3];
    int populacao_D03;
    float area_D03;
    float pib_D03;
    float turismo_D03;

    char nome_D04[20];
    char cod_D04[3];
    int populacao_D04;
    float area_D04;
    float pib_D04;
    float turismo_D04;

//------------------------

    char nome_EE [20];

    char nome_E01[20];
    char cod_E01[3];
    int populacao_E01;
    float area_E01;
    float pib_E01;
    float turismo_E01;

    char nome_E02[20];
    char cod_E02[3];
    int populacao_E02;
    float area_E02;
    float pib_E02;
    float turismo_E02;

    char nome_E03[20];
    char cod_E03[3];
    int populacao_E03;
    float area_E03;
    float pib_E03;
    float turismo_E03;

    char nome_E04[20];
    char cod_E04[3];
    int populacao_E04;
    float area_E04;
    float pib_E04;
    float turismo_E04;

//------------------------

    char nome_EF [20];
    
    char nome_F01[20];
    char cod_F01[3];
    int populacao_F01;
    float area_F01;
    float pib_F01;
    float turismo_F01;

    char nome_F02[20];
    char cod_F02[3];
    int populacao_F02;
    float area_F02;
    float pib_F02;
    float turismo_F02;

    char nome_F03[20];
    char cod_F03[3];
    int populacao_F03;
    float area_F03;
    float pib_F03;
    float turismo_F03;

    char nome_F04[20];
    char cod_F04[3];
    int populacao_F04;
    float area_F04;
    float pib_F04;
    float turismo_F04;

//------------------------

    char nome_EG [20];

    char nome_G01[20];
    char cod_G01[3];
    int populacao_G01;
    float area_G01;
    float pib_G01;
    float turismo_G01;

    char nome_G02[20];
    char cod_G02[3];
    int populacao_G02;
    float area_G02;
    float pib_G02;
    float turismo_G02;

    char nome_G03[20];
    char cod_G03[3];
    int populacao_G03;
    float area_G03;
    float pib_G03;
    float turismo_G03;

    char nome_G04[20];
    char cod_G04[3];
    int populacao_G04;
    float area_G04;
    float pib_G04;
    float turismo_G04;

//------------------------

    char nome_EH[20];
    
    char nome_H01[20];
    char cod_H01[3];
    int populacao_H01;
    float area_H01;
    float pib_H01;
    float turismo_H01;

    char nome_H02[20];
    char cod_H02[3];
    int populacao_H02;
    float area_H02;
    float pib_H02;
    float turismo_H02;

    char nome_H03[20];
    char cod_H03[3];
    int populacao_H03;
    float area_H03;
    float pib_H03;
    float turismo_H03;

    char nome_H04[20];
    char cod_H04[3];
    int populacao_H04;
    float area_H04;
    float pib_H04;
    float turismo_H04;

//------------------------------------------------------------------------------------------------

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("CADASTRO DO JOGO \n-------------------------------------------------------- \n");

    printf("Digite o nome do pais a ser cadastrado: ");
    scanf("%s", &pais);
//------------------------ cadastro cidades estado 1

    printf("\n\nCADASTRO DO PRIMEIRO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do primeiro estado: ");
    scanf("%s", &nome_EA);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_A01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_A01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A01);
    scanf("%d", &populacao_A01);

    printf("Qual a area da cidade %s em m²? ", nome_A01);
    scanf("%f", &area_A01); 

    printf("Qual o PIB da cidade %s? ", nome_A01);
    scanf("%f", &pib_A01);

    printf("Quantos pontos turisticos %s tem? ", nome_A01);
    scanf("%d", &turismo_A01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_A02);

    printf("Qual o CODIGO da cidade %s? ", &nome_A02);
    scanf("%s", &cod_A02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A02);
    scanf("%d", &populacao_A02);

    printf("Qual a area da cidade %s em m²? ", nome_A02);
    scanf("%f", &area_A02); 

    printf("Qual o PIB da cidade %s? ", nome_A02);
    scanf("%f", &pib_A02);

    printf("Quantos pontos turisticos %s tem? ", nome_A02);
    scanf("%d", &turismo_A02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_A03);

    printf("Qual o CODIGO da cidade %s? ", &nome_A03);
    scanf("%s", &cod_A03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A03);
    scanf("%d", &populacao_A03);

    printf("Qual a area da cidade %s em m²? ", nome_A03);
    scanf("%f", &area_A03); 

    printf("Qual o PIB da cidade %s? ", nome_A03);
    scanf("%f", &pib_A03);

    printf("Quantos pontos turisticos %s tem? ", nome_A03);
    scanf("%d", &turismo_A03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_A04);

    printf("Qual o CODIGO da cidade %s? ", &nome_A04);
    scanf("%s", &cod_A04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A04);
    scanf("%d", &populacao_A04);

    printf("Qual a area da cidade %s em m²? ", nome_A04);
    scanf("%f", &area_A04); 

    printf("Qual o PIB da cidade %s? ", nome_A04);
    scanf("%f", &pib_A04);

    printf("Quantos pontos turisticos %s tem? ", nome_A04);
    scanf("%d", &turismo_A04);


//------------------------ cadastro cidades estado 2

    printf("\n\nCADASTRO DO SEGUNDO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do segundo estado: ");
    scanf("%s", &nome_EB);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_B01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_B01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B01);
    scanf("%d", &populacao_B01);
    printf("Qual a area da cidade %s em m²? ", nome_B01);
    scanf("%f", &area_B01); 

    printf("Qual o PIB da cidade %s? ", nome_B01);
    scanf("%f", &pib_B01);

    printf("Quantos pontos turisticos %s tem? ", nome_B01);
    scanf("%d", &turismo_B01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_B02);

    printf("Qual o CODIGO da cidade %s? ", &nome_B02);
    scanf("%s", &cod_B02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B02);
    scanf("%d", &populacao_B02);

    printf("Qual a area da cidade %s em m²? ", nome_B02);
    scanf("%f", &area_B02); 

    printf("Qual o PIB da cidade %s? ", nome_B02);
    scanf("%f", &pib_B02);

    printf("Quantos pontos turisticos %s tem? ", nome_B02);
    scanf("%d", &turismo_B02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_B03);

    printf("Qual o CODIGO da cidade %s? ", &nome_B03);
    scanf("%s", &cod_B03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B03);
    scanf("%d", &populacao_B03);

    printf("Qual a area da cidade %s em m²? ", nome_B03);
    scanf("%f", &area_B03); 

    printf("Qual o PIB da cidade %s? ", nome_B03);
    scanf("%f", &pib_B03);

    printf("Quantos pontos turisticos %s tem? ", nome_B03);
    scanf("%d", &turismo_B03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_B04);

    printf("Qual o CODIGO da cidade %s? ", &nome_B04);
    scanf("%s", &cod_B04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B04);
    scanf("%d", &populacao_B04);

    printf("Qual a area da cidade %s em m²? ", nome_B04);
    scanf("%f", &area_B04); 

    printf("Qual o PIB da cidade %s? ", nome_B04);
    scanf("%f", &pib_B04);

    printf("Quantos pontos turisticos %s tem? ", nome_B04);
    scanf("%d", &turismo_B04);

    //------------------------ cadastro cidades estado 3

    printf("\n\nCADASTRO DO TERCEIRO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do terceiro estado: ");
    scanf("%s", &nome_EC);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_C01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_C01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C01);
    scanf("%d", &populacao_C01);
    printf("Qual a area da cidade %s em m²? ", nome_C01);
    scanf("%f", &area_C01); 

    printf("Qual o PIB da cidade %s? ", nome_C01);
    scanf("%f", &pib_C01);

    printf("Quantos pontos turisticos %s tem? ", nome_C01);
    scanf("%d", &turismo_C01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_C02);

    printf("Qual o CODIGO da cidade %s? ", &nome_C02);
    scanf("%s", &cod_C02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C02);
    scanf("%d", &populacao_C02);

    printf("Qual a area da cidade %s em m²? ", nome_C02);
    scanf("%f", &area_C02); 

    printf("Qual o PIB da cidade %s? ", nome_C02);
    scanf("%f", &pib_C02);

    printf("Quantos pontos turisticos %s tem? ", nome_C02);
    scanf("%d", &turismo_C02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_C03);

    printf("Qual o CODIGO da cidade %s? ", &nome_C03);
    scanf("%s", &cod_C03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C03);
    scanf("%d", &populacao_C03);

    printf("Qual a area da cidade %s em m²? ", nome_C03);
    scanf("%f", &area_C03); 

    printf("Qual o PIB da cidade %s? ", nome_C03);
    scanf("%f", &pib_C03);

    printf("Quantos pontos turisticos %s tem? ", nome_C03);
    scanf("%d", &turismo_C03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_C04);

    printf("Qual o CODIGO da cidade %s? ", &nome_C04);
    scanf("%s", &cod_C04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C04);
    scanf("%d", &populacao_C04);

    printf("Qual a area da cidade %s em m²? ", nome_C04);
    scanf("%f", &area_C04); 

    printf("Qual o PIB da cidade %s? ", nome_C04);
    scanf("%f", &pib_C04);

    printf("Quantos pontos turisticos %s tem? ", nome_C04);
    scanf("%d", &turismo_C04);

//------------------------ cadastro cidades estado 4

    printf("\n\nCADASTRO DO QUARTO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do quarto estado: ");
    scanf("%s", &nome_ED);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_D01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_D01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D01);
    scanf("%d", &populacao_D01);
    printf("Qual a area da cidade %s em m²? ", nome_D01);
    scanf("%f", &area_D01); 

    printf("Qual o PIB da cidade %s? ", nome_D01);
    scanf("%f", &pib_D01);

    printf("Quantos pontos turisticos %s tem? ", nome_D01);
    scanf("%d", &turismo_D01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_D02);

    printf("Qual o CODIGO da cidade %s? ", &nome_D02);
    scanf("%s", &cod_D02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D02);
    scanf("%d", &populacao_D02);

    printf("Qual a area da cidade %s em m²? ", nome_D02);
    scanf("%f", &area_D02); 

    printf("Qual o PIB da cidade %s? ", nome_D02);
    scanf("%f", &pib_D02);

    printf("Quantos pontos turisticos %s tem? ", nome_D02);
    scanf("%d", &turismo_D02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_D03);

    printf("Qual o CODIGO da cidade %s? ", &nome_D03);
    scanf("%s", &cod_D03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D03);
    scanf("%d", &populacao_D03);

    printf("Qual a area da cidade %s em m²? ", nome_D03);
    scanf("%f", &area_D03); 

    printf("Qual o PIB da cidade %s? ", nome_D03);
    scanf("%f", &pib_D03);

    printf("Quantos pontos turisticos %s tem? ", nome_D03);
    scanf("%d", &turismo_D03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_D04);

    printf("Qual o CODIGO da cidade %s? ", &nome_D04);
    scanf("%s", &cod_D04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D04);
    scanf("%d", &populacao_D04);

    printf("Qual a area da cidade %s em m²? ", nome_D04);
    scanf("%f", &area_D04); 

    printf("Qual o PIB da cidade %s? ", nome_D04);
    scanf("%f", &pib_D04);

    printf("Quantos pontos turisticos %s tem? ", nome_D04);
    scanf("%d", &turismo_D04);

//------------------------ cadastro cidades estado 5

    printf("\n\nCADASTRO DO QUINTO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do quinto estado: ");
    scanf("%s", &nome_EE);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_E01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_E01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E01);
    scanf("%d", &populacao_E01);
    printf("Qual a area da cidade %s em m²? ", nome_E01);
    scanf("%f", &area_E01); 

    printf("Qual o PIB da cidade %s? ", nome_E01);
    scanf("%f", &pib_E01);

    printf("Quantos pontos turisticos %s tem? ", nome_E01);
    scanf("%d", &turismo_E01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_E02);

    printf("Qual o CODIGO da cidade %s? ", &nome_E02);
    scanf("%s", &cod_E02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E02);
    scanf("%d", &populacao_E02);

    printf("Qual a area da cidade %s em m²? ", nome_E02);
    scanf("%f", &area_E02); 

    printf("Qual o PIB da cidade %s? ", nome_E02);
    scanf("%f", &pib_E02);

    printf("Quantos pontos turisticos %s tem? ", nome_E02);
    scanf("%d", &turismo_E02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_E03);

    printf("Qual o CODIGO da cidade %s? ", &nome_E03);
    scanf("%s", &cod_E03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E03);
    scanf("%d", &populacao_E03);

    printf("Qual a area da cidade %s em m²? ", nome_E03);
    scanf("%f", &area_E03); 

    printf("Qual o PIB da cidade %s? ", nome_E03);
    scanf("%f", &pib_E03);

    printf("Quantos pontos turisticos %s tem? ", nome_E03);
    scanf("%d", &turismo_E03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_E04);

    printf("Qual o CODIGO da cidade %s? ", &nome_E04);
    scanf("%s", &cod_E04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E04);
    scanf("%d", &populacao_E04);

    printf("Qual a area da cidade %s em m²? ", nome_E04);
    scanf("%f", &area_E04); 

    printf("Qual o PIB da cidade %s? ", nome_E04);
    scanf("%f", &pib_E04);

    printf("Quantos pontos turisticos %s tem? ", nome_E04);
    scanf("%d", &turismo_E04);
    
//------------------------ cadastro cidades estado 6

    printf("\n\nCADASTRO DO SEXTO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do sexto estado: ");
    scanf("%s", &nome_EF);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_F01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_F01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F01);
    scanf("%d", &populacao_F01);
    printf("Qual a area da cidade %s em m²? ", nome_F01);
    scanf("%f", &area_F01); 

    printf("Qual o PIB da cidade %s? ", nome_F01);
    scanf("%f", &pib_F01);

    printf("Quantos pontos turisticos %s tem? ", nome_F01);
    scanf("%d", &turismo_F01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_F02);

    printf("Qual o CODIGO da cidade %s? ", &nome_F02);
    scanf("%s", &cod_F02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F02);
    scanf("%d", &populacao_F02);

    printf("Qual a area da cidade %s em m²? ", nome_F02);
    scanf("%f", &area_F02); 

    printf("Qual o PIB da cidade %s? ", nome_F02);
    scanf("%f", &pib_F02);

    printf("Quantos pontos turisticos %s tem? ", nome_F02);
    scanf("%d", &turismo_F02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_F03);

    printf("Qual o CODIGO da cidade %s? ", &nome_F03);
    scanf("%s", &cod_F03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F03);
    scanf("%d", &populacao_F03);

    printf("Qual a area da cidade %s em m²? ", nome_F03);
    scanf("%f", &area_F03); 

    printf("Qual o PIB da cidade %s? ", nome_F03);
    scanf("%f", &pib_F03);

    printf("Quantos pontos turisticos %s tem? ", nome_F03);
    scanf("%d", &turismo_F03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_F04);

    printf("Qual o CODIGO da cidade %s? ", &nome_F04);
    scanf("%s", &cod_F04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F04);
    scanf("%d", &populacao_F04);

    printf("Qual a area da cidade %s em m²? ", nome_F04);
    scanf("%f", &area_F04); 

    printf("Qual o PIB da cidade %s? ", nome_F04);
    scanf("%f", &pib_F04);

    printf("Quantos pontos turisticos %s tem? ", nome_F04);
    scanf("%d", &turismo_F04);

    //------------------------ cadastro cidades estado 7

    printf("\n\nCADASTRO DO SETIMO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do setimo estado: ");
    scanf("%s", &nome_EG);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_G01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_G01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G01);
    scanf("%d", &populacao_G01);
    printf("Qual a area da cidade %s em m²? ", nome_G01);
    scanf("%f", &area_G01); 

    printf("Qual o PIB da cidade %s? ", nome_G01);
    scanf("%f", &pib_G01);

    printf("Quantos pontos turisticos %s tem? ", nome_G01);
    scanf("%d", &turismo_G01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_G02);

    printf("Qual o CODIGO da cidade %s? ", &nome_G02);
    scanf("%s", &cod_G02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G02);
    scanf("%d", &populacao_G02);

    printf("Qual a area da cidade %s em m²? ", nome_G02);
    scanf("%f", &area_G02); 

    printf("Qual o PIB da cidade %s? ", nome_G02);
    scanf("%f", &pib_G02);

    printf("Quantos pontos turisticos %s tem? ", nome_G02);
    scanf("%d", &turismo_G02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_G03);

    printf("Qual o CODIGO da cidade %s? ", &nome_G03);
    scanf("%s", &cod_G03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G03);
    scanf("%d", &populacao_G03);

    printf("Qual a area da cidade %s em m²? ", nome_G03);
    scanf("%f", &area_G03); 

    printf("Qual o PIB da cidade %s? ", nome_G03);
    scanf("%f", &pib_G03);

    printf("Quantos pontos turisticos %s tem? ", nome_G03);
    scanf("%d", &turismo_G03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_G04);

    printf("Qual o CODIGO da cidade %s? ", &nome_G04);
    scanf("%s", &cod_G04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G04);
    scanf("%d", &populacao_G04);

    printf("Qual a area da cidade %s em m²? ", nome_G04);
    scanf("%f", &area_G04); 

    printf("Qual o PIB da cidade %s? ", nome_G04);
    scanf("%f", &pib_G04);

    printf("Quantos pontos turisticos %s tem? ", nome_G04);
    scanf("%d", &turismo_G04);

    //------------------------ cadastro cidades estado 8

    printf("\n\nCADASTRO DO OITAVO ESTADO \n-------------------------------------------------------- \n");

    printf("Digite o nome do oitavo estado: ");
    scanf("%s", &nome_EH);

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_H01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_H01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H01);
    scanf("%d", &populacao_H01);
    printf("Qual a area da cidade %s em m²? ", nome_H01);
    scanf("%f", &area_H01); 

    printf("Qual o PIB da cidade %s? ", nome_H01);
    scanf("%f", &pib_H01);

    printf("Quantos pontos turisticos %s tem? ", nome_H01);
    scanf("%d", &turismo_H01);

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_H02);

    printf("Qual o CODIGO da cidade %s? ", &nome_H02);
    scanf("%s", &cod_H02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H02);
    scanf("%d", &populacao_H02);

    printf("Qual a area da cidade %s em m²? ", nome_H02);
    scanf("%f", &area_H02); 

    printf("Qual o PIB da cidade %s? ", nome_H02);
    scanf("%f", &pib_H02);

    printf("Quantos pontos turisticos %s tem? ", nome_H02);
    scanf("%d", &turismo_H02);

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_H03);

    printf("Qual o CODIGO da cidade %s? ", &nome_H03);
    scanf("%s", &cod_H03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H03);
    scanf("%d", &populacao_H03);

    printf("Qual a area da cidade %s em m²? ", nome_H03);
    scanf("%f", &area_H03); 

    printf("Qual o PIB da cidade %s? ", nome_H03);
    scanf("%f", &pib_H03);

    printf("Quantos pontos turisticos %s tem? ", nome_H03);
    scanf("%d", &turismo_H03);

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_H04);

    printf("Qual o CODIGO da cidade %s? ", &nome_H04);
    scanf("%s", &cod_H04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H04);
    scanf("%d", &populacao_H04);

    printf("Qual a area da cidade %s em m²? ", nome_H04);
    scanf("%f", &area_H04); 

    printf("Qual o PIB da cidade %s? ", nome_H04);
    scanf("%f", &pib_H04);

    printf("Quantos pontos turisticos %s tem? ", nome_H04);
    scanf("%d", &turismo_H04);
//----------------------    --------------------------------------------------------------------------

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("LISTA DE CARTAS DO JOGO \n-------------------------------------------------------- \n");
    printf("\n\nCARTA %s: \n-------------------------------------------------------- \n", cod_A01);
    

    return 0;
}
