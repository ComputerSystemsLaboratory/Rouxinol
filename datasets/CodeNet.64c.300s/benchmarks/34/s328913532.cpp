#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    int d[N];
    for(int i = 0; i < N; i++){
        cin >> d[i];
        cout << d[i] << (i+1 == N ? "" : " ");
    }
    
    for(int i = 1; i < N; i++){
        int now = d[i], j = i - 1;
        for(; j >= 0; j--){
            d[j+1] = d[j];
            if(d[j] < now) break;
        }
        d[j+1] = now;
        
        cout << endl;
        for(int k = 0; k < N; k++){
            cout << d[k] << (k+1 == N ? "" : " ");
        }
    }
    cout << endl;
    return 0;
}