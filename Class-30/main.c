#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

float area(float r)

{
    float area;
    area=3.1416*r*r;
    printf("area %f ",area);
    return PI*r*r;

}
int main()
{
    float a=10.0;
    float x=area(10.2);
    printf("result %f ",x);
    return 0;
}
