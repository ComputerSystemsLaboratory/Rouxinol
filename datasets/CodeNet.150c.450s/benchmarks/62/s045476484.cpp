#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int AscSort(const void* v1, const void* v2);

int main() {
    int num[4];
    
    cin >> num[0] >> num[1] >> num[2] ;
    qsort(num, 3, sizeof(num[0]), AscSort);
    printf("%d %d %d\n", num[0], num[1], num[2]);
    return 0;
}

int AscSort(const void* v1, const void* v2) {
    const int _v1 = *((const int*)v1);
    const int _v2 = *((const int*)v2);

    if (_v1 > _v2) {
        return 1;
    }
    else if (_v1 < _v2) {
        return -1;
    }
    else {
        return 0;
    }
}