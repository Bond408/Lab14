#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n);
double sum_elements(double* ptr_array, int begin, int end);
int find_element(double* ptr_array, int n, double element);

void main() {
	setlocale(LC_ALL, "RUS");
	int first_element, last_element;
	double array[N];
	int size;
	float element;
	printf("¬ведите размер массива > ");
	scanf("%d", &size);
	printf("¬ведите стартовый элемент массива: ");
	scanf("%d", &first_element);
	printf("¬ведите последний элемент массива: ");
	scanf("%d", &last_element);
	full_elements(array, size);
	put_elements(array, size);
	double sum = sum_elements(array, first_element, last_element);
	printf("Cумма элементов от array[%d] до array[%d] равна %f\n", first_element, last_element, sum);
	printf("¬ведите значение элемента: ");
	scanf("%f", &element);
	int index = find_element(array, size, element);
	if (index == -1) {
		printf("-1");
	}
	if (index != -1) {
		printf("»ндекс числа %f = array[%d]", element, index);
	}
	calc_elements(array, size);
}

double* full_elements(double* ptr_array, int n) {
	double a = 2;
	for (int i = 0; i < n; i++) {
		double x2 = pow(2, a);
		double x3 = 2 * pow(a, 2);
		double y = x2 - x3 - 1;
		ptr_array[i] = y;
		a += 1;
	}
}

int put_elements(double* ptr_array, int n) {

	for (int i = 0; i < n; i++) {
		printf("array[%d] = %lf\n", i, ptr_array[i]);
	}

}

double sum_elements(double* ptr_array, int begin, int end)
{
	double s = 0;
	for (int i = begin; i <= end; i++)
	{
		s += ptr_array[i];
	}

	return s;
}

int find_element(double* ptr_array, int n, double element) {
	for (int i = 0; i < n; i++) {
		if (ptr_array[i] == element) {
			return i;
		}
	}
	return -1;
}

double* calc_elements(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] = pow(ptr_array[i], 2);
	}
	return ptr_array;
}
