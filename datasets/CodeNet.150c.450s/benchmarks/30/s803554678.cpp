#include <iostream>

using namespace std;

static const int MAX = 100;
int cnt = 0;

void trace(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if(i > 0) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

void selection_sort(int *a, int n) {
    int mini, tmp;
    for (int i = 0; i < n; i++){
        mini = i;
        for (int j = i; j < n; j++){
            if (a[j] < a[mini]) {
                mini = j;
            }
        }
        if (i != mini){
            tmp = a[i];
            a[i] = a[mini];
            a[mini] = tmp;
            cnt++;
        }
    }
}


int main(){
    int R[MAX], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> R[i];

    selection_sort(R, n);
    trace(R, n);
    cout << cnt << endl;

    return 0;
}