#include <stdio.h>
#include <math.h>

double pow(double a, double b);
double sqrt(double x);
double func(double * param);

int main(void)
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	for (int i=0; i<5; i++)
	{
		scanf(" %lf", &arr[i]);
	}
	printf("Standard Deviationsqrt = %.3f\n", func(arr));
	return 0;
}

double func(double * param)
{
	double total = 0.0, mu = 0.0, var = 0.0, squrTotal = 0.0;
	int n = 5; 
	for (int i=0; i<5; i++)
	{
		total += param[i];
	}
	mu = total / n;
	for (int i=0; i<5; i++)
	{
		squrTotal += pow(param[i] - mu, 2);
	}
	return sqrt(squrTotal/n);
}