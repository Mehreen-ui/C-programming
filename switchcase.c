#include <stdio.h>

int main()
{
    int Unit;
    printf("Choose the required Unit (1-8): ");
    scanf("%d", &Unit);

    switch (Unit)
    {
        case 1:
            printf("Nanometer (nm)\n");
            break;
        case 2:
            printf("Micrometer (µm)\n");
            break;
        case 3:
            printf("Millimeter (mm)\n");
            break;
        case 4:
            printf("Centimeter (cm)\n");
            break;
        case 5:
            printf("Meter (m)\n");
            break;
        case 6:
            printf("Kilometer (km)\n");
            break;
        case 7:
            printf("Inch (in)\n");
            break;
        case 8:
            printf("Foot (ft)\n");
            break;
        default:
            printf("Invalid Input!! please choose again\n");
            break;
    }
    return 0;

}
