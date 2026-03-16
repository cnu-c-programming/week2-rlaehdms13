#include <stdio.h>

int main()
{
    int age;
    char grade;
    float gpa;

    scanf("%d %f %c", &age, &gpa, &grade);
    printf("%d %c %f\n", age, grade, gpa);

    return 0;
}
