#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
using namespace std;

int main(){

    string str;
    int q;

    cin >> str;
    cin >> q;
    int a, b;
    rep(i,0,q){
        string order;
        cin >> order >> a >> b;
        string temp;
        if(order == "replace"){
            cin >>  temp;
            auto it = str.begin()+a;
            for(int j=0; j<= b-a; j++){
                *it++ = temp[j];
            }
        }else if(order == "reverse"){
            string str2 = str;
            auto it = str.begin()+a;
            auto it2 = str2.begin()+b;
            for(int j=0; j<=b-a; j++){
                *it++ = *it2--;
            }
        }else if(order == "print"){
            cout << str.substr(a, b-a+1) << endl;
        }
    }

    return 0;
}