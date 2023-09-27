#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>
#include <algorithm>
#define DATA_NUM 5
#define swap(type, x, y) do{type temp = x; x = y; y = temp;}while(0);

using namespace std;

void quick_sort(int x[], int left, int right);
int main(void) {
    int x[DATA_NUM] = {0};
    int i;
    
    for(i = 0; i < DATA_NUM; i++)
        scanf("%d", &x[i]);
    
    quick_sort(x, 0, DATA_NUM - 1);
    
    for(i = DATA_NUM - 1; i >= 0; i--) {
        cout << x[i];
        (i) ? putchar(' ') : putchar('\n');
    }
    
    return(0);
}

void quick_sort(int x[], int left, int right) {
    int i, j;
    int pivot;
    i = left;
    j = right;
    pivot = x[(left + right) / 2];
    
    while(1) {
        while(x[i] < pivot) i++;
        while(x[j] > pivot) j--;
        
        if(i >= j) break;
        
        swap(int, x[i], x[j]);
        i++;
        j--;
    }
    if(i - 1 > left) quick_sort(x, left, i - 1);
    if(j + 1 < right) quick_sort(x, j + 1, right);
}