/**
Task: An unsorted array is given.
      We have to sort it using Insertion Sort.
Complexity: O(n^2). In each iterate, it sorts the
            left most segment.
**/

#include <bits/stdc++.h>

using namespace std;

int insertionSort(int ar[], int ar_size) {
    for(int i=1; i < ar_size; i++) {
        int currentValue = ar[i];
        int j = i-1;
        //sort the segment on left of index i
        while( j>=0 && ar[j] > currentValue ) {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = currentValue;
    }
}

//initialize unsorted array
int arr[] = {14, 33, 12, 20, 25, 11};

int main() {
    int array_size = sizeof(arr)/4;

    insertionSort(arr, array_size);

    //print sorted array
    for(int i=0; i < array_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
