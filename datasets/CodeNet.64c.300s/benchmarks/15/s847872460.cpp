#include <iostream>
using namespace std;

void show(int nums[], int n) {
    for (int k = 0; k < n; ++k) {
        if( k == n - 1) {
            cout << nums[k];
        } else {
            cout << nums[k] << " ";
        }
    }
    cout << endl;
}

void select_sort(int nums[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int min = i;
        for (int j = i; j < n; ++j) {
            if(nums[j] < nums[min]) {
                min = j;
            }
        }
        if(i != min) {
            int temp = nums[i];
            nums[i] = nums[min];
            nums[min] = temp;
            count++;
        }
    }
    show(nums, n);
    cout << count << endl;
}

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    select_sort(nums, n);
    return 0;
}