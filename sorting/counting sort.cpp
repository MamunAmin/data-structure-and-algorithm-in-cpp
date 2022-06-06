/**
Task: An unsorted array is given.
      We have to sort it using Counting Sort.
Complexity: O(n+W), where W is the value of array's max item.
            Good to use when dataset is big enough and W < 10^5.
**/

#include <bits/stdc++.h>
#define MAX_VALUE_OF_ARRAY 53

using namespace std;

int countingSort(int ar[], int sorted_ar[], int ar_size) {
    for(int i=0; i < ar_size; i++) {
        sorted_ar[ar[i]]++;
    }
}

//initialize unsorted array
int arr[] = {53, 14, 33, 12, 11, 14, 20, 25, 11};
int sorted_arr[MAX_VALUE_OF_ARRAY+1];

int main() {
    int array_size = sizeof(arr)/4;

    memset(sorted_arr, 0, sizeof(sorted_arr));

    countingSort(arr, sorted_arr, array_size);

    //print sorted array
    for(int i=0; i <= MAX_VALUE_OF_ARRAY; i++) {
        while(sorted_arr[i]) {
            printf("%d ", i);
            sorted_arr[i]--;
        }
    }
    return 0;
}
