#include <math.h>
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
    char cod_A01[5];
    float populacao_A01;
    float area_A01;
    float pib_A01;
    int turismo_A01;

    //variaveis para calculos
    float densidade_A01 =0.0;
    float percapta_A01 =0.0;

    char nome_A02[20];
    char cod_A02[5];
    int populacao_A02;
    int area_A02;
    int pib_A02;
    int turismo_A02;

    //variaveis para calculos
    float densidade_A02 =0.0;
    float percapta_A02 =0.0;

    char nome_A03[20];
    char cod_A03[5];
    int populacao_A03;
    int area_A03;
    int pib_A03;
    int turismo_A03;

    //variaveis para calculos
    float densidade_A03 =0.0;
    float percapta_A03 =0.0;

    char nome_A04[20];
    char cod_A04[5];
    int populacao_A04;
    int area_A04;
    int pib_A04;
    int turismo_A04;
    
    //variaveis para calculos
    float densidade_A04 =0.0;
    float percapta_A04 =0.0;

//------------------------

    char nome_EB [20];

    char nome_B01[20];
    char cod_B01[5];
    int populacao_B01;
    int area_B01;
    int pib_B01;
    int turismo_B01;

    //variaveis para calculos
    float densidade_B01 =0.0;
    float percapta_B01 =0.0;

    char nome_B02[20];
    char cod_B02[5];
    int populacao_B02;
    int area_B02;
    int pib_B02;
    int turismo_B02;

    //variaveis para calculos
    float densidade_B02 =0.0;
    float percapta_B02 =0.0;

    char nome_B03[20];
    char cod_B03[5];
    int populacao_B03;
    int area_B03;
    int pib_B03;
    int turismo_B03;

    //variaveis para calculos
    float densidade_B03 =0.0;
    float percapta_B03 =0.0;

    char nome_B04[20];
    char cod_B04[5];
    int populacao_B04;
    int area_B04;
    int pib_B04;
    int turismo_B04;

    //variaveis para calculos
    float densidade_B04 =0.0;
    float percapta_B04 =0.0;

//------------------------

    char nome_EC [20];

    char nome_C01[20];
    char cod_C01[5];
    int populacao_C01;
    int area_C01;
    int pib_C01;
    int turismo_C01;

    //variaveis para calculos
    float densidade_C01 =0.0;
    float percapta_C01 =0.0;

    char nome_C02[20];
    char cod_C02[5];
    int populacao_C02;
    int area_C02;
    int pib_C02;
    int turismo_C02;

    //variaveis para calculos
    float densidade_C02 =0.0;
    float percapta_C02 =0.0;
    

    char nome_C03[20];
    char cod_C03[5];
    int populacao_C03;
    int area_C03;
    int pib_C03;
    int turismo_C03;

    //variaveis para calculos
    float densidade_C03 =0.0;
    float percapta_C03 =0.0;
    

    char nome_C04[20];
    char cod_C04[5];
    int populacao_C04;
    int area_C04;
    int pib_C04;
    int turismo_C04;

    //variaveis para calculos
    float densidade_C04 =0.0;
    float percapta_C04 =0.0;
    

//------------------------

    char nome_ED [20];
    char nome_D01[20];
    char cod_D01[5];
    int populacao_D01;
    int area_D01;
    int pib_D01;
    int turismo_D01;

    //variaveis para calculos
    float densidade_D01 =0.0;
    float percapta_D01 =0.0;

    char nome_D02[20];
    char cod_D02[5];
    int populacao_D02;
    int area_D02;
    int pib_D02;
    int turismo_D02;

    //variaveis para calculos
    float densidade_D02 =0.0;
    float percapta_D02 =0.0;

    char nome_D03[20];
    char cod_D03[5];
    int populacao_D03;
    int area_D03;
    int pib_D03;
    int turismo_D03;

    //variaveis para calculos
    float densidade_D03 =0.0;
    float percapta_D03 =0.0;

    char nome_D04[20];
    char cod_D04[5];
    int populacao_D04;
    int area_D04;
    int pib_D04;
    int turismo_D04;

    //variaveis para calculos
    float densidade_D04 =0.0;
    float percapta_D04 =0.0;

//------------------------

    char nome_EE [20];

    char nome_E01[20];
    char cod_E01[5];
    int populacao_E01;
    int area_E01;
    int pib_E01;
    int turismo_E01;

    //variaveis para calculos
    float densidade_E01 =0.0;
    float percapta_E01 =0.0;

    char nome_E02[20];
    char cod_E02[5];
    int populacao_E02;
    int area_E02;
    int pib_E02;
    int turismo_E02;

    //variaveis para calculos
    float densidade_E02 =0.0;
    float percapta_E02 =0.0;

    char nome_E03[20];
    char cod_E03[5];
    int populacao_E03;
    int area_E03;
    int pib_E03;
    int turismo_E03;

    //variaveis para calculos
    float densidade_E03 =0.0;
    float percapta_E03 =0.0;

    char nome_E04[20];
    char cod_E04[5];
    int populacao_E04;
    int area_E04;
    int pib_E04;
    int turismo_E04;

    //variaveis para calculos
    float densidade_E04 =0.0;
    float percapta_E04 =0.0;

//------------------------

    char nome_EF [20];
    
    char nome_F01[20];
    char cod_F01[5];
    int populacao_F01;
    int area_F01;
    int pib_F01;
    int turismo_F01;

    //variaveis para calculos
    float densidade_F01 =0.0;
    float percapta_F01 =0.0;

    char nome_F02[20];
    char cod_F02[5];
    int populacao_F02;
    int area_F02;
    int pib_F02;
    int turismo_F02;

    //variaveis para calculos
    float densidade_F02 =0.0;
    float percapta_F02 =0.0;

    char nome_F03[20];
    char cod_F03[5];
    int populacao_F03;
    int area_F03;
    int pib_F03;
    int turismo_F03;

    //variaveis para calculos
    float densidade_F03 =0.0;
    float percapta_F03 =0.0;

    char nome_F04[20];
    char cod_F04[5];
    int populacao_F04;
    int area_F04;
    int pib_F04;
    int turismo_F04;

    //variaveis para calculos
    float densidade_F04 =0.0;
    float percapta_F04 =0.0;

//------------------------

    char nome_EG [20];

    char nome_G01[20];
    char cod_G01[5];
    int populacao_G01;
    int area_G01;
    int pib_G01;
    int turismo_G01;

    //variaveis para calculos
    float densidade_G01 =0.0;
    float percapta_G01 =0.0;

    char nome_G02[20];
    char cod_G02[5];
    int populacao_G02;
    int area_G02;
    int pib_G02;
    int turismo_G02;

    //variaveis para calculos
    float densidade_G02 =0.0;
    float percapta_G02 =0.0;

    char nome_G03[20];
    char cod_G03[5];
    int populacao_G03;
    int area_G03;
    int pib_G03;
    int turismo_G03;

    //variaveis para calculos
    float densidade_G03 =0.0;
    float percapta_G03 =0.0;

    char nome_G04[20];
    char cod_G04[5];
    int populacao_G04;
    int area_G04;
    int pib_G04;
    int turismo_G04;

    //variaveis para calculos
    float densidade_G04 =0.0;
    float percapta_G04 =0.0;

//------------------------

    char nome_EH[20];
    
    char nome_H01[20];
    char cod_H01[5];
    int populacao_H01;
    int area_H01;
    int pib_H01;
    int turismo_H01;

    //variaveis para calculos
    float densidade_H01 =0.0;
    float percapta_H01 =0.0;

    char nome_H02[20];
    char cod_H02[5];
    int populacao_H02;
    int area_H02;
    int pib_H02;
    int turismo_H02;

    //variaveis para calculos
    float densidade_H02 =0.0;
    float percapta_H02 =0.0;

    char nome_H03[20];
    char cod_H03[5];
    int populacao_H03;
    int area_H03;
    int pib_H03;
    int turismo_H03;

    //variaveis para calculos
    float densidade_H03 =0.0;
    float percapta_H03 =0.0;

    char nome_H04[20];
    char cod_H04[5];
    int populacao_H04;
    int area_H04;
    int pib_H04;
    int turismo_H04;
    
    //variaveis para calculos
    float densidade_H04 =0.0;
    float percapta_H04 =0.0;

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
    scanf("%f", &populacao_A01);

    printf("Qual a area da cidade %s em km²? ", nome_A01);
    scanf("%f", &area_A01); 

    printf("Qual o PIB da cidade %s? ", nome_A01);
    scanf("%f", &pib_A01);

    printf("Quantos pontos turisticos %s tem? ", nome_A01);
    scanf("%d", &turismo_A01);

    //verificacao para evitar divisao por 0

    if (area_A01 != 0.0) {
        densidade_A01 = populacao_A01 / area_A01;
    } else {
        densidade_A01 = 0.0; //evita NaN
    }

    if (populacao_A01 != 0.0) {
        percapta_A01 = pib_A01 / populacao_A01;
    } else {
        populacao_A01 = 0.0; //evita NaN
    }
    


//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_A02);

    printf("Qual o CODIGO da cidade %s? ", &nome_A02);
    scanf("%s", &cod_A02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A02);
    scanf("%d", &populacao_A02);

    printf("Qual a area da cidade %s em m²? ", nome_A02);
    scanf("%d", &area_A02); 

    printf("Qual o PIB da cidade %s? ", nome_A02);
    scanf("%d", &pib_A02);

    printf("Quantos pontos turisticos %s tem? ", nome_A02);
    scanf("%d", &turismo_A02);

    //verificacao para evitar divisao por 0

    if (area_A02 != 0.0) {
        densidade_A02 = populacao_A02 / area_A02;
    } else {
        densidade_A02 = 0.0; //evita NaN
    }

    if (populacao_A02 != 0.0) {
        percapta_A02 = pib_A02 / populacao_A02;
    } else {
        populacao_A02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_A03);

    printf("Qual o CODIGO da cidade %s? ", &nome_A03);
    scanf("%s", &cod_A03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A03);
    scanf("%d", &populacao_A03);

    printf("Qual a area da cidade %s em m²? ", nome_A03);
    scanf("%d", &area_A03); 

    printf("Qual o PIB da cidade %s? ", nome_A03);
    scanf("%d", &pib_A03);

    printf("Quantos pontos turisticos %s tem? ", nome_A03);
    scanf("%d", &turismo_A03);

    //verificacao para evitar divisao por 0

    if (area_A03 != 0.0) {
        densidade_A03 = populacao_A03 / area_A03;
    } else {
        densidade_A03 = 0.0; //evita NaN
    }

    if (populacao_A03 != 0.0) {
        percapta_A03 = pib_A03 / populacao_A03;
    } else {
        populacao_A03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_A04);

    printf("Qual o CODIGO da cidade %s? ", &nome_A04);
    scanf("%s", &cod_A04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A04);
    scanf("%d", &populacao_A04);

    printf("Qual a area da cidade %s em m²? ", nome_A04);
    scanf("%d", &area_A04); 

    printf("Qual o PIB da cidade %s? ", nome_A04);
    scanf("%d", &pib_A04);

    printf("Quantos pontos turisticos %s tem? ", nome_A04);
    scanf("%d", &turismo_A04);

    //verificacao para evitar divisao por 0

    if (area_A04 != 0.0) {
        densidade_A04 = populacao_A04 / area_A04;
    } else {
        densidade_A04 = 0.0; //evita NaN
    }

    if (populacao_A04 != 0.0) {
        percapta_A04 = pib_A04 / populacao_A04;
    } else {
        populacao_A04 = 0.0; //evita NaN
    }


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
    scanf("%d", &area_B01); 

    printf("Qual o PIB da cidade %s? ", nome_B01);
    scanf("%d", &pib_B01);

    printf("Quantos pontos turisticos %s tem? ", nome_B01);
    scanf("%d", &turismo_B01);

    //verificacao para evitar divisao por 0

    if (area_B01 != 0.0) {
        densidade_B01 = populacao_B01 / area_B01;
    } else {
        densidade_B01 = 0.0; //evita NaN
    }

    if (populacao_B01 != 0.0) {
        percapta_B01 = pib_B01 / populacao_B01;
    } else {
        populacao_B01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_B02);

    printf("Qual o CODIGO da cidade %s? ", &nome_B02);
    scanf("%s", &cod_B02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B02);
    scanf("%d", &populacao_B02);

    printf("Qual a area da cidade %s em m²? ", nome_B02);
    scanf("%d", &area_B02); 

    printf("Qual o PIB da cidade %s? ", nome_B02);
    scanf("%d", &pib_B02);

    printf("Quantos pontos turisticos %s tem? ", nome_B02);
    scanf("%d", &turismo_B02);

    //verificacao para evitar divisao por 0

    if (area_B02 != 0.0) {
        densidade_B02 = populacao_B02 / area_B02;
    } else {
        densidade_B02 = 0.0; //evita NaN
    }

    if (populacao_B02 != 0.0) {
        percapta_B02 = pib_B02 / populacao_B02;
    } else {
        populacao_B02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_B03);

    printf("Qual o CODIGO da cidade %s? ", &nome_B03);
    scanf("%s", &cod_B03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B03);
    scanf("%d", &populacao_B03);

    printf("Qual a area da cidade %s em m²? ", nome_B03);
    scanf("%d", &area_B03); 

    printf("Qual o PIB da cidade %s? ", nome_B03);
    scanf("%d", &pib_B03);

    printf("Quantos pontos turisticos %s tem? ", nome_B03);
    scanf("%d", &turismo_B03);

    //verificacao para evitar divisao por 0

    if (area_B03 != 0.0) {
        densidade_B03 = populacao_B03 / area_B03;
    } else {
        densidade_B03 = 0.0; //evita NaN
    }

    if (populacao_B03 != 0.0) {
        percapta_B03 = pib_B03 / populacao_B03;
    } else {
        populacao_B03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_B04);

    printf("Qual o CODIGO da cidade %s? ", &nome_B04);
    scanf("%s", &cod_B04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_B04);
    scanf("%d", &populacao_B04);

    printf("Qual a area da cidade %s em m²? ", nome_B04);
    scanf("%d", &area_B04); 

    printf("Qual o PIB da cidade %s? ", nome_B04);
    scanf("%d", &pib_B04);

    printf("Quantos pontos turisticos %s tem? ", nome_B04);
    scanf("%d", &turismo_B04);

    //verificacao para evitar divisao por 0

    if (area_B04 != 0.0) {
        densidade_B04 = populacao_B04 / area_B04;
    } else {
        densidade_B04 = 0.0; //evita NaN
    }

    if (populacao_B04 != 0.0) {
        percapta_B04 = pib_B04 / populacao_B04;
    } else {
        populacao_B04 = 0.0; //evita NaN
    }

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
    scanf("%d", &area_C01); 

    printf("Qual o PIB da cidade %s? ", nome_C01);
    scanf("%d", &pib_C01);

    printf("Quantos pontos turisticos %s tem? ", nome_C01);
    scanf("%d", &turismo_C01);

    //verificacao para evitar divisao por 0

    if (area_C01 != 0.0) {
        densidade_C01 = populacao_C01 / area_C01;
    } else {
        densidade_C01 = 0.0; //evita NaN
    }

    if (populacao_C01 != 0.0) {
        percapta_C01 = pib_C01 / populacao_C01;
    } else {
        populacao_C01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_C02);

    printf("Qual o CODIGO da cidade %s? ", &nome_C02);
    scanf("%s", &cod_C02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C02);
    scanf("%d", &populacao_C02);

    printf("Qual a area da cidade %s em m²? ", nome_C02);
    scanf("%d", &area_C02); 

    printf("Qual o PIB da cidade %s? ", nome_C02);
    scanf("%d", &pib_C02);

    printf("Quantos pontos turisticos %s tem? ", nome_C02);
    scanf("%d", &turismo_C02);

    //verificacao para evitar divisao por 0

    if (area_C02 != 0.0) {
        densidade_C02 = populacao_C02 / area_C02;
    } else {
        densidade_C02 = 0.0; //evita NaN
    }

    if (populacao_C02 != 0.0) {
        percapta_C02 = pib_C02 / populacao_C02;
    } else {
        populacao_C02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_C03);

    printf("Qual o CODIGO da cidade %s? ", &nome_C03);
    scanf("%s", &cod_C03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C03);
    scanf("%d", &populacao_C03);

    printf("Qual a area da cidade %s em m²? ", nome_C03);
    scanf("%d", &area_C03); 

    printf("Qual o PIB da cidade %s? ", nome_C03);
    scanf("%d", &pib_C03);

    printf("Quantos pontos turisticos %s tem? ", nome_C03);
    scanf("%d", &turismo_C03);

    //verificacao para evitar divisao por 0

    if (area_C03 != 0.0) {
        densidade_C03 = populacao_C03 / area_C03;
    } else {
        densidade_C03 = 0.0; //evita NaN
    }

    if (populacao_C03 != 0.0) {
        percapta_C03 = pib_C03 / populacao_C03;
    } else {
        populacao_C03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_C04);

    printf("Qual o CODIGO da cidade %s? ", &nome_C04);
    scanf("%s", &cod_C04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_C04);
    scanf("%d", &populacao_C04);

    printf("Qual a area da cidade %s em m²? ", nome_C04);
    scanf("%d", &area_C04); 

    printf("Qual o PIB da cidade %s? ", nome_C04);
    scanf("%d", &pib_C04);

    printf("Quantos pontos turisticos %s tem? ", nome_C04);
    scanf("%d", &turismo_C04);

    //verificacao para evitar divisao por 0

    if (area_C04 != 0.0) {
        densidade_C04 = populacao_C04 / area_C04;
    } else {
        densidade_C04 = 0.0; //evita NaN
    }

    if (populacao_C04 != 0.0) {
        percapta_C04 = pib_C04 / populacao_C04;
    } else {
        populacao_C04 = 0.0; //evita NaN
    }

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
    scanf("%d", &area_D01); 

    printf("Qual o PIB da cidade %s? ", nome_D01);
    scanf("%d", &pib_D01);

    printf("Quantos pontos turisticos %s tem? ", nome_D01);
    scanf("%d", &turismo_D01);

    //verificacao para evitar divisao por 0

    if (area_D01 != 0.0) {
        densidade_D01 = populacao_D01 / area_D01;
    } else {
        densidade_D01 = 0.0; //evita NaN
    }

    if (populacao_D01 != 0.0) {
        percapta_D01 = pib_D01 / populacao_D01;
    } else {
        populacao_D01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_D02);

    printf("Qual o CODIGO da cidade %s? ", &nome_D02);
    scanf("%s", &cod_D02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D02);
    scanf("%d", &populacao_D02);

    printf("Qual a area da cidade %s em m²? ", nome_D02);
    scanf("%d", &area_D02); 

    printf("Qual o PIB da cidade %s? ", nome_D02);
    scanf("%d", &pib_D02);

    printf("Quantos pontos turisticos %s tem? ", nome_D02);
    scanf("%d", &turismo_D02);

    //verificacao para evitar divisao por 0

    if (area_D02 != 0.0) {
        densidade_D02 = populacao_D02 / area_D02;
    } else {
        densidade_D02 = 0.0; //evita NaN
    }

    if (populacao_D02 != 0.0) {
        percapta_D02 = pib_D02 / populacao_D02;
    } else {
        populacao_D02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_D03);

    printf("Qual o CODIGO da cidade %s? ", &nome_D03);
    scanf("%s", &cod_D03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D03);
    scanf("%d", &populacao_D03);

    printf("Qual a area da cidade %s em m²? ", nome_D03);
    scanf("%d", &area_D03); 

    printf("Qual o PIB da cidade %s? ", nome_D03);
    scanf("%d", &pib_D03);

    printf("Quantos pontos turisticos %s tem? ", nome_D03);
    scanf("%d", &turismo_D03);

    //verificacao para evitar divisao por 0

    if (area_D03 != 0.0) {
        densidade_D03 = populacao_D03 / area_D03;
    } else {
        densidade_D03 = 0.0; //evita NaN
    }

    if (populacao_D03 != 0.0) {
        percapta_D03 = pib_D03 / populacao_D03;
    } else {
        populacao_D03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_D04);

    printf("Qual o CODIGO da cidade %s? ", &nome_D04);
    scanf("%s", &cod_D04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_D04);
    scanf("%d", &populacao_D04);

    printf("Qual a area da cidade %s em m²? ", nome_D04);
    scanf("%d", &area_D04); 

    printf("Qual o PIB da cidade %s? ", nome_D04);
    scanf("%d", &pib_D04);

    printf("Quantos pontos turisticos %s tem? ", nome_D04);
    scanf("%d", &turismo_D04);

    //verificacao para evitar divisao por 0

    if (area_D04 != 0.0) {
        densidade_D04 = populacao_D04 / area_D04;
    } else {
        densidade_D04 = 0.0; //evita NaN
    }

    if (populacao_D04 != 0.0) {
        percapta_D04 = pib_D04 / populacao_D04;
    } else {
        populacao_D04 = 0.0; //evita NaN
    }

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
    scanf("%d", &area_E01); 

    printf("Qual o PIB da cidade %s? ", nome_E01);
    scanf("%d", &pib_E01);

    printf("Quantos pontos turisticos %s tem? ", nome_E01);
    scanf("%d", &turismo_E01);

    //verificacao para evitar divisao por 0

    if (area_E01 != 0.0) {
        densidade_E01 = populacao_E01 / area_E01;
    } else {
        densidade_E01 = 0.0; //evita NaN
    }

    if (populacao_E01 != 0.0) {
        percapta_E01 = pib_E01 / populacao_E01;
    } else {
        populacao_E01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_E02);

    printf("Qual o CODIGO da cidade %s? ", &nome_E02);
    scanf("%s", &cod_E02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E02);
    scanf("%d", &populacao_E02);

    printf("Qual a area da cidade %s em m²? ", nome_E02);
    scanf("%d", &area_E02); 

    printf("Qual o PIB da cidade %s? ", nome_E02);
    scanf("%d", &pib_E02);

    printf("Quantos pontos turisticos %s tem? ", nome_E02);
    scanf("%d", &turismo_E02);

    //verificacao para evitar divisao por 0

    if (area_E02 != 0.0) {
        densidade_E02 = populacao_E02 / area_E02;
    } else {
        densidade_E02 = 0.0; //evita NaN
    }

    if (populacao_E02 != 0.0) {
        percapta_E02 = pib_E02 / populacao_E02;
    } else {
        populacao_E02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_E03);

    printf("Qual o CODIGO da cidade %s? ", &nome_E03);
    scanf("%s", &cod_E03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E03);
    scanf("%d", &populacao_E03);

    printf("Qual a area da cidade %s em m²? ", nome_E03);
    scanf("%d", &area_E03); 

    printf("Qual o PIB da cidade %s? ", nome_E03);
    scanf("%d", &pib_E03);

    printf("Quantos pontos turisticos %s tem? ", nome_E03);
    scanf("%d", &turismo_E03);

    //verificacao para evitar divisao por 0

    if (area_E03 != 0.0) {
        densidade_E03 = populacao_E03 / area_E03;
    } else {
        densidade_E03 = 0.0; //evita NaN
    }

    if (populacao_E03 != 0.0) {
        percapta_E03 = pib_E03 / populacao_E03;
    } else {
        populacao_E03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_E04);

    printf("Qual o CODIGO da cidade %s? ", &nome_E04);
    scanf("%s", &cod_E04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_E04);
    scanf("%d", &populacao_E04);

    printf("Qual a area da cidade %s em m²? ", nome_E04);
    scanf("%d", &area_E04); 

    printf("Qual o PIB da cidade %s? ", nome_E04);
    scanf("%d", &pib_E04);

    printf("Quantos pontos turisticos %s tem? ", nome_E04);
    scanf("%d", &turismo_E04);

    //verificacao para evitar divisao por 0

    if (area_E04 != 0.0) {
        densidade_E04 = populacao_E04 / area_E04;
    } else {
        densidade_E04 = 0.0; //evita NaN
    }

    if (populacao_E04 != 0.0) {
        percapta_E04 = pib_E04 / populacao_E04;
    } else {
        populacao_E04 = 0.0; //evita NaN
    }
    
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
    scanf("%d", &area_F01); 

    printf("Qual o PIB da cidade %s? ", nome_F01);
    scanf("%d", &pib_F01);

    printf("Quantos pontos turisticos %s tem? ", nome_F01);
    scanf("%d", &turismo_F01);

    //verificacao para evitar divisao por 0

    if (area_F01 != 0.0) {
        densidade_F01 = populacao_F01 / area_F01;
    } else {
        densidade_F01 = 0.0; //evita NaN
    }

    if (populacao_F01 != 0.0) {
        percapta_F01 = pib_F01 / populacao_F01;
    } else {
        populacao_F01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_F02);

    printf("Qual o CODIGO da cidade %s? ", &nome_F02);
    scanf("%s", &cod_F02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F02);
    scanf("%d", &populacao_F02);

    printf("Qual a area da cidade %s em m²? ", nome_F02);
    scanf("%d", &area_F02); 

    printf("Qual o PIB da cidade %s? ", nome_F02);
    scanf("%d", &pib_F02);

    printf("Quantos pontos turisticos %s tem? ", nome_F02);
    scanf("%d", &turismo_F02);

    //verificacao para evitar divisao por 0

    if (area_F02 != 0.0) {
        densidade_F02 = populacao_F02 / area_F02;
    } else {
        densidade_F02 = 0.0; //evita NaN
    }

    if (populacao_F02 != 0.0) {
        percapta_F02 = pib_F02 / populacao_F02;
    } else {
        populacao_F02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_F03);

    printf("Qual o CODIGO da cidade %s? ", &nome_F03);
    scanf("%s", &cod_F03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F03);
    scanf("%d", &populacao_F03);

    printf("Qual a area da cidade %s em m²? ", nome_F03);
    scanf("%d", &area_F03); 

    printf("Qual o PIB da cidade %s? ", nome_F03);
    scanf("%d", &pib_F03);

    printf("Quantos pontos turisticos %s tem? ", nome_F03);
    scanf("%d", &turismo_F03);

    //verificacao para evitar divisao por 0

    if (area_F03 != 0.0) {
        densidade_F03 = populacao_F03 / area_F03;
    } else {
        densidade_F03 = 0.0; //evita NaN
    }

    if (populacao_F03 != 0.0) {
        percapta_F03 = pib_F03 / populacao_F03;
    } else {
        populacao_F03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_F04);

    printf("Qual o CODIGO da cidade %s? ", &nome_F04);
    scanf("%s", &cod_F04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_F04);
    scanf("%d", &populacao_F04);

    printf("Qual a area da cidade %s em m²? ", nome_F04);
    scanf("%d", &area_F04); 

    printf("Qual o PIB da cidade %s? ", nome_F04);
    scanf("%d", &pib_F04);

    printf("Quantos pontos turisticos %s tem? ", nome_F04);
    scanf("%d", &turismo_F04);

    //verificacao para evitar divisao por 0

    if (area_F04 != 0.0) {
        densidade_F04 = populacao_F04 / area_F04;
    } else {
        densidade_F04 = 0.0; //evita NaN
    }

    if (populacao_F04 != 0.0) {
        percapta_F04 = pib_F04 / populacao_F04;
    } else {
        populacao_F04 = 0.0; //evita NaN
    }

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
    scanf("%d", &area_G01); 

    printf("Qual o PIB da cidade %s? ", nome_G01);
    scanf("%d", &pib_G01);

    printf("Quantos pontos turisticos %s tem? ", nome_G01);
    scanf("%d", &turismo_G01);

    //verificacao para evitar divisao por 0

    if (area_G01 != 0.0) {
        densidade_G01 = populacao_G01 / area_G01;
    } else {
        densidade_G01 = 0.0; //evita NaN
    }

    if (populacao_G01 != 0.0) {
        percapta_G01 = pib_G01 / populacao_G01;
    } else {
        populacao_G01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_G02);

    printf("Qual o CODIGO da cidade %s? ", &nome_G02);
    scanf("%s", &cod_G02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G02);
    scanf("%d", &populacao_G02);

    printf("Qual a area da cidade %s em m²? ", nome_G02);
    scanf("%d", &area_G02); 

    printf("Qual o PIB da cidade %s? ", nome_G02);
    scanf("%d", &pib_G02);

    printf("Quantos pontos turisticos %s tem? ", nome_G02);
    scanf("%d", &turismo_G02);

    //verificacao para evitar divisao por 0

    if (area_G02 != 0.0) {
        densidade_G02 = populacao_G02 / area_G02;
    } else {
        densidade_G02 = 0.0; //evita NaN
    }

    if (populacao_G02 != 0.0) {
        percapta_G02 = pib_G02 / populacao_G02;
    } else {
        populacao_G02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_G03);

    printf("Qual o CODIGO da cidade %s? ", &nome_G03);
    scanf("%s", &cod_G03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G03);
    scanf("%d", &populacao_G03);

    printf("Qual a area da cidade %s em m²? ", nome_G03);
    scanf("%d", &area_G03); 

    printf("Qual o PIB da cidade %s? ", nome_G03);
    scanf("%d", &pib_G03);

    printf("Quantos pontos turisticos %s tem? ", nome_G03);
    scanf("%d", &turismo_G03);

    //verificacao para evitar divisao por 0

    if (area_G03 != 0.0) {
        densidade_G03 = populacao_G03 / area_G03;
    } else {
        densidade_G03 = 0.0; //evita NaN
    }

    if (populacao_G03 != 0.0) {
        percapta_G03 = pib_G03 / populacao_G03;
    } else {
        populacao_G03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_G04);

    printf("Qual o CODIGO da cidade %s? ", &nome_G04);
    scanf("%s", &cod_G04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_G04);
    scanf("%d", &populacao_G04);

    printf("Qual a area da cidade %s em m²? ", nome_G04);
    scanf("%d", &area_G04); 

    printf("Qual o PIB da cidade %s? ", nome_G04);
    scanf("%d", &pib_G04);

    printf("Quantos pontos turisticos %s tem? ", nome_G04);
    scanf("%d", &turismo_G04);

    //verificacao para evitar divisao por 0

    if (area_G04 != 0.0) {
        densidade_G04 = populacao_G04 / area_G04;
    } else {
        densidade_G04 = 0.0; //evita NaN
    }

    if (populacao_G04 != 0.0) {
        percapta_G04 = pib_G04 / populacao_G04;
    } else {
        populacao_G04 = 0.0; //evita NaN
    }

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
    scanf("%d", &area_H01); 

    printf("Qual o PIB da cidade %s? ", nome_H01);
    scanf("%d", &pib_H01);

    printf("Quantos pontos turisticos %s tem? ", nome_H01);
    scanf("%d", &turismo_H01);

    //verificacao para evitar divisao por 0

    if (area_H01 != 0.0) {
        densidade_H01 = populacao_H01 / area_H01;
    } else {
        densidade_H01 = 0.0; //evita NaN
    }

    if (populacao_H01 != 0.0) {
        percapta_H01 = pib_H01 / populacao_H01;
    } else {
        populacao_H01 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA SEGUNDA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_H02);

    printf("Qual o CODIGO da cidade %s? ", &nome_H02);
    scanf("%s", &cod_H02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H02);
    scanf("%d", &populacao_H02);

    printf("Qual a area da cidade %s em m²? ", nome_H02);
    scanf("%d", &area_H02); 

    printf("Qual o PIB da cidade %s? ", nome_H02);
    scanf("%d", &pib_H02);

    printf("Quantos pontos turisticos %s tem? ", nome_H02);
    scanf("%d", &turismo_H02);

    //verificacao para evitar divisao por 0

    if (area_H02 != 0.0) {
        densidade_H02 = populacao_H02 / area_H02;
    } else {
        densidade_H02 = 0.0; //evita NaN
    }

    if (populacao_H02 != 0.0) {
        percapta_H02 = pib_H02 / populacao_H02;
    } else {
        populacao_H02 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA TERCEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 03: ");
    scanf("%s", &nome_H03);

    printf("Qual o CODIGO da cidade %s? ", &nome_H03);
    scanf("%s", &cod_H03);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H03);
    scanf("%d", &populacao_H03);

    printf("Qual a area da cidade %s em m²? ", nome_H03);
    scanf("%d", &area_H03); 

    printf("Qual o PIB da cidade %s? ", nome_H03);
    scanf("%d", &pib_H03);

    printf("Quantos pontos turisticos %s tem? ", nome_H03);
    scanf("%d", &turismo_H03);

    //verificacao para evitar divisao por 0

    if (area_H03 != 0.0) {
        densidade_H03 = populacao_H03 / area_H03;
    } else {
        densidade_H03 = 0.0; //evita NaN
    }

    if (populacao_H03 != 0.0) {
        percapta_H03 = pib_H03 / populacao_H03;
    } else {
        populacao_H03 = 0.0; //evita NaN
    }

//------------------------
    printf("\n\nCADASTRO DA QUARTA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 04: ");
    scanf("%s", &nome_H04);

    printf("Qual o CODIGO da cidade %s? ", &nome_H04);
    scanf("%s", &cod_H04);

    printf("Qual é o tamanho da população da cidade %s? ", nome_H04);
    scanf("%d", &populacao_H04);

    printf("Qual a area da cidade %s em m²? ", nome_H04);
    scanf("%d", &area_H04); 

    printf("Qual o PIB da cidade %s? ", nome_H04);
    scanf("%d", &pib_H04);

    printf("Quantos pontos turisticos %s tem? ", nome_H04);
    scanf("%d", &turismo_H04);

    //verificacao para evitar divisao por 0

    if (area_H04 != 0.0) {
        densidade_H04 = populacao_H04 / area_H04;
    } else {
        densidade_H04 = 0.0; //evita NaN
    }

    if (populacao_H04 != 0.0) {
        percapta_H04 = pib_H04 / populacao_H04;
    } else {
        populacao_H04 = 0.0; //evita NaN
    }
//------------------------------------------------------------------------------------------------

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  
//-------------------------------------- estado 1
    printf("\nLISTA DE CARTAS DO JOGO \n-------------------------------------------------------- \n");
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_A01);
    printf("ESTADO: %s \n", nome_EA);
    printf("CIDADE: %s \n", nome_A01);
    printf("POPULACAO: %f \n", populacao_A01);
    printf("AREA: %f m² \n", area_A01);
    printf("PIB: R$%f \n", pib_A01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_A01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_A01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_A01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_A02);
    printf("ESTADO: %s \n", nome_EA);
    printf("CIDADE: %s \n", nome_A02);
    printf("POPULACAO: %d \n", populacao_A02);
    printf("AREA: %d m² \n", area_A02);
    printf("PIB: R$%d \n", pib_A02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_A02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_A02);
    printf("PONTOS TURISTICOS: %d", turismo_A02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_A03);
    printf("ESTADO: %s \n", nome_EA);
    printf("CIDADE: %s \n", nome_A03);
    printf("POPULACAO: %d \n", populacao_A03);
    printf("AREA: %d m² \n", area_A03);
    printf("PIB: R$%d \n", pib_A03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_A03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_A03);
    printf("PONTOS TURISTICOS: %d", turismo_A03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_A04);
    printf("ESTADO: %s \n", nome_EA);
    printf("CIDADE: %s \n", nome_A04);
    printf("POPULACAO: %d \n", populacao_A04);
    printf("AREA: %d m² \n", area_A04);
    printf("PIB: R$%d \n", pib_A04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_A04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_A04);
    printf("PONTOS TURISTICOS: %d", turismo_A04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 2
    printf("\nCARTA %s \n: \n-------------------------------------------------------- \n", cod_B01);
    printf("ESTADO: %s \n", nome_EB);
    printf("CIDADE: %s \n", nome_B01);
    printf("POPULACAO: %d \n", populacao_B01);
    printf("AREA: %d m² \n", area_B01);
    printf("PIB: R$%d \n", pib_B01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_B01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_B01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_B01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_B02);
    printf("ESTADO: %s \n", nome_EB);
    printf("CIDADE: %s \n", nome_B02);
    printf("POPULACAO: %d \n", populacao_B02);
    printf("AREA: %d m² \n", area_B02);
    printf("PIB: R$%d \n", pib_B02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_B02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_B02);
    printf("PONTOS TURISTICOS: %d", turismo_B02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_B03);
    printf("ESTADO: %s \n", nome_EB);
    printf("CIDADE: %s \n", nome_B03);
    printf("POPULACAO: %d \n", populacao_B03);
    printf("AREA: %d m² \n", area_B03);
    printf("PIB: R$%d \n", pib_B03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_B03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_B03);
    printf("PONTOS TURISTICOS: %d", turismo_B03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_B04);
    printf("ESTADO: %s \n", nome_EB);
    printf("CIDADE: %s \n", nome_B04);
    printf("POPULACAO: %d \n", populacao_B04);
    printf("AREA: %d m² \n", area_B04);
    printf("PIB: R$%d \n", pib_B04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_B04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_B04);
    printf("PONTOS TURISTICOS: %d", turismo_B04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 3
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_C01);
    printf("ESTADO: %s \n", nome_EC);
    printf("CIDADE: %s \n", nome_C01);
    printf("POPULACAO: %d \n", populacao_C01);
    printf("AREA: %d m² \n", area_C01);
    printf("PIB: R$%d \n", pib_C01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_C01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_C01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_C01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_C02);
    printf("ESTADO: %s \n", nome_EC);
    printf("CIDADE: %s \n", nome_C02);
    printf("POPULACAO: %d \n", populacao_C02);
    printf("AREA: %d m² \n", area_C02);
    printf("PIB: R$%d \n", pib_C02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_C02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_C02);
    printf("PONTOS TURISTICOS: %d", turismo_C02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_C03);
    printf("ESTADO: %s \n", nome_EC);
    printf("CIDADE: %s \n", nome_C03);
    printf("POPULACAO: %d \n", populacao_C03);
    printf("AREA: %d m² \n", area_C03);
    printf("PIB: R$%d \n", pib_C03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_C03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_C03);
    printf("PONTOS TURISTICOS: %d", turismo_C03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_C04);
    printf("ESTADO: %s \n", nome_EC);
    printf("CIDADE: %s \n", nome_C04);
    printf("POPULACAO: %d \n", populacao_C04);
    printf("AREA: %d m² \n", area_C04);
    printf("PIB: R$%d \n", pib_C04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_C04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_C04);
    printf("PONTOS TURISTICOS: %d", turismo_C04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 4
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_D01);
    printf("ESTADO: %s \n", nome_ED);
    printf("CIDADE: %s \n", nome_D01);
    printf("POPULACAO: %d \n", populacao_D01);
    printf("AREA: %d m² \n", area_D01);
    printf("PIB: R$%d \n", pib_D01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_D01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_D01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_D01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_D02);
    printf("ESTADO: %s \n", nome_ED);
    printf("CIDADE: %s \n", nome_D02);
    printf("POPULACAO: %d \n", populacao_D02);
    printf("AREA: %d m² \n", area_D02);
    printf("PIB: R$%d \n", pib_D02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_D02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_D02);
    printf("PONTOS TURISTICOS: %d", turismo_D02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_D03);
    printf("ESTADO: %s \n", nome_ED);
    printf("CIDADE: %s \n", nome_D03);
    printf("POPULACAO: %d \n", populacao_D03);
    printf("AREA: %d m² \n", area_D03);
    printf("PIB: R$%d \n", pib_D03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_D03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_D03);
    printf("PONTOS TURISTICOS: %d", turismo_D03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_D04);
    printf("ESTADO: %s \n", nome_ED);
    printf("CIDADE: %s \n", nome_D04);
    printf("POPULACAO: %d \n", populacao_D04);
    printf("AREA: %d m² \n", area_D04);
    printf("PIB: R$%d \n", pib_D04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_D04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_D04);
    printf("PONTOS TURISTICOS: %d", turismo_D04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 5
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_E01);
    printf("ESTADO: %s \n", nome_EE);
    printf("CIDADE: %s \n", nome_E01);
    printf("POPULACAO: %d \n", populacao_E01);
    printf("AREA: %d m² \n", area_E01);
    printf("PIB: R$%d \n", pib_E01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_E01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_E01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_E01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_E02);
    printf("ESTADO: %s \n", nome_EE);
    printf("CIDADE: %s \n", nome_E02);
    printf("POPULACAO: %d \n", populacao_E02);
    printf("AREA: %d m² \n", area_E02);
    printf("PIB: R$%d \n", pib_E02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_E02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_E02);
    printf("PONTOS TURISTICOS: %d", turismo_E02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_E03);
    printf("ESTADO: %s \n", nome_EE);
    printf("CIDADE: %s \n", nome_E03);
    printf("POPULACAO: %d \n", populacao_E03);
    printf("AREA: %d m² \n", area_E03);
    printf("PIB: R$%d \n", pib_E03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_E03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_E03);
    printf("PONTOS TURISTICOS: %d", turismo_E03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_E04);
    printf("ESTADO: %s \n", nome_EE);
    printf("CIDADE: %s \n", nome_E04);
    printf("POPULACAO: %d \n", populacao_E04);
    printf("AREA: %d m² \n", area_E04);
    printf("PIB: R$%d \n", pib_E04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_E04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_E04);
    printf("PONTOS TURISTICOS: %d", turismo_E04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 6
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_F01);
    printf("ESTADO: %s \n", nome_EF);
    printf("CIDADE: %s \n", nome_F01);
    printf("POPULACAO: %d \n", populacao_F01);
    printf("AREA: %d m² \n", area_F01);
    printf("PIB: R$%d \n", pib_F01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_F01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_F01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_F01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_F02);
    printf("ESTADO: %s \n", nome_EF);
    printf("CIDADE: %s \n", nome_F02);
    printf("POPULACAO: %d \n", populacao_F02);
    printf("AREA: %d m² \n", area_F02);
    printf("PIB: R$%d \n", pib_F02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_F02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_F02);
    printf("PONTOS TURISTICOS: %d", turismo_F02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_F03);
    printf("ESTADO: %s \n", nome_EF);
    printf("CIDADE: %s \n", nome_F03);
    printf("POPULACAO: %d \n", populacao_F03);
    printf("AREA: %d m² \n", area_F03);
    printf("PIB: R$%d \n", pib_F03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_F03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_F03);
    printf("PONTOS TURISTICOS: %d", turismo_F03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_F04);
    printf("ESTADO: %s \n", nome_EF);
    printf("CIDADE: %s \n", nome_F04);
    printf("POPULACAO: %d \n", populacao_F04);
    printf("AREA: %d m² \n", area_F04);
    printf("PIB: R$%d \n", pib_F04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_F04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_F04);
    printf("PONTOS TURISTICOS: %d", turismo_F04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 7
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_G01);
    printf("ESTADO: %s \n", nome_EG);
    printf("CIDADE: %s \n", nome_G01);
    printf("POPULACAO: %d \n", populacao_G01);
    printf("AREA: %d m² \n", area_G01);
    printf("PIB: R$%d \n", pib_G01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_G01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_G01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_G01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_G02);
    printf("ESTADO: %s \n", nome_EG);
    printf("CIDADE: %s \n", nome_G02);
    printf("POPULACAO: %d \n", populacao_G02);
    printf("AREA: %d m² \n", area_G02);
    printf("PIB: R$%d \n", pib_G02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_G02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_G02);
    printf("PONTOS TURISTICOS: %d", turismo_G02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_G03);
    printf("ESTADO: %s \n", nome_EG);
    printf("CIDADE: %s \n", nome_G03);
    printf("POPULACAO: %d \n", populacao_G03);
    printf("AREA: %d m² \n", area_G03);
    printf("PIB: R$%d \n", pib_G03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_G03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_G03);
    printf("PONTOS TURISTICOS: %d", turismo_G03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_G04);
    printf("ESTADO: %s \n", nome_EG);
    printf("CIDADE: %s \n", nome_G04);
    printf("POPULACAO: %d \n", populacao_G04);
    printf("AREA: %d m² \n", area_G04);
    printf("PIB: R$%d \n", pib_G04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_G04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_G04);
    printf("PONTOS TURISTICOS: %d", turismo_G04);
    printf("\n-------------------------------------------------------- \n");

//-------------------------------------- estado 8
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_H01);
    printf("ESTADO: %s \n", nome_EH);
    printf("CIDADE: %s \n", nome_H01);
    printf("POPULACAO: %d \n", populacao_H01);
    printf("AREA: %d m² \n", area_H01);
    printf("PIB: R$%d \n", pib_H01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_H01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_H01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_H01);

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_H02);
    printf("ESTADO: %s \n", nome_EH);
    printf("CIDADE: %s \n", nome_H02);
    printf("POPULACAO: %d \n", populacao_H02);
    printf("AREA: %d m² \n", area_H02);
    printf("PIB: R$%d \n", pib_H02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_H02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_H02);
    printf("PONTOS TURISTICOS: %d", turismo_H02);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_H03);
    printf("ESTADO: %s \n", nome_EH);
    printf("CIDADE: %s \n", nome_H03);
    printf("POPULACAO: %d \n", populacao_H03);
    printf("AREA: %d m² \n", area_H03);
    printf("PIB: R$%d \n", pib_H03);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_H03);
    printf("PIB PER  CAPTA: R$%f \n", percapta_H03);
    printf("PONTOS TURISTICOS: %d", turismo_H03);
    printf("\n-------------------------------------------------------- \n");

//------------------------
    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_H04);
    printf("ESTADO: %s \n", nome_EH);
    printf("CIDADE: %s \n", nome_H04);
    printf("POPULACAO: %d \n", populacao_H04);
    printf("AREA: %d m² \n", area_H04);
    printf("PIB: R$%d \n", pib_H04);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_H04);
    printf("PIB PER  CAPTA: R$%f \n", percapta_H04);
    printf("PONTOS TURISTICOS: %d", turismo_H04); 
    printf("\n-------------------------------------------------------- \n");

    return 0;
}
