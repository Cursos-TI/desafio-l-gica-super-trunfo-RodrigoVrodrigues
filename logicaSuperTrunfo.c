#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    //Declaração das variaveis e tipos das carta
int   Carta1, Carta2;
char  Pais1[10], Pais2[10];
char  Estado1[20], Estado2[20];
char  Codigo1[10], Codigo2[10];
char  NomeCidade1[20], NomeCidade2[20];
int   Populacao1, População2;
float Area1, Area2;
float PIB1, PIB2;
int   NumerosPontosTuristicos1, NumerosPontosTuristicos2;
float DensidadePopulacional1,  DensidadePopulacional2;
float PIBpercaptal1, PIBpercaptal2;
float SuperPoderCarta1, SuperPoderCarta2;

printf("#################################\n");
printf("###                           ###\n");
printf("###       SUPER TRUNFO        ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

//Essa Variavel será sempre o número da carta, sendo incrementado a cada carta cadastrada
int VarNumeroDaCarta = 1;


    //Inicio do Input do usuario ( Primeira carta )

    // Foi necessario utilizar "%[^\n]" nos scanfs de strings, porque quando era digitado, por exemplo: "Rio de Janeiro", os espaços,
    // faziam o codigo pular uma linha e perder a sequencia de preenchimento


//printf("Digite o Numero da primeira carta:"); // Esse input foi automatizado 
//scanf("%d", &Carta1);

printf("Digite o Nome do Pais primeira carta:");
scanf(" %[^\n]", &Pais1);

printf("Digite o Nome do Estado:");
scanf(" %[^\n]", &Estado1);

//printf("Digite o Codigo da carta:"); // Esse input foi automatizado 
//scanf("%s", &Codigo1);

printf("Digite o Nome da Cidade:");
scanf(" %[^\n]", &NomeCidade1);

printf("Digite o numero de habitantes da cidade:");
scanf("%d", &Populacao1);

printf("Digite a Area (Em Km²):");
scanf("%f", &Area1);

printf("Digite o PIB:");
scanf("%f", &PIB1);

printf("Numero de Pontos Turisticos:");
scanf("%d", &NumerosPontosTuristicos1);

printf("\n");
printf("Atenção!!! Agora iremos cadastrar os dados da segunda Carta \n \n");
scanf("Digite qualquer tecla para continuar");
printf("\n");


printf("#################################\n");
printf("###                           ###\n");
printf("###  Cadastro Segunda Carta   ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

       //Inicio do Input do usuario ( Segunda carta )

//printf("Digite o Numero da Segunda carta:"); // Esse input foi automatizado 
//scanf("%s", &Carta2);

printf("Digite o nome do Páis da Segunda Carta:");
scanf(" %[^\n]", &Pais2);

printf("Digite o Nome do Segundo Estado:");
scanf(" %[^\n]", &Estado2);

//printf("Digite o Codigo da Segunda carta:"); // Esse input foi automatizado 
//scanf("%s", &Codigo2);

printf("Digite o Nome da Segunda Cidade:");
scanf(" %[^\n]", &NomeCidade2);

printf("Digite o numero de habitantes da Segunda cidade:");
scanf("%d", &População2);

printf("Digite a Area (Em Km²) da Segunda Carta:");
scanf("%f", &Area2);

printf("Digite o PIB da Segunda carta:  \n");
scanf("%f", &PIB2);

printf("Numero de Pontos Turisticos da Segunda carta:");
scanf("%d", &NumerosPontosTuristicos2);

printf("Cadastros Realizados com Sucesso, abaixo segue o detalhamento do cadastro \n");
printf("\n");

    //calculando densidade populaciona e pib per capta primeira carta
DensidadePopulacional1 = (float)(Populacao1 / Area1);
PIBpercaptal1 = (float)(PIB1 / Populacao1);

    //Calculando Super Poder carta 1

SuperPoderCarta1 = (float)(Populacao1 + Area1 + PIB1 +NumerosPontosTuristicos1 + PIBpercaptal1 - DensidadePopulacional1);


    //Imprimindo o resultado da prmeira carta

printf("#################################\n");
printf("###                           ###\n");
printf("### Resultado primeira Carta  ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

printf("Aqui estao os dados da Primeira Carta: \n\n");
printf("\n");

printf("Numero da carta: %d\n", VarNumeroDaCarta);
printf("Nome do Pais: %s\n", Pais1);
printf("Estado: %s\n", Estado1);
printf("Codigo da carta: %c%d\n", Pais1[0], VarNumeroDaCarta);
printf("Nome da Cidade: %s\n", NomeCidade1);
printf("Número de Habitantes: %d\n", Populacao1);
printf("Área  %.2f\n", Area1);
printf("PIB:  %.2f\n", PIB1);
printf("Número de Pontos turisticos: %d\n", NumerosPontosTuristicos1);
printf("Densidade Populacional %.2f\n", DensidadePopulacional1);
printf("PIB per Capita %.2f\n",PIBpercaptal1);
printf("Super Poder: %.2f\n", SuperPoderCarta1 );

printf("\n");

    //calculando densidade populaciona e pib per capta Segunda carta
DensidadePopulacional2 = (float)(População2 / Area2);
PIBpercaptal2 = (float)(PIB2 / População2);

    //Calculando Super Poder carta 2

SuperPoderCarta2 = (float)(População2 + Area2 + PIB2 + NumerosPontosTuristicos2 + PIBpercaptal2 - DensidadePopulacional2);

VarNumeroDaCarta = VarNumeroDaCarta +1;

printf("#################################\n");
printf("###                           ###\n");
printf("###   Resultado Segunda Carta ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

       //Imprimindo o resultado da segunda carta
printf("Aqui estão os dados da Segunda Carta: \n\n");
printf("\n");
printf("Numero da carta: %d\n", VarNumeroDaCarta);
printf("Nome do Pais: %s\n", Pais2);
printf("Estado: %s\n", Estado2);
printf("Codigo da carta: %c%d\n", Pais2[0], VarNumeroDaCarta);
printf("Nome da Cidade: %s\n", NomeCidade2);
printf("Numero de Habitantes: %d\n", População2);
printf("Area  %.2f\n", Area2);
printf("PIB:  %.2f\n", PIB2);
printf("Numero de Pontos turisticos: %d\n", NumerosPontosTuristicos2);
printf("Densidade Populacional %.2f\n", DensidadePopulacional2);
printf("PIB per Capita %.2f\n",PIBpercaptal2);
printf("Super Poder: %.2f\n", SuperPoderCarta2 );

     //Comparativo entre as cartas

int ResultadoPopulacao = Populacao1 > População2;
int ResultadoArea = Area1 > Area2;
int PIBresultado = PIB1 > PIB2;
int NPontosTuristicosResultado = NumerosPontosTuristicos1 > NumerosPontosTuristicos2;
int PIBperCaptaResultado = PIBpercaptal1 > PIBpercaptal2;
int SuperPoderResultado = SuperPoderCarta1 > SuperPoderCarta2;
int DensidadePopResultado = DensidadePopulacional1 < DensidadePopulacional2;

printf("\n");
printf("Resultado do comprativo entre as cartas");
printf("\n");


     //Criando o Menu Interativo


printf("#################################\n");
printf("###                           ###\n");
printf("### Escolha o Atributo 1      ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

printf("### Agora é a Hora de Escolher um dos atributos para definir o vencendor \n");
printf("\n");


//Menu de opção do usuario
printf("### Digite o atributo de sua preferência\n ###");
printf("\n");
int opcao1;

    printf("1. População... \n");
    printf("2. Area... \n");
    printf("3. PIB...");
    printf("4. Número de pontos Turisticos... \n");
    printf("5. Densidade demográfica... \n");
int ResultadoComparacao1;
int ValorDoresultadoCarta1;
int ValorDoResultadoCarta2;
char OpcaoEscolhida1[30];
int  ValorPerdedor1;
int  ValorDoEmpate1;
    //Solicitando a escolha do usuario
    scanf("%d", &opcao1);



    //Inicio do switch de acordo com a escolha do usuario primeiro atributo
    switch (opcao1)
    {
    case 1: 
        if(Populacao1 > População2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n", Populacao1, População2);
            printf("Carta 1 Venceu, Pais(%s) \n",Pais1);
            ResultadoComparacao1 =  1;
            ValorDoresultadoCarta1 = Populacao1;
            ValorDoResultadoCarta2 = População2;
            strcpy(OpcaoEscolhida1, "População");
            ValorPerdedor1 = População2;
        
        
        } else if(Populacao1 == População2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n", Populacao1, População2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao1 =  0;
            ValorDoEmpate1 = Populacao1;
            ValorDoresultadoCarta1 = Populacao1;
            ValorDoResultadoCarta2 = População2;
            strcpy(OpcaoEscolhida1, "População");
        
        
        } else{
            printf("Pais1 %s X Pais2 %S \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n",Populacao1, População2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao1 =  2;
            ValorDoresultadoCarta1 = Populacao1;
            ValorDoResultadoCarta2 = População2;
            strcpy(OpcaoEscolhida1, "População");
            ValorPerdedor1 = Populacao1;
        
        }    
        break; 
    case 2:
        if(Area1 > Area2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area: %f X Area: %f\n", Area1, Area2);
            printf("Carta 1 Venceu\n");
            ResultadoComparacao1 =  1;
            ValorDoresultadoCarta1 = Area1;
            ValorDoResultadoCarta2 = Area2;
            strcpy(OpcaoEscolhida1, "Area");
            ValorPerdedor1 = Area2;
        
        
        } else if(Area1 == Area2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area: %f X Area: %f\n", Area1, Area2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao1 =  0;
            ValorDoEmpate1 = Area1;
            ValorDoresultadoCarta1 = Area1;
            ValorDoResultadoCarta2 = Area2;
            strcpy(OpcaoEscolhida1, "Area");
        
        
        } else{
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area1: %f X Area2: %f\n",Area1, Area2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao1 =  2;
            ValorDoResultadoCarta2 = Area2;
            ValorDoresultadoCarta1 = Area1;
            strcpy(OpcaoEscolhida1, "Area");
            ValorPerdedor1 = Area1;
        }
        break;
        
    case 3:

        if(PIB1 > PIB2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n", Area1, Area2);
            printf("Carta 1 Venceu\n");
            ResultadoComparacao1 =  1;
            ValorDoresultadoCarta1 = PIB1;
            ValorDoResultadoCarta2 = PIB2;
            strcpy(OpcaoEscolhida1, "PIB");
            ValorPerdedor1 = PIB2;
        
        } else if(PIB1 == PIB2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n", Area1, Area2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao1 =  0;
            ValorDoEmpate1 = PIB1;
            ValorDoresultadoCarta1 = PIB1;
            ValorDoResultadoCarta2 = PIB2;
            strcpy(OpcaoEscolhida1, "PIB");
        
        } else{
            printf("Pais1 %s X Pais2 %ss \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n",Area1, Area2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao1 =  2;
            ValorDoResultadoCarta2 = PIB2;
            ValorDoresultadoCarta1 = PIB1;
            strcpy(OpcaoEscolhida1, "PIB");
            ValorPerdedor1 = PIB1;
        }
        break;
        
    case 4:

        if(NumerosPontosTuristicos1 > NumerosPontosTuristicos2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores,Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n", NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("Carta 1 Venceu\n");
            ResultadoComparacao1 =  1;
            ValorDoresultadoCarta1 = NumerosPontosTuristicos1;
            ValorDoResultadoCarta2 = NumerosPontosTuristicos2;
            strcpy(OpcaoEscolhida1, "Numero de Pontos Turisticos");
            ValorPerdedor1 = NumerosPontosTuristicos2;
        
        } else if(NumerosPontosTuristicos1 == NumerosPontosTuristicos2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores,Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n", NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao1 =  0;
            ValorDoEmpate1 = NumerosPontosTuristicos1;
            ValorDoresultadoCarta1 = NumerosPontosTuristicos1;
            ValorDoResultadoCarta2 = NumerosPontosTuristicos2;

            strcpy(OpcaoEscolhida1, "Numero de Pontos Turisticos");
        
        } else{
            printf("Pais1 %s X Pais2 %S \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n",NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao1 =  2;
            ValorDoResultadoCarta2 = NumerosPontosTuristicos2;
            ValorDoresultadoCarta1 = NumerosPontosTuristicos1;
            strcpy(OpcaoEscolhida1, "Numero de Pontos Turisticos");
            ValorPerdedor1 = NumerosPontosTuristicos1;

        }
        break;
    case 5:

        if(DensidadePopulacional1 < DensidadePopulacional2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1 : %f X Densidade demografica2: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("Carta 1 Venceu\n");
            ResultadoComparacao1 =  1;
            ValorDoresultadoCarta1 = DensidadePopulacional1;
            ValorDoResultadoCarta2 = DensidadePopulacional2;
            strcpy(OpcaoEscolhida1, "Densidade Populacional");
            ValorPerdedor1 = DensidadePopulacional2;
        
        } else if(DensidadePopulacional1 == DensidadePopulacional2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1 : %f X Densidade demografica2: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("### Houve um empate ###\n");
            ResultadoComparacao1 = 0;
            ValorDoEmpate1 = DensidadePopulacional1;
            ValorDoResultadoCarta2 = DensidadePopulacional2;
            ValorDoresultadoCarta1 = DensidadePopulacional1;
            strcpy(OpcaoEscolhida1, "Densidade Populacional");
        
        } else{
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1: %f X Densidade demografica12: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao1 =  2;
            ValorDoresultadoCarta1 = DensidadePopulacional1;
            ValorDoResultadoCarta2 = DensidadePopulacional2;
            strcpy(OpcaoEscolhida1, "Densidade Populacional");
            ValorPerdedor1 = DensidadePopulacional1;
        }    
        break;
        

    default:
        printf("Opção Inválida.\n");
    
    

    }



         //Criando o Menu Interativo

printf("#################################\n");
printf("###                           ###\n");
printf("### Escolha o Atributo 2      ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

printf("### Agora é a Hora de Escolher o segundo atributo para definir o vencendor \n");
printf("\n");


//Menu de opção do usuario
printf("### Digite o atributo de sua preferência\n ###");
printf("\n");
int opcao2;

    printf("1. População... \n");
    printf("2. Area... \n");
    printf("3. PIB...\n");
    printf("4. Número de pontos Turisticos... \n");
    printf("5. Densidade demográfica... \n");
int ResultadoComparacao2;
int ValorDoresultado2;
int ValoResultadoCarta1Atributo2;
int ValoResultadoCarta2Atributo2;
char OpcaoEscolhida2[30];
int ValorPerdedor;
int ValorEmpate2;



    //Solicitando a escolha do usuario
    scanf("%d", &opcao2);

    //checando se o usuario escolheu um atributo diferente.

    if(opcao1 == opcao2 ){
        printf("Opção Invalida!! Você deve escolher atributos diferentes, tente novamente. \n");
        system("pause");
        return 0;
        
    }

//Inicio do switch de acordo com a escolha do usuario Segundo atributo
    switch (opcao2)
    {
    case 1: 
        if(Populacao1 > População2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n", Populacao1, População2);
            printf("Carta 1 Venceu, Pais(%s) \n",Pais1);
            ResultadoComparacao2 =  1;
            ValoResultadoCarta1Atributo2 = Populacao1;
            ValoResultadoCarta2Atributo2 = População2;
            strcpy(OpcaoEscolhida2, "População");
            ValorPerdedor = População2;
            
            
        
        } else if(Populacao1 == População2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n", Populacao1, População2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao2 = 0 ;
            ValorDoresultado2 = Populacao1;
            ValoResultadoCarta1Atributo2 = Populacao1;
            ValoResultadoCarta2Atributo2 = População2;
            ValorEmpate2 = População2;
            strcpy(OpcaoEscolhida2, "População");

        } else{
            printf("Pais1 %s X Pais2 %S \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n",Populacao1, População2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ValoResultadoCarta1Atributo2 = Populacao1;
            ValoResultadoCarta2Atributo2 = População2;
            strcpy(OpcaoEscolhida2, "População");
            ValorPerdedor = Populacao1;
        }    
        break; 
    case 2:
        if(Area1 > Area2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area: %f X Area: %f\n", Area1, Area2);
            printf("Carta 1 Venceu\n");
            ResultadoComparacao2 = 1;
            ValoResultadoCarta1Atributo2 = Area1;
            ValoResultadoCarta2Atributo2 = Area2;
            ValorDoresultado2 = Area1;
            strcpy(OpcaoEscolhida2, "Area");
            ValorPerdedor = Area2;
        
        } else if(Area1 == Area2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area: %f X Area: %f\n", Area1, Area2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao2 =  0;
            ValorEmpate2 = Area1;
            ValorDoresultado2 = Area2;
            ValoResultadoCarta1Atributo2 = Area1;
            ValoResultadoCarta2Atributo2 = Area2;
            strcpy(OpcaoEscolhida2, "Area");
        
        } else{
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area1: %f X Area2: %f\n",Area1, Area2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao2 =  2;
            ValoResultadoCarta1Atributo2 = Area1;
            ValoResultadoCarta2Atributo2 = Area2;
            ValorDoresultado2 = Area2;
            strcpy(OpcaoEscolhida2, "Area");
            ValorPerdedor = Area1;
        }
        break;
        
    case 3:

        if(PIB1 > PIB2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n", Area1, Area2);
            printf("Carta 1 Venceu\n");
            ResultadoComparacao2 =  1;
            ValorDoresultado2 = PIB1;
            strcpy(OpcaoEscolhida2, "PIB");
            ValorPerdedor = PIB2;
        
        } else if(PIB1 == PIB2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n", Area1, Area2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao2 =  0;
            ValorEmpate2 = Area1;
            ValorDoresultado2 = Area2;
            ValoResultadoCarta1Atributo2 = Area1;
            ValoResultadoCarta2Atributo2 = Area2;
            strcpy(OpcaoEscolhida2, "PIB");
        
        } else{
            printf("Pais1 %s X Pais2 %ss \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n",Area1, Area2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao2 =  2;
            ValorDoresultado2 = PIB2;
            ValoResultadoCarta1Atributo2 = PIB1;
            ValoResultadoCarta2Atributo2 = PIB2;
            strcpy(OpcaoEscolhida2, "PIB");
            ValorPerdedor = PIB1;
        }
        break;
        
    case 4:

        if(NumerosPontosTuristicos1 > NumerosPontosTuristicos2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores,Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n", NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("Carta 1 Venceu\n");
            ResultadoComparacao2 =  1;
            ValorDoresultado2 = NumerosPontosTuristicos1;
            ValoResultadoCarta1Atributo2 = NumerosPontosTuristicos1;
            ValoResultadoCarta2Atributo2 = NumerosPontosTuristicos2;
            strcpy(OpcaoEscolhida2, "Numero de Pontos Turisticos");
            ValorPerdedor = NumerosPontosTuristicos2;
        
        } else if(NumerosPontosTuristicos1 == NumerosPontosTuristicos2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores,Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n", NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("### Houve um empate ###\n");
            ResultadoComparacao2 = 0;
            ValorEmpate2 = NumerosPontosTuristicos1;
            ValorDoresultado2 = NumerosPontosTuristicos2;
            ValoResultadoCarta1Atributo2 = NumerosPontosTuristicos1;
            ValoResultadoCarta2Atributo2 = NumerosPontosTuristicos2;

            strcpy(OpcaoEscolhida2, "Numero de Pontos Turisticos");
        
        } else{
            printf("Pais1 %s X Pais2 %S \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n",NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao2 =  2;
            ValorDoresultado2 = NumerosPontosTuristicos2;
            strcpy(OpcaoEscolhida2, "Numero de Pontos Turisticos");
            ValorPerdedor = NumerosPontosTuristicos1;
            ValoResultadoCarta1Atributo2 = NumerosPontosTuristicos1;
            ValoResultadoCarta2Atributo2 = NumerosPontosTuristicos2;

        
        }
        break;
    case 5:

        if(DensidadePopulacional1 < DensidadePopulacional2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1 : %f X Densidade demografica2: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("Carta 1 Venceu\n");
            ResultadoComparacao2 =  1;
            ValorDoresultado2 = DensidadePopulacional1;
            strcpy(OpcaoEscolhida2, "Densidade Populacional");
            ValorPerdedor = DensidadePopulacional2;
            ValoResultadoCarta1Atributo2 = DensidadePopulacional1;
            ValoResultadoCarta2Atributo2 = DensidadePopulacional2;
        
        } else if(DensidadePopulacional1 == DensidadePopulacional2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1 : %f X Densidade demografica2: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("### Houve um empate ###\n");
            ResultadoComparacao2 =  0;
            ValorEmpate2 = DensidadePopulacional1;
            ValorDoresultado2 = DensidadePopulacional2;
            ValoResultadoCarta1Atributo2 = DensidadePopulacional1;
            ValoResultadoCarta2Atributo2 = DensidadePopulacional2;

            strcpy(OpcaoEscolhida2, "Densidade Populacional");
        
        } else{
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1: %f X Densidade demografica12: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
            ResultadoComparacao2 = 2;
            ValorDoresultado2 = DensidadePopulacional2;
            strcpy(OpcaoEscolhida2, "Densidade Populacional");
            ValorPerdedor = DensidadePopulacional1;
            ValoResultadoCarta1Atributo2 = DensidadePopulacional1;
            ValoResultadoCarta2Atributo2 = DensidadePopulacional2;
            
        }    
        break;
        

    default:
        printf("Opção Inválida.\n");
    
    

    };  

int resultadoSoma1, resultadoSoma2, resultadoSomaEmpate;

//Soma os valores da cartas de acordo com o atributo e debita a densidade populacional do total da soma
resultadoSoma1 = ( ValorDoresultadoCarta1 + ValoResultadoCarta1Atributo2 - DensidadePopulacional1 );
resultadoSoma2 = ( ValorDoResultadoCarta2 + ValoResultadoCarta2Atributo2 - DensidadePopulacional2 );
resultadoSomaEmpate = (ValorDoEmpate1 + ValorEmpate2);


//Entregando resultado

printf("#################################\n");
printf("###                           ###\n");
printf("### Resultado Final           ###\n");
printf("###                           ###\n");
printf("#################################\n\n");

    if(resultadoSoma1 > resultadoSoma2 ){
printf("#################################\n");
printf("###                           ###\n");
printf("### Carta 1 Venceu            ###\n");
printf("###                           ###\n");
printf("#################################\n\n");
printf("%s\n", Pais1);
printf("Foram comparados os seguintes atributos, Atributo 1: %s Carta1: (%d) X Carta2(%d)\n", OpcaoEscolhida1, ValorDoresultadoCarta1, ValorDoResultadoCarta2);
printf("Foram comparados os seguintes atributos, Atributo 2: %s Carta1: (%d) X Carta2(%d)\n", OpcaoEscolhida2, ValoResultadoCarta1Atributo2,ValoResultadoCarta2Atributo2  ) ;
printf("Resultado da soma dos atributos Carta 1  : %d\n:", resultadoSoma1);
printf("Resultado da soma dos atributos Carta 2  : %d\n:", resultadoSoma2);


    }else if ( resultadoSoma2 > resultadoSoma1){
printf("#################################\n");
printf("###                           ###\n");
printf("### Carta 2 Venceu            ###\n");
printf("###                           ###\n");
printf("#################################\n\n");
printf("%s\n", Pais1);
printf("Foram comparados os seguintes atributos, Atributo 1: %s Carta1: (%d) X Carta2(%d)\n", OpcaoEscolhida1, ValorDoresultadoCarta1, ValorDoResultadoCarta2);
printf("Foram comparados os seguintes atributos, Atributo 2: %s Carta1: (%d) X Carta2(%d)\n", OpcaoEscolhida2, ValoResultadoCarta1Atributo2,ValoResultadoCarta2Atributo2  ) ;
printf("Resultado da soma dos atributos Carta 1: %d\n:", resultadoSoma1);
printf("Resultado da soma dos atributos Carta 2: %d\n:", resultadoSoma2);


    }else{
printf("#################################\n");
printf("###                           ###\n");
printf("### Houve um empate           ###\n");
printf("###                           ###\n");
printf("#################################\n\n");
printf("Foram comparados os seguintes atributos, Atributo 1: %s Carta1: (%d) X Carta2(%d)\n", OpcaoEscolhida1, ValorDoresultadoCarta1, ValorDoResultadoCarta2);
printf("Foram comparados os seguintes atributos, Atributo 2: %s Carta1: (%d) X Carta2(%d)\n", OpcaoEscolhida2, ValoResultadoCarta1Atributo2,ValoResultadoCarta2Atributo2  ) ;
printf("Resultado da soma dos atributos Carta 1  : %d\n:", resultadoSoma1);
printf("Resultado da soma dos atributos Carta 2  : %d\n:", resultadoSomaEmpate);
    }
    
    
    
    

    system("pause");
    return 0;
}

