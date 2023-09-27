#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n];
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    
    int replaceCnt = 0;
    int start = 0;
    for(int i = 0; i < n; i++){
        int min = d[start], pos = start;
        for(int k = start; k < n; k++){
            if(d[k] < min){
                min = d[pos = k];
            }
        }
        if(pos != start) replaceCnt++;
        d[pos] = d[start];
        d[start++] = min;
    }
    
    for(int i = 0; i < n; i++){
        cout << (!i ? "" : " ") << d[i];
    }
    cout << endl << replaceCnt << endl;
    
    return 0;
}