#include <stdio.h>

void bubbleSort(int a[], int n) {

  for (int step = 0; step < n - 1; ++step) {
    for (int i = 0; i < n - step - 1; ++i) {
      if (a[i] > a[i + 1]) {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d  ", a[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {-2, 45, 0, 11, -9, 10};
  int n = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}
