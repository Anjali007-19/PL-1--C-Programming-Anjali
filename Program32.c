/*
Program (32) -> Write a program to calculate the area of a triangle.
Solution (4): Arguments, Returns a Value.
*/
#include <stdio.h>

float areaTriangle(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    area = areaTriangle(base, height);

    printf("Area of Triangle = %f", area);

    return 0;
}
```[span_0](start_span)[span_0](end_span)

**Output:**[span_1](start_span)[span_1](end_span)
```text
Enter base: 25
Enter height: 2
Area of Triangle = 25.000000
```[span_2](start_span)[span_2](end_span)
