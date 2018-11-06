// 5-9장 코딩 시험
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void interchange(float * u, float * v);

float seriesTerm(float a, float b, int c);

double sequenceSum(float a, float b, int c);


int fiboTerm(int n);//recursion 사용

long fibonacciSum(int n);//recursion  사용

float fsort(void);

int main(void)
{
	char ch;
	float r, a0, nterm, seriesSum;
	int n = 1000;
	double nfibo, fibosum;

	float series[] = { 3.14, 4.55, 23.123, 5.678, 9.121, 19.19, 33.33, 12.12, 13.13, 4.44 };

	while (n < 1000000)
	{
		printf("\n1.Sequence Series  2.Fibonacci series  3.Sort \nEnter choice: ");

		scanf("%c", ch);

		switch (ch)
		{
		case 1:  printf("Sequence series\n");
			scanf("%f %f", &r, &a0);
			nterm = seriesTerm(a0, r, n);
			seriesSum = sequenceSum(a0, r, n);
			printf("a0 = %f, r = %f, n = %f, nterm = %f, seriesSum = %f", a0, r, nterm, seriesSum);

		case 2:
			printf("Fibonacci series\n");

			//Fn = Fn-1 + Fn-2 + Fn-2

			//F0 = 0, F1 = 1, F2 = 1

			int n, i;
			printf("Enter n for Fibonacci numbers : ");
			scanf("%d", &n);
			if (n > 0) {
				printf("Fibonacci numbers are\n");
				for (i = 0; i < n; i++) {
					if (i == n - 1)
						printf("%d = ", fiboTerm(i));
					else
						printf("%d + ", fiboTerm(i));
				}
				printf("summation : %lf\n", fibonacciSum(i)-1);
			}
			else
				printf("Put nonnegative integer!");

			nfibo = fiboTerm(n);//Fn의 값을 계산

			fibosum = fibonacciSum(n);//F0 + F1 + ... + Fn의 합을 구하기

			printf("nfibo = %f fibosum = %f \n", nfibo, fibosum);

		case 3:  printf("Sorting\n");

			//sizeof를 사용

			for (int i = 0; i < sizeof(series)/sizeof(series[0]); i++)

				printf("series[i] = %f\n", series[i]);

			fsort(series);

			

		default:

		}

		n += 100000;
	}

	system("pause");

	return 0;
};

float fsort(float sort)
{
	float sort[];
	for (int i = 0; i < sizeof(sort) / sizeof(sort[0]); i++) {
		for (int j = i + 1; j < sizeof(sort) / sizeof(sort[0]); j++) {
			if (sort[i] < sort[j]) interchange(&sort[i], &sort[j]);
		};
		printf("series[i] = %f\n", sort[i]);
	}
	return 0;
};

void interchange(int * u, int * v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
};

long rfact(int n) //참조용
{
	long ans;
	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;
	return ans;
};

float seriesTerm(void)
{
	float a, b;
	int c;
	float i;
	scanf("%f %f %d", &a, &b, &c);
	for (i = 0; i < c; i++) {
		printf("%f", a);
		a *= b;
	}
	return 0;
};

double sequenceSum(void)
{
	float a, b;
	int c;
	float i;
	float ssum = 0;
	scanf("%f %f %d", &a, &b, &c);
	for (i = 0; i < c; i++) {
		ssum += a;
		a *= b;
	}
	printf("\n summation : &f\n", ssum);
	return 0;

};

int fiboTerm(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fiboTerm(n - 2) + fiboTerm(n - 2) + fiboTerm(n - 1);
};

long fibonacciSum(int n)
{
	return (n > 0 ? fibonacciSum(n - 1) + fibonacciSum(n - 2): 1);
};

