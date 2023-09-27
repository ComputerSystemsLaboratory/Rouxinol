#include <iostream>

using namespace std;
int selection_sort(int xs[], int n){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        int mini = i;
        for(int j = i; j < n; ++j){
            if(xs[j] < xs[mini]){
                mini = j;
            }
        }
        if(mini != i){
            ++cnt;
            swap(xs[i], xs[mini]);
        }
    }
    return cnt;
}

template <class T>
void print_array(T xs[], int n){
    for(int i = 0; i < n-1; ++i){
        cout << xs[i] << ' ';
    }
    cout << xs[n-1] << '\n';
}

int main(){
    int n;
    cin >> n;
    int xs[n];
    for(int i = 0; i < n; ++i){
        cin >> xs[i];
    }
    int cnt = selection_sort(xs, n);
    print_array(xs, n);
    cout << cnt << '\n';
}