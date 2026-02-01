#include <stdio.h>
#include <stdlib.h>

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




    //Inicio do Input do usuario ( Primeira carta )

printf("Digite o Numero da primeira carta:");
scanf("%d", &Carta1);

printf("Digite o Nome do Pais primeira carta:");
scanf("%s", &Pais1);

printf("Digite o Nome do Estado:");
scanf("%s", &Estado1);

printf("Digite o Codigo da carta:");
scanf("%s", &Codigo1);

printf("Digite o Nome da Cidade:");
scanf("%s", &NomeCidade1);

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


       //Inicio do Input do usuario ( Segunda carta )

printf("Digite o Numero da Segunda carta:");
scanf("%d", &Carta2);

printf("Digite o nome do Páis da Segunda Carta:");
scanf("%s", &Pais2);

printf("Digite o Nome do Segundo Estado:");
scanf("%s", &Estado2);

printf("Digite o Codigo da Segunda carta:");
scanf("%s", &Codigo2);

printf("Digite o Nome da Segunda Cidade:");
scanf("%s", &NomeCidade2);

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

SuperPoderCarta1 = (float)(Populacao1 + Area1 + PIB1 +NumerosPontosTuristicos1 + PIBpercaptal1);


    //Imprimindo o resultado da prmeira carta

printf("Aqui estao os dados da Primeira Carta: \n\n");
printf("\n");

printf("Numero da carta: %d\n", Carta1);
printf("Nome do Pais: %s\n", Pais1);
printf("Estado: %s\n", Estado1);
printf("Codigo da carta: %s\n", Codigo1);
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

SuperPoderCarta2 = (float)(População2 + Area2 + PIB2 + NumerosPontosTuristicos2 + PIBpercaptal2);


       //Imprimindo o resultado da segunda carta
printf("Aqui estão os dados da Segunda Carta: \n\n");
printf("\n");
printf("Numero da carta: %d\n", Carta2);
printf("Nome do Pais: %s\n", Pais2);
printf("Estado: %s\n", Estado2);
printf("Codigo da carta: %s\n", Codigo2);
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

printf("### Agora é a Hora de Escolher um dos atributos para definir o vencendor \n");
printf("\n");

int opcao;
    printf("### Digite o atributo de sua preferência\n ###");
    printf("\n");
    printf("1. População... \n");
    printf("2. Area... \n");
    printf("3. PIB...");
    printf("4. Número de pontos Turisticos... \n");
    printf("5. Densidade demográfica... \n");

    //Solicitando a escolha do usuario
    scanf("%d", &opcao);

    //Inicio do switch de acordo com a escolha do usuario
    switch (opcao)
    {
    case 1: 
        if(Populacao1 > População2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n", Populacao1, População2);
            printf("Carta 1 Venceu, Pais(%s) \n",Pais1);
        
        } else if(Populacao1 == População2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n", Populacao1, População2);
        
            printf("### Houve um empate ###\n");
        
        } else{
            printf("Pais1 %s X Pais2 %S \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %d X População2: %d\n",Populacao1, População2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
        }    
        break; 
    case 2:
        if(Area1 > Area2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %f X População2: %f\n", Area1, Area2);
            printf("Carta 1 Venceu\n");
        
        } else if(Area1 == Area2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Pouluação1: %f X População2: %f\n", Area1, Area2);
            
            printf("### Houve um empate ###\n");
        
        } else{
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Area1: %f X Area2: %f\n",Area1, Area2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
        }
        break;
        
    case 3:

        if(PIB1 > PIB2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n", Area1, Area2);
            printf("Carta 1 Venceu\n");
        
        } else if(PIB1 == PIB2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n", Area1, Area2);
            
            printf("### Houve um empate ###\n");
        
        } else{
            printf("Pais1 %s X Pais2 %ss \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, PIB1: %f X PIB2: %f\n",Area1, Area2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
        }
        break;
        
    case 4:

        if(NumerosPontosTuristicos1 > NumerosPontosTuristicos2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores,Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n", NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("Carta 1 Venceu\n");
        
        } else if(NumerosPontosTuristicos1 == NumerosPontosTuristicos2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores,Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n", NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            
            printf("### Houve um empate ###\n");
        
        } else{
            printf("Pais1 %s X Pais2 %S \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Numero de Pontos Turisticos1: %f X Numero de Pontos Turisticos2: %f\n",NumerosPontosTuristicos1, NumerosPontosTuristicos2);
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
        }
        break;
    case 5:

        if(DensidadePopulacional1 < DensidadePopulacional2 ){
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1 : %f X Densidade demografica2: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("Carta 1 Venceu\n");
        
        } else if(DensidadePopulacional1 == DensidadePopulacional2) {
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1 : %f X Densidade demografica2: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("### Houve um empate ###\n");
        
        } else{
            printf("Pais1 %s X Pais2 %s \n ", Pais1,Pais2 ) ;
            printf("Foi comparada os seguintes valores, Densidade demografica1: %f X Densidade demografica12: %f\n", DensidadePopulacional1, DensidadePopulacional2);
            printf("### Nesse caso a menor densidade demografica vence\n");
            printf("Carta 2 Venceu, Pais(%s) \n",Pais2);
        }    
        break;
        

    default:
        printf("Opção Inválida.\n");
    
    

    }

    system("pause");
    return 0;
}

