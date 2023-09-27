#include <iostream>
using namespace std;

static const int MAX = 200000;

int main(){
    int R[MAX], n;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> R[i];
    }
    int max = R[1] - R[0];
    int c = max;
    int min = R[0]<R[1]?R[0]:R[1];

    for(int i=2;i<n;i++){
        c = R[i] - min;
        if(c > max){
            max = c;
        }
        if(min > R[i]){
            min = R[i];
        }
    }
    cout << max << endl;
}
