#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int *puntero;
    puntero = &num;

    num = 90;

    printf("%d; %d \n", num, puntero);
    printf("%d; %d \n", num, &puntero);
    printf("%d; %d \n", &num, &puntero);
    printf("%d; %d \n", num, *puntero);
    return 0;
}
