   //Task: An unsorted array is given.
  //       We have to sort it using Bubble Sort.
 //Complexity: O(n^2). In each iterate, it sorts the
//             right most unsorted item.


#include <bits/stdc++.h>

using namespace std;

int bubbleSort(int ar[], int ar_size) {
    for(int i=1; i < ar_size; i++) {
        for(int j=0; j < ar_size-i; j++) {
            if(ar[j] > ar[j+1])
                swap(ar[j], ar[j+1]);
        }
    }
}

//initialize unsorted array
int arr[] = {53, 14, 33, 12, 20, 25, 11};

int main() {
    int array_size = sizeof(arr)/4;

    bubbleSort(arr, array_size);

    //print sorted array
    for(int i=0; i < array_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
