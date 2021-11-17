#include <stdlib.h>
#include <stdio.h>

int main()
{
    int girls = 12;
    int boys = 9;
    int students = girls + boys;

    printf("There are %d boys\n", boys);
    printf("There are %d girls\n", girls);
    printf("Total number of students is %d\n", students);

    return EXIT_SUCCESS;
}