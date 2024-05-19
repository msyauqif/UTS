// insertion sort
#include <iostream>
using namespace std;

void insertionSort(int angka[], int n) {
    for (int i = 1; i < n; i++) {
        int key = angka[i];
        int j = i - 1;
        while (j >= 0 && angka[j] > key) {
            angka[j + 1] = angka[j];
            j = j - 1;
        }
        angka[j + 1] = key;
    }
}

void printArray(int angka[], int size) {
    for (int i = 0; i < size; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
}

int main() {
    int angka[] = {12, 11, 13, 5, 6};
    int n = sizeof(angka)/sizeof(angka[0]);

     cout << "\nData sebelum disortir\n";
	for(int i = 0; i < n; i++){
		cout << angka[i] << " ";
		}
    cout << "\n" << endl;
    insertionSort(angka, n);
    cout << "yang sudah tersortir : \n";
    printArray(angka, n);
    return 0;
}
