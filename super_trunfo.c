#include <stdio.h>

int main() {
    char codigo[10];
    char estado;
    char cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int turismo;
    float densidade;
    float percapita;
    float densidadeinversa;
    float superpoder;
    
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    
    printf("Digite nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%u", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo);

    densidade = populacao/area;
    percapita = pib/populacao;

    densidadeinversa = area/populacao;

    superpoder = populacao + area + pib + turismo + percapita + densidadeinversa;

    printf("\n"); //Essa linha gera um espaço entre as entradas e saídas


    printf("Carta 1\n");

    printf("Código da carta: %s\n", codigo);
    printf("Nome do estado: %c\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("População da cidade: %u\n", populacao);
    printf("Área da cidade: %.1f km²\n", area);
    printf("PIB da cidade: %.1f milhões de reais\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", turismo);
    printf("Densidade populacional: %.1f hab/km²\n", densidade);
    printf("PIB per Capita: %.1f reais\n", percapita);
    printf("Densidade populaional inversa: %.1f hab/km²\n", densidadeinversa);
    printf("Super Poder: %.1f pontos\n", superpoder);

    printf("\n"); //As maiúsculas diferenciam as variáveis das duas cartas

    char Codigo[10];
    char Estado;
    char Cidade[20];
    unsigned long int Populacao;
    float Area;
    float Pib;
    int Turismo;
    float Densidade;
    float Percapita;
    float Densidadeinversa;
    float Superpoder;
    

    
    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo);
    
    printf("Digite nome do estado: \n");
    scanf("%s", &Estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a população da cidade: \n");
    scanf("%u", &Populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &Pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &Turismo);

    //Cálculos

    Densidade = Populacao/Area;
    Percapita = Pib/Populacao;

    Densidadeinversa = Area/Populacao;

    Superpoder = Populacao + Area + Pib + Turismo + Percapita + Densidadeinversa;


    printf("\n");//Essa linha gera um espaço entre as duas cartas

    printf("Carta 2\n");

    printf("Código da carta: %s\n", Codigo);
    printf("Nome do estado: %c\n", Estado);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População da cidade: %u\n", Populacao);
    printf("Área da cidade: %.1f km²\n", Area);
    printf("PIB da cidade: %.1f milhões de reais\n", Pib);
    printf("Quantidade de pontos turísticos: %d\n", Turismo);
    printf("Densidade populacional: %.1f hab/km²\n", Densidade);
    printf("PIB per Capita: %.1f reais\n", Percapita);
    printf("Densidade populaional inversa: %.1f hab/km²\n", Densidadeinversa);
    printf("Super Poder: %.1f pontos\n", Superpoder);

    //Comparação entre cartas

    printf("\n"); //Essa linha gera um espaço entre as entradas e saídas

    printf("Comparação Carta 1\n");

    printf("\n");

    printf("populacao > Poupulacao: %d\n", populacao > Populacao);
    printf("area > Area: %d\n", area > Area);
    printf("pib > Pib: %d\n", pib > Pib);
    printf("turismo > Turismo: %d\n", turismo > Turismo);
    printf("densidade > Densidade: %d\n", densidade > Densidade);
    printf("percapita > Percapita: %d\n", percapita > Percapita);
    printf("densidadeinversa > Densidadeinversa: %d\n", densidadeinversa > Densidadeinversa);
    printf("superpoder > Superpoder: %d\n", superpoder > Superpoder);

    printf("\n"); //Essa linha gera um espaço entre as entradas e saídas

    printf("Comparação Carta 2\n");

    printf("\n");

    printf("Populacao > poupulacao: %d\n", Populacao > populacao);
    printf("Area > area: %d\n", Area > area);
    printf("Pib > pib: %d\n", Pib > pib);
    printf("Turismo > turismo: %d\n", Turismo > turismo);
    printf("Densidade > densidade: %d\n", Densidade > densidade);
    printf("Percapita > percapita: %d\n", Percapita > percapita);
    printf("Densidadeinversa > densidadeinversa: %d\n", Densidadeinversa > densidadeinversa);
    printf("Superpoder > superpoder: %d\n", Superpoder > superpoder);

    

    return 0;

}