#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

using namespace std;

static int count = 0;


template<typename T>
void merge(T ar[], T tmp[], int left, int mid, int right_last){
    int n, left_last, tmp_pos=left;

    left_last = mid - 1;
    n = right_last - left + 1;

    // ??????????????????????????§
    while (left <= left_last && mid <= right_last) {
        count++; // ???????????°
        if(ar[left] <= ar[mid]){
            tmp[tmp_pos] = ar[left];
            left++;
        }else{
            tmp[tmp_pos] = ar[mid];
            mid++;
        }
        tmp_pos++;
    }

    // ????????????
    while(left <= left_last){
        count++; // ???????????°
        tmp[tmp_pos] = ar[left];
        left++;
        tmp_pos++;
    }
    // ????????????
    while (mid <= right_last) {
        count++; // ???????????°
        tmp[tmp_pos] = ar[mid];
        mid++;
        tmp_pos++;
    }

    // tmp??????ar???
    for (int i = 0; i < n; i++) {
        ar[right_last] = tmp[right_last];
        right_last--;
    }

}

template<typename T>
void m_sort(T ar[], T tmp[], int left, int right){
    int mid;


    if(right > left){
        mid = (left + right) / 2;

        m_sort(ar, tmp, left, mid);
        m_sort(ar, tmp, mid + 1, right);

        merge(ar, tmp, left, mid + 1, right);
        
    }
}

template<typename T>
void merge_sort(T ar[], T tmp[], int n){
    m_sort(ar, tmp, 0, n - 1);
}

int ar[500000], tmp[500000];

int main(int argc, char const* argv[])
{
    int n;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    merge_sort(ar, tmp, n);

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", ar[i]);
    }
    printf("%d\n", ar[n-1]);
    printf("%d\n", count);

    return 0;
}