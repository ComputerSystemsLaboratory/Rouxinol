#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,r,c,p;
    vector<int> s,s2;
    while(1){
        cin >> n >> r;
        if(n==0&&r==0)  break;
        for(int i=1;i<=n;i++){
            s.push_back(i);
        }
        while(r--){
            cin >> p >> c;
            for(int i=0;i<n-c-p+1;i++){
                s2.push_back(s[i]);
            }
            for(int i=n-p+1;i<n;i++){
                s2.push_back(s[i]);
            }
            for(int i=n-c-p+1;i<n-p+1;i++){
                s2.push_back(s[i]);
            }
            s.clear();
            for(int i=0;i<n;i++){
                s.push_back(s2[i]);
            }
            s2.clear();
        }
        cout << s[n-1] << "\n";
        s.clear();
    }
}