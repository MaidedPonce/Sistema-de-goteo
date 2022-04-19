#include <stdio.h>

struct campesino
{
    char nombre[20];
    unsigned int long base, altura, valorDeTerrenos, totalDeTuberias, reguladoresTotales, bulbosPorMetro, periodosDeBulbos, bulbosTotales, valorTerreno, costoTotalDeTuberia, costoTotalDeReguldadores, costoTotalDeBulbos, costoFinal;

} campesino[5];

int main()
{
    int metrosDeTuberia = 2;
    int bulbos = 10;
    int tiempoDeCosecha = 24;
    int caducidadDeBulbos = 3;
    int costoMetroTuberia = 100;
    int costoPiezaBulbo = 250;
    int costoPiezaReguldaor = 300;
    int presupuesto = 80000000;
    int personas = 0;

    for (int i = 0; i <= 4; i++)
    {
        fflush(stdin);
        
        printf("Digite su nombre %i - ", i);
        scanf("%s", campesino[i].nombre);

        printf("Digite la base de su terreno %d - ", i);
        scanf("%ld", &campesino[i].base);

        printf("Digite la altura de su terreno %d - ", i);
        scanf("%ld", &campesino[i].altura);

        if (campesino[i].altura == campesino[i].base || campesino[i].altura == 0 || campesino[i].base == 0)
        {
            printf("No podemos hacer calculos si no hay una medida menor a la otra, asegurese de que sus datos son correctos.");
            return 0;
        }
    }

    for (int long i = 0; i <= 4; i++)
    {
        campesino[i].valorDeTerrenos = campesino[i].base * campesino[i].altura;
        campesino[i].valorTerreno = campesino[i].valorDeTerrenos * 4;
        campesino[i].totalDeTuberias = metrosDeTuberia * campesino[i].valorTerreno;
        campesino[i].reguladoresTotales = campesino[i].valorDeTerrenos * 2;
        campesino[i].bulbosPorMetro = bulbos * campesino[i].valorTerreno;
        campesino[i].periodosDeBulbos = tiempoDeCosecha / caducidadDeBulbos;
        campesino[i].bulbosTotales = campesino[i].bulbosPorMetro * campesino[i].periodosDeBulbos;
        campesino[i].costoTotalDeTuberia = campesino[i].totalDeTuberias * costoMetroTuberia;
        campesino[i].costoTotalDeReguldadores = campesino[i].reguladoresTotales * costoPiezaReguldaor;
        campesino[i].costoTotalDeBulbos = campesino[i].bulbosTotales * costoPiezaBulbo;
        campesino[i].costoFinal = campesino[i].costoTotalDeTuberia + campesino[i].costoTotalDeReguldadores + campesino[i].costoTotalDeBulbos;

        printf("\n ------------------------------------------ \n");
        printf(" Hola %s, estos son tus resultados", campesino[i].nombre);
        printf("\n El valor de cada terreno es de %ld ", campesino[i].valorDeTerrenos);
        printf("\n El valor de todo terreno es de %ld ", campesino[i].valorTerreno);
        printf("\n El total de metros de tubería que necesita para todo el terreno es de %ld ", campesino[i].totalDeTuberias);
        printf("\n El total de metros de reguladores que necesita para todo el terreno es de %ld ", campesino[i].reguladoresTotales);
        printf("\n El total de bulbos por toda la cosecha es de %ld ", campesino[i].bulbosTotales);
        printf("\n El costo total para la tubería es de %ld \n El costo total para los reguladores es de %ld \n Y el costo total para bulbos es de %ld ", campesino[i].costoTotalDeTuberia, campesino[i].costoTotalDeReguldadores, campesino[i].costoTotalDeBulbos);
        printf("\n El costo total por 24 meses de cosecha incluyendo materiales es de %ld ", campesino[i].costoFinal);

        if (campesino[i].costoFinal < presupuesto)
        {
            printf("\n El costo no excede el presupuesto, se puede implementar el sistema de riego por goteo");
        }
        else
        {
            printf("\n El costo excede el presupuesto, no se puede implementar el sistema de riego");
        }

        printf("\n ------------------------------------------ \n");
    }

    return 0;
}