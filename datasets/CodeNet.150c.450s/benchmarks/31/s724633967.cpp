#include<iostream>
#include<cmath>
using namespace std;

void maxPro(int x[], int n);

int main() {
    int n; //how many numbers
    int x[200000];
    
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> x[i]; 
    } 
    maxPro(x, n);
    return 0;
}

void maxPro(int x[], int n) {  
    int minn=x[0], maxx=x[1]-x[0];
    for ( int i = 1; i < n; i++ ) {
        /*ここ n にsizeof(x)/sizeof(x[0])だと
          main内のsizeがわからない
          そして、maxfProの引数にそれ与えても200000が返される*/
    
        maxx = max(maxx, x[i] - minn);
        minn = min(minn, x[i]);
    }
    cout << maxx << endl;
}
