/**
Task:
    An array is given including negative value.
    We have to find out the maximum sum of sub-array.
Complexity:
    O(n)
**/

#include <bits/stdc++.h>

int kadaneAlgorithm(int arr[], int lnth) {
    int sum = 0;
    int mx = arr[0];
    for(int i=0; i < lnth; i++) {
        sum += arr[i];
        if(sum > mx) mx = sum;
        if(sum < 0) sum = 0;
    }
    return mx;
}

int main() {
    int ara[] = {-2, -3, 4, -1, -2, 1, 5, -3, -7, 1};
    int array_length = sizeof(ara)/sizeof(ara[0]);
    int answer = kadaneAlgorithm(ara, array_length);
    printf("Largest sum of sub-array: %d\n", answer);
    return 0;
}
