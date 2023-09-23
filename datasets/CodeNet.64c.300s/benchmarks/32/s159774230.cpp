#include <iostream>
using namespace std;
int N, A[10010]; // ?°?????????????????????????
int min(int *a, int size) {
    int min = a[0];
    for(int i=0;i<size;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int max(int *a, int size) {
    int max = a[0];
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

long long sum(int *a, int size) {
    long long sum = 0;
    for(int i=0;i<size;i++){
        sum += a[i];
    }
    return sum;
}

int main() {
    cin >> N;
    for (int i=0; i<N; ++i)
        cin >> A[i];
    cout << min(A,N) << " " << max(A,N) << " " << sum(A,N) << endl;
}