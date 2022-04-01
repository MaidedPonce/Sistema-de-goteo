#include <stdio.h>

int main()
{
        unsigned int long base, altura, valorDeTerrenos, totalDeTuberias, reguladoresTotales, bulbosPorMetro, periodosDeBulbos, bulbosTotales, valorTerreno, costoTotalDeTuberia, costoTotalDeReguldadores, costoTotalDeBulbos, costoFinal;
        int opcion;
        int metrosDeTuberia = 2;
        int bulbos = 10;
        int tiempoDeCosecha = 24;
        int caducidadDeBulbos = 3;
        int costoMetroTuberia = 100;
        int costoPiezaBulbo = 250;
        int costoPiezaReguldaor = 300;
        int presupuesto = 80000000;

        printf("Hola. Ingresa la base de tu paralelogramo ");
        scanf("%ld", &base);
        printf("Ahora ingrese la altura de tu paralelogramo ");
        scanf("%ld", &altura);
        
        if(base == altura) {
            printf("No podemos hacer calculos si no hay una medida menor a la otra, asegurese de que sus datos son correctos.");
            return 0;
        }
        else

        printf("Ingresa que opción quieres saber: \n 1.Cuántos metros2  tiene cada paralelogramo \n 2.Cuántos metros2  tiene todo el terreno. \n 3. Cuántos metros se necesitan de tubería \n 4. Cuántos reguladores se necesitan \n 5. Cuántos bulbos se necesitarán durante toda la cosecha \n 6. Calcula el costo de tuberia, reguladores y bulbos. \n 7. Costo total de todos los materiales por cosecha \n");
        
        valorDeTerrenos=base*altura;
        valorTerreno=valorDeTerrenos*4;
        totalDeTuberias=metrosDeTuberia*valorTerreno;
        reguladoresTotales=valorDeTerrenos*2;

        bulbosPorMetro=bulbos*valorTerreno;
        periodosDeBulbos=tiempoDeCosecha/caducidadDeBulbos;
        bulbosTotales=bulbosPorMetro * periodosDeBulbos;

        costoTotalDeTuberia = totalDeTuberias*costoMetroTuberia;
        costoTotalDeReguldadores = reguladoresTotales*costoPiezaReguldaor;
        costoTotalDeBulbos = bulbosTotales*costoPiezaBulbo;


        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            {
                printf("El area de su paralelogramo es %ld m2", valorDeTerrenos);
                break;
            }
        case 2:
            {
                printf("El area de su terreno total es %ld m2", valorTerreno);
                break;
            }
        case 3:
            {
                printf("El total de metros de tubería que necesita para todo el terreno es de %ld", totalDeTuberias);
                break;
            }
        case 4:
            {
                printf("El total de metros de reguladores que necesita para todo el terreno es de %ld", reguladoresTotales);
                break;
            }
        case 5:
            {
                printf("El total de bulbos por toda la cosecha es de %ld", bulbosTotales);
            }
        case 6:
            {
                printf("El costo total para la tubería es de %ld \n El costo total para los reguladores es de %ld \n Y el costo total para bulbos es de %ld", costoTotalDeTuberia, costoTotalDeReguldadores, costoTotalDeBulbos);
            }
        case 7:
            {
                costoFinal= costoTotalDeTuberia+costoTotalDeReguldadores+costoTotalDeBulbos;
                printf("El costo total por 24 meses de cosecha incluyendo materiales es de %ld", costoFinal);
                while (costoFinal < presupuesto)
                {
                    printf("El costo no excede el presupuesto, se puede implementar el sistema de riego por goteo");
                    return 0;
                };
                printf("\n El costo excede el presupuesto, no se puede implementar el sistema de riego");
            }
            break;
        default:
            break;
        }
        return 0;
}