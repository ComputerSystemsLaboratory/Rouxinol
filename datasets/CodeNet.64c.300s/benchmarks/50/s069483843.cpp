#include <iostream>

using namespace std;

int bubble_sort(int xs[], int n);
void print_array(const int xs[], int n);

int main(){
    int n;
    cin >> n;
    int xs[n];

    for(int i = 0; i < n; ++i){
        cin >> xs[i];
    }

    int cnt = bubble_sort(xs, n);
    print_array(xs, n);
    cout << cnt << '\n';
}

int bubble_sort(int xs[], int n){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = n-1; j > i; --j){
            if(xs[j] < xs[j-1]){
                ++cnt;
                int tmp = xs[j];
                xs[j] = xs[j-1];
                xs[j-1] = tmp;
            }
        }
    }
    return cnt;
}

void print_array(const int xs[], int n){
    for(int i = 0; i < n-1; ++i){
        cout << xs[i] << ' ';
    }
    cout << xs[n-1] << '\n';
}