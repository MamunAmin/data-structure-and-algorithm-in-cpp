   //Task: An array is given.
  //       We have to find out the sum of given range inclusive.
 //Complexity: Usually O(1) when input is given on runtime. But here, it O(n)

#include <bits/stdc++.h>

using namespace std;

int query(int arr[], int lnth, int left, int right) {
    for(int i=1; i < lnth; i++)
        arr[i] += arr[i-1];
    int ans = arr[right] - arr[left-1];
    return ans;
}

int main() {
    int ara[] = {1, 4, 5, 7, 8, 11, 2, 3, 7, 2};
    int array_length = sizeof(ara)/sizeof(ara[0]);
    int left_range = 2, right_range = 6;
    int answer = query(ara, array_length, left_range, right_range);
    printf("Sum of given range: %d\n", answer);
    return 0;
}
