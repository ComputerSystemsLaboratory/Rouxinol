#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> v;
    for(int i=0; i<N; ++i){
        string str; cin >> str;
        v.push_back(str);
    }
    int cnt=0, M;
    cin >> M;
    for(int i=0; i<M; ++i){
        bool flag = false;
        string str; cin >> str;
        for(int j=0; j<N; ++j){
            if(v[j]==str){
                if(cnt%2==0) cout << "Opened by " << str << endl;
                else cout << "Closed by " << str << endl; 
                flag = true;
                cnt++;
            }
            if(flag) break;
        if(j==N-1){
            cout << "Unknown " << str << endl;
        }
        }
        
               
    }
    return 0;
}
