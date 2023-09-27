#include "bits/stdc++.h"
using namespace std;
int main(){
    string s,order,p;
    char ch;
    cin >> s;
    int n,i,a,b;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> order;
        if(order == "replace"){
            cin >> a >> b >> p;
            s.replace(a,b-a+1,p);
        }
        if(order == "reverse"){
            cin >> a >> b;
            int left = a;
            int right = b;
            while(left < right){
                ch = s.at(right);
                s.at(right) = s.at(left);
                s.at(left) = ch;
                right--;
                left++;
            }
        }
        if(order == "print"){
            cin >> a >> b;
            cout << s.substr(a,b-a+1) << endl;
        }
    }
}
