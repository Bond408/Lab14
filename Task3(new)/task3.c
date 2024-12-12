#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n);
double sum_elements(double* ptr_array, int begin, int end);
int find_element(double* ptr_array, int n, double element);
int function(double* ptr_array, int n, double k);

void main() {
	setlocale(LC_ALL, "RUS");
	int first_element, last_element;
	double array[N];
	int size;
	float element;
	int k;
	printf("Введите размер массива > ");
	scanf("%d", &size);
	printf("Введите стартовый элемент массива: ");
	scanf("%d", &first_element);
	printf("Введите последний элемент массива: ");
	scanf("%d", &last_element);
	full_elements(array, size);
	put_elements(array, size);
	double sum = sum_elements(array, first_element, last_element);
	printf("Cумма элементов от array[%d] до array[%d] равна %f\n", first_element, last_element, sum);
	printf("Введите значение элемента: ");
	scanf("%f", &element);
	int index = find_element(array, size, element);
	if (index == -1) {
		printf("-1\n");
	}
	if (index != -1) {
		printf("Индекс числа %f = array[%d]\n", element, index);
	}
	printf("До какой позиции (вкл): ");
	scanf("%d", &k);
	double max_element = function(array, size, k);
	printf("Максимальный элемент до %d индекса = %lf", k, max_element);
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

int function(double* ptr_array, int n, double k) {
	double max = -10000000;
	for (int i = 0; i <= k; i++) {
		if (max < ptr_array[i]) {
			max = ptr_array[i];
		}
	}
	return max;
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
