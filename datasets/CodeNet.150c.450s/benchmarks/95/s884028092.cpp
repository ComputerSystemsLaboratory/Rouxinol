#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;

int n;
int main() {
    while(cin >> n, n){
        vector<string> v;
        for(int i=0; i<n; ++i){
            string str; cin >> str;
            v.push_back(str);
        }
        int cnt=0, state=0;//0を床、1を台上とする
        for(int i=1; i<n; ++i){
            if((v[i]=="lu"&&v[i-1]=="ru")||(v[i]=="ru"&&v[i-1]=="lu")){
                if(state!=1){
                    cnt++; state=1;
                }
            }else if((v[i]=="ld"&&v[i-1]=="rd")||(v[i]=="rd"&&v[i-1]=="ld")){
                if(state!=0){
                    cnt++; state=0;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
