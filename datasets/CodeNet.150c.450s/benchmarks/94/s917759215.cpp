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
    int count = 0;
    bool replaced = true;
    while(replaced){
        replaced = false;
        for(int i = 0; i < n - count - 1; i++){
            if(d[i] > d[i+1]){
                int buf = d[i];
                d[i] = d[i+1];
                d[i+1] = buf;
                replaceCnt++;
                replaced = true;
            }
        }
        count++;
    }
    
    for(int i = 0; i < n; i++){
        cout << (!i ? "" : " ") << d[i];
    }
    cout << endl << replaceCnt << endl;
    
    return 0;
}