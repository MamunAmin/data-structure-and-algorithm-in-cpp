/**
Task:
    An unsorted array is given.
    We have to sort it using Selection Sort.
Complexity:
    O(n^2). In each iterate, it sorts the
    left most unsorted item.
**/

#include <bits/stdc++.h>

using namespace std;

int selectionSort(int ar[], int ar_size) {
    for(int i=0; i < ar_size-1; i++) {
        for(int j=i+1; j < ar_size; j++) {
            if(ar[i] > ar[j])
                swap(ar[i], ar[j]);
        }
    }
}

//initialize unsorted array
int arr[] = {14, 33, 12, 20, 25, 11};

int main() {
    int array_size = sizeof(arr)/4;

    selectionSort(arr, array_size);

    //print sorted array
    for(int i=0; i < array_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
