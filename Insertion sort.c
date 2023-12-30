#include<stdio.h>

void printArray(int A[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

void insertion(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int toinsert= A[i];
        int j=i-1;

        while(j>=0 && A[j]>toinsert){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=toinsert;
        }
    }

    int main() {
  int data[] = {15, 4, 2, 12, 6};
  int n = sizeof(data) / sizeof(data[0]);
  insertion(data, n);
  printf("Sorted array in ascending order:\n");
  printArray(data, n);
  return 0;
}


