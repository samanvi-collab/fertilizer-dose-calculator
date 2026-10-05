#include <stdio.h>
#include <math.h>

// declaration
float loadPercentage(float, float);
// definition
float loadPercentage(float loadKva, float ratedKva)
{
    return (loadKva * ratedKva) * 100;
}
int main()
{
    int id, loadKva, ratedKva;
    scanf("%d %f %f", &id, &loadKva, &ratedKva);
    float result = loadPercentage(loadKva, ratedKva);
    if (result < 80)
    {
        printf("normal");
    }
    if (result <= 100)
    {
        printf("warning");
    }
    else
    {
        printf("overload");
    }
}