#include <iostream>


using namespace std;
template <class T>
void selectSort(T a[], int size) {
	long i, j, k;
	T x;
	// i - номер текущего шага
	for (i = 0; i < size; i++) {
		k = i;
		x = a[i];
		// цикл выбора наименьшего элемента 
		for (j = i + 1; j < size; j++)
			if (a[j] < x) {
				k = j;
				x = a[j];
				// k - индекс наименьшего элемента
			}
		if (k != i) {
			a[k] = a[i];
			a[i] = x;
			// меняем местами наименьший с a[i]
		}
	}
}

int main() {
	srand(time(NULL));
	const int SIZE = 10;
	int ar[SIZE];
	// до сортировки 
	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
		cout << "\n\n";

		selectSort(ar, SIZE);
		// после сортировки
		for (int i = 0; i < SIZE; i++) {
			cout << ar[i] << "\t";
		}
		cout << "\n\n";
		return 0;
	}
