#include<stdio.h>
#include<locale.h>
#include<math.h>

double* fill_elem(double* ptr_array, int n);
int put_elem(double* ptr_array, int n);
double* calc_elem(double* ptr_array, int n);
double sum_elem(double* ptr_array, int begin, int end);

void main()
{
	system("color F0");

	int ff1, ff2;

	setlocale(LC_ALL, "RUS");

	double array[1024];
	int size;

	printf("Кол-во элементов массива = ");
	scanf_s("%d", &size);
	printf("Старт: ");
	scanf_s("%d", &ff1);
	printf("Конец: ");
	scanf_s("%d", &ff2);

	fill_elem(array, size);
	calc_elem(array, size);
	put_elem(array, size);
	sum_elem(array, ff1, ff2);
}

double* fill_elem(double* ptr_array, int n) {
	double z = 1;
	for (int i = 0; i < n; i++)

	{
		ptr_array[i] = z;
		ptr_array[i] = (pow(z, 3) - 4 * pow(z, 2) + 2);
		z += 0.02;
	}

}

int put_elem(double* ptr_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("array[%d] = %f\n", i, ptr_array[i]);
	}
}

double* calc_elem(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] = -1 * (ptr_array[i]);
	}
	return ptr_array;
}

double sum_elem(double* ptr_array, int begin, int end)
{
	double s = 0;
	for (int i = begin; i <= end; i++)
	{
		s += ptr_array[i];
	}
	printf(" от %d до  %d равно %f\n", begin, end, s);
}