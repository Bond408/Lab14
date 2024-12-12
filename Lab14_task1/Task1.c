#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
double* calc_elements(double* ptr_array, int n);

void main() {
	setlocale(LC_ALL, "RUS");
	double array[N];
	int size;
	printf("¬ведите размер массива > ");
	scanf("%d", &size);
	full_elements(array, size);
	put_elements(array, size);
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
double* calc_elements(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] = pow(ptr_array[i], 2);
	}
	return ptr_array;
}




#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 100
double sum_elements(double* ptr_array, int begin, int end);

void main() {
	int first_element, last_element;
	setlocale(LC_ALL, "RUS");
	double array[N];
	int size;
	printf("¬ведите размер массива > ");
	scanf("%d", &size);
	printf("¬ведите стартовый элемент массива: ");
	scanf("%d", &first_element);
	printf("¬ведите последний элемент массива: ");
	scanf("%d", &last_element);

}

double sum_elements(double* ptr_array, int begin, int end) {

	double sum = 0;
	for (int i = begin; i <= end; i++) {

		sum += ptr_array[i];

	}
	return sum;