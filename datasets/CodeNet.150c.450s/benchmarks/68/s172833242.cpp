#include <iostream>
#include <stdlib.h>

int* merge(int a[], int n) {
    if (n == 1) {
        return a;
    }
    int* a1 = (int*)malloc(n/2 * sizeof(int));
    int* a2 = (int*)malloc((n-n/2) * sizeof(int));
    for(int i = 0; i < n/2; i++) {
        a1[i] = a[i];
    }
    for(int i = n/2; i < n; i++) {
        a2[i-n/2] = a[i];
    }
    a1 = merge(a1,n/2);
    a2 = merge(a2,n-n/2);
    int i1 = 0;
    int i2 = 0;
    for(int i = 0; i < n; i++) {
        if(i2 == n-n/2 || (i1 != n/2 && a1[i1] < a2[i2])) {
            a[i] = a1[i1];
            i1++;
        } else {
            a[i] = a2[i2];
            i2++;
        }
    }
    return a;
}

int main(){
    int n;
    std::cin >> n;
    while(n != 0) {
        int* a = (int*)malloc(n * sizeof(int));
        for(int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        a = merge(a,n);
        int min = a[1] - a[0];
        for(int i = 1; i < n-1; i++) {
            int tmp = a[i+1] - a[i];
            if (tmp < min) {
                min = tmp;
            }
        }
        std::cout << min << std::endl;
        std::cin >> n;
    }
    return 0;
}
