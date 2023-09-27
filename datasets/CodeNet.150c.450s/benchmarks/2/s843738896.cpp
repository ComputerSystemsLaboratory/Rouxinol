#include <iostream>
#include <algorithm>

using namespace std;
int partition(int* xs, int p, int r){
    int x = xs[r];
    int i = p-1;
    for(int j = p; j < r; ++j){
        if(xs[j] <= x){
            ++i;
            swap(xs[i], xs[j]);
        }
    }
    swap(xs[i+1], xs[r]);
    return i+1;
}

int main(){
    int n;
    cin >> n;
    int xs[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &xs[i]);
    }
    int idx = partition(xs, 0, n-1);
    for(int i = 0; i < idx; ++i){
        printf("%d ", xs[i]);
    }
    printf("[%d]", xs[idx]);
    for(int i = idx+1; i < n; ++i){
        printf(" %d", xs[i]);
    }
    cout << endl;
}