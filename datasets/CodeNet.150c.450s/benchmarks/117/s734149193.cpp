#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <type_traits>
#include <vector>

using namespace std;

static int comp_count = 0;

#define NDEBUG 1

#ifndef NDEBUG
#define _DBG 1
#include <stdio.h>
#else
#define _DBG 0
#endif

#define DbgP(fmt, ...) \
    do { if (_DBG){ fprintf(stderr, fmt, __VA_ARGS__); }} while (0)

#define DbgFunc(fmt, ...) \
    do { if (_DBG){ fprintf(stderr, "%s(", __FUNCTION__); fprintf(stderr, fmt, __VA_ARGS__); fputs(")\n", stderr); }} while (0)

template<typename R, typename A>
void merge(int left, int left_last, int right_last, R ar, A tmp){
    int right = left_last + 1;
    int n = right_last - left + 1;
    int t = left;
    int c = left;
    DbgFunc("%d,%d,%d,%d", left, left_last, right, right_last);

    while (left <= left_last && right <= right_last) {
        if(ar[left] <= ar[right]){
            tmp[t] = ar[left];
            left++;
        }else{
            tmp[t] = ar[right];
            right++;
        }
        t++;
    }

    while (left <= left_last) {
        tmp[t++] = ar[left++];
    }
    while (right <= right_last) {
        tmp[t++] = ar[right++];
    }

    for (int i = 0; i < n; i++) {
        ar[right_last] = tmp[right_last];
        right_last--;
    }

    comp_count += t - c;
}

template<typename R, typename A>
void m_sort(int left, int right, R ar, A tmp){
    if(left < right){
        int mid = (left + right) / 2;
        
        m_sort(left, mid, ar, tmp);
        m_sort(mid + 1, right, ar, tmp);

        merge(left, mid, right, ar, tmp);
    }
}

template<typename T>
void merge_sort(T begin, T end){
    if(begin < end){
        int n = end - begin;
        auto tmp = new typename decay<decltype(*begin)>::type[n];
        m_sort(0, end - begin - 1, begin, tmp);
    }
}

int ar[500000];

int main(int argc, char const* argv[])
{
    int n;

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    merge_sort(ar, ar + n);

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", ar[i]);
    }
    printf("%d\n", ar[n - 1]);
    printf("%d\n", comp_count);

    return 0;
}