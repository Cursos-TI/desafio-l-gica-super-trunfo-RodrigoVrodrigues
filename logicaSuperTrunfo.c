#include <stdio.h>

int main() {

    //Declaração das variaveis e tipos das carta
    int   Carta1, _Carta2;
    char  Estado1[20], _Estado2[20];
    char  Codigo1[10], _Codigo2[10];
    char  NomeCidade1[20], _NomeCidade2[20];
    int   Populacao1, _População2;
    float Area1, _Area2;
    float PIB1, _PIB2;
    int   NumerosPontosTuristicos1, _NumerosPontosTuristicos2;
    float DensidadePopulacional1,  DensidadePopulacional2;
    float PIBpercaptal1, PIBpercaptal2;
    float SuperPoderCarta1, SuperPoderCarta2;




    //Inicio do Input do usuario ( Primeira carta )

    printf("Digite o Numero da primeira carta:");
    scanf("%d", &Carta1);

    printf("Digite o Nome do Estado:");
    scanf("%s", &Estado1);

    printf("Digite o Codigo da carta:");
    scanf("%s", &Codigo1);

    printf("Digite o Nome da Cidade:");
    scanf("%s", &NomeCidade1);

    printf("Digite o número de habitantes da cidade:");
    scanf("%d", &Populacao1);

    printf("Digite a Área (Em Km²):");
    scanf("%f", &Area1);

    printf("Digite o PIB:");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &NumerosPontosTuristicos1);

    printf("\n");
    printf("Atenção!!! Agora iremos cadastrar os dados da segunda Carta \n \n");
    scanf("Digite qualquer tecla para continuar");
    printf("\n");


       //Inicio do Input do usuario ( Segunda carta )

    printf("Digite o Numero da Segunda carta:");
    scanf("%d", &_Carta2);

    printf("Digite o Nome do Segundo Estado:");
    scanf("%s", &_Estado2);

    printf("Digite o Codigo da Segunda carta:");
    scanf("%s", &_Codigo2);

    printf("Digite o Nome da Segunda Cidade:");
    scanf("%s", &_NomeCidade2);

    printf("Digite o número de habitantes da Segunda cidade:");
    scanf("%d", &_População2);

    printf("Digite a Área (Em Km²) da Segunda Carta:");
    scanf("%f", &_Area2);

    printf("Digite o PIB da Segunda carta:  \n");
    scanf("%f", &_PIB2);

    printf("Número de Pontos Turísticos da Segunda carta:");
    scanf("%d", &_NumerosPontosTuristicos2);

    printf("Cadastros Realizados com Sucesso, abaixo segue o detalhamento do cadastro \n");
    printf("\n");

    //calculando densidade populaciona e pib per capta primeira carta
    DensidadePopulacional1 = (float)(Populacao1 / Area1);
    PIBpercaptal1 = (float)(PIB1 / Populacao1);

    //Calculando Super Poder carta 1

    SuperPoderCarta1 = (float)(Populacao1 + Area1 + PIB1 +NumerosPontosTuristicos1 + PIBpercaptal1);
    

    //Imprimindo o resultado da prmeira carta

    printf("Aqui estão os dados da Primeira Carta: \n\n");
    printf("\n");

    printf("Numero da carta: %d\n", Carta1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Número de Habitantes: %d\n", Populacao1);
    printf("Área  %.2f\n", Area1);
    printf("PIB:  %.2f\n", PIB1);
    printf("Número de Pontos turísticos: %d\n", NumerosPontosTuristicos1);
    printf("Densidade Populacional %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita %.2f\n",PIBpercaptal1);
    printf("Super Poder: %.2f\n", SuperPoderCarta1 );

    printf("\n");

    //calculando densidade populaciona e pib per capta Segunda carta
    DensidadePopulacional2 = (float)(_População2 / _Area2);
    PIBpercaptal2 = (float)(_PIB2 / _População2);

    //Calculando Super Poder carta 2

    SuperPoderCarta2 = (float)(_População2 + _Area2 + _PIB2 + _NumerosPontosTuristicos2 + PIBpercaptal2);


       //Imprimindo o resultado da segunda carta
    printf("Aqui estão os dados da Segunda Carta: \n\n");
    printf("\n");
    printf("Numero da carta: %d\n", _Carta2);
    printf("Estado: %s\n", _Estado2);
    printf("Codigo da carta: %s\n", _Codigo2);
    printf("Nome da Cidade: %s\n", _NomeCidade2);
    printf("Número de Habitantes: %d\n", _População2);
    printf("Área  %.2f\n", _Area2);
    printf("PIB:  %.2f\n", _PIB2);
    printf("Número de Pontos turísticos: %d\n", _NumerosPontosTuristicos2);
    printf("Densidade Populacional %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita %.2f\n",PIBpercaptal2);
    printf("Super Poder: %.2f\n", SuperPoderCarta2 );
    
     //Comparativo entre as cartas

    int ResultadoPopulacao = Populacao1 > _População2;
    int ResultadoArea = Area1 > _Area2;
    int PIBresultado = PIB1 > _PIB2;
    int NPontosTuristicosResultado = NumerosPontosTuristicos1 > _NumerosPontosTuristicos2;
    int PIBperCaptaResultado = PIBpercaptal1 > PIBpercaptal2;
    int SuperPoderResultado = SuperPoderCarta1 > SuperPoderCarta2;
    int DensidadePopResultado = DensidadePopulacional1 < DensidadePopulacional2;

    printf("\n");
    printf("Resultado do comprativo entre as cartas");
    printf("\n");


     //Exibindo resultado do comparativo usando if-else

    printf("Comparação de cartas (Atributo: População):\n");
    printf("\n");

    if (Populacao1 > _População2) {
        printf("Carta 1  %d - Estado  %s : População: %d\n  " ,   Carta1, Estado1, Populacao1);
        printf("Carta 2  %d - Estado  %s : População: %d\n " ,   _Carta2, _Estado2, _População2);
        printf("Resultado : Carta1 %d (%s ) Venceu!\n ", Carta1, Estado1 );

    } else{
        printf("Carta:  %d - Estado:  %s : População: %d\n  " ,   Carta1, Estado1, Populacao1);
        printf("Carta:  %d - Estado:  %s : População: %d\n  " ,   _Carta2, _Estado2, _População2);
        printf("Resultado : Carta2 %d (%s ) Venceu!\n ", _Carta2, _Estado2);

    }


    return 0;


}