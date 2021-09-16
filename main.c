#include <stdio.h>

/*autor: Beatriz Lima
  ano: 2021
  discipl�na: AlgProg2*/

/*Leia um valor X. Coloque este valor na primeira posi��o de um vetor N[100].
Em cada posi��o subsequente de N (1 at� 99),
coloque a metade do valor armazenado na posi��o anterior,
conforme o exemplo abaixo. Imprima o vetor N.
*/
int main()
{
    double x, n[100];
    int i;

    scanf("%lf", &x);

    n[0] = x;
    for(i = 1; i <= 99; i++)
        n[i] = n[i-1]/2.0;

    for(i = 0; i <= 99; i++)
        printf("N[%d] = %.4lf\n", i, n[i]);

    return 0;
}
