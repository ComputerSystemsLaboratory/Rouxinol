#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
using namespace std;

struct pond {
    int startPos;
    int volume;
};

int main() {
    int n, q;
    cin >> n;
    int s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    cin >> q;
    int t[q];
    for(int i = 0; i < q; i++){
        cin >> t[i];
    }
    
    long cnt = 0;
    for(int i = 0; i < q; i++){
        for(int j = 0; j < n; j++){
            if(t[i] == s[j]){
                cnt++;
                break;
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}