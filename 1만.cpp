// 5-9장 코딩 시험
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void interchange(int * u, int * v);

float seriesTerm(float a, float b, int c);

double sequenceSum(float a, float b, int c);

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

		scanf("%c", &ch);

		
		
		printf("Sequence series\n");
			scanf("%f %f", &r, &a0);
			nterm = seriesTerm(a0, r, n);
			seriesSum = sequenceSum(a0, r, n);
			printf("a0 = %f, r = %f, n = %d, nterm = %f, seriesSum = %f", a0, r, nterm, seriesSum);



		//default:

		}

		n += 100000;
	

	system("pause");

	return 0;
}

void interchange(int * u, int * v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}

long rfact(int n) //참조용
{
	long ans;
	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;
	return ans;
}

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
}

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
	printf("\n summation : &e\n", ssum);
	return 0;

}