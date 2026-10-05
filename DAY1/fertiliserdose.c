#include <stdio.h>
#include <math.h>
// declaration
double doseCalculate(double, double);
// definition
double doseCalculate(double areaHa, double rateHa)
{
    return areaHa * rateHa;
}
// declarate
double bagsNeeded(double, double);

double bagsNeeded(double quantityKg, double bagSizeKg)
{
    return ceil(quantityKg / bagSizeKg);
}

int main()
{
    double areaHa, rateHa, bagSize;
    printf("Enter the Area,rate and bagS");
    scanf("%lf %lf %lf", &areaHa, &rateHa, &bagSize);
    // Calculate dose

    double dose = doseCalculate(areaHa, rateHa);
    // Calculate Bags
    double bags = bagsNeeded(dose, bagSize);

    printf("Plot:%d ,Dose:%lf, bags:%lf\n", 1, dose, bags);
}