#include <iostream>
#include <vector>

long int cnt = 0;

void swap(std::vector<int>& arr, int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void merge(std::vector<int>& arr, int start, int mid, int end) {
    int length = end -start;
    int left = start, right = mid;
    std::vector<int> tmp(length);
    for (int i=0; i<length; i++) {
        if ( !(right < end) ) {
            tmp[i] = arr[left];
            left++;
        } else if ( !(left < mid) ) {
            tmp[i] = arr[right];
            right++;
        } else if ( arr[left] < arr[right] ) {
            tmp[i] = arr[left];
            left++;
        } else {
            tmp[i] = arr[right];
            right++;
            cnt+= mid - left;
        }
    }
    
    for (int i=0; i<length; i++) {
        arr[start+i] = tmp[i];
    }
}

void merge_sort(std::vector<int>& arr, int start, int end) {
    if ( end - start > 1 ) {
        if ( end - start == 2 ) {
            if ( arr[start] > arr[start+1] ) {
                swap(arr, start, start+1);
                cnt++;
            }
        } else {
            int mid = ( start + end ) / 2;
            merge_sort(arr, start, mid);
            merge_sort(arr, mid, end);
            merge(arr, start, mid, end);
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    
    merge_sort(a, 0, n);
    
    std::cout << cnt << std::endl;
}