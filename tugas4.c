#include <stdio.h>
int main() 
{
    printf("No\tCelcius\tFahrenheit\tReamur\tKelvin\n");
    for (int i = 1; i <= 11; i++) {
        int celsius = (i - 1) * 10;
        double fahrenheit = (celsius * 9.0/ 5.0) + 32;
        double reamur = celsius * 4.0 / 5.0;
        double kelvin = celsius + 273.15;
        printf("%d\t%d\t%.0f\t\t%.0f\t%.2f\n", i, celsius, fahrenheit, reamur, kelvin);
    }
    return 0;
}