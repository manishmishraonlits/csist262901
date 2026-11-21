#include <stdio.h>

int main(void)
{
    int hin, eng, math, sc, sst;
    float agg, per;

    printf("Enter the marks of Hindi: ");
    scanf("%d", &hin);
    printf("Enter the marks of English: ");
    scanf("%d", &eng);
    printf("Enter the marks of Mathematics: ");
    scanf("%d", &math);
    printf("Enter the marks of Science: ");
    scanf("%d", &sc);
    printf("Enter the marks of Social Studies: ");
    scanf("%d", &sst);

    agg = hin + eng + math + sc + sst;
    per = agg / 500 * 100;

    printf("Aggregate Marks: %1.0f\n", agg);
    printf("Percentage of Marks: %1.2f", per);

    return 0;
}
