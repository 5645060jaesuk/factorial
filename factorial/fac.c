#include<stdio.h>

double factorial_rec(int n)
{
	if (n <= 1) return 1;
	else return(n * factorial_rec(n - 1));
}

double factorial_iter(int n)
{
	int i;
	double res = 1;
	for (i = 1; i <= n; i++)
		res = res * i;
	return(res);
}

int main(void)
{
	int n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);

	printf("%f\n", result_iter);
	printf("%f", result_rec);
}