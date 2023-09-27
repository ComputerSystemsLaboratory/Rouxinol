#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int n1;
    int n2;
    int num;
    int cnt;
    int ans = 0;
    int tmpans;
    int m;
    while (cin>>n>>n1>>n2,n!=0||n1!=0||n2!=0){
        vector<int> vec(n);
        m = 0;
        for(m = 0;m < n;m++){
            cin >> num;
            vec.at(m) = num;
        }
        ans = 0;
        while(n1<=n2){
            tmpans = vec.at(n1-1) - vec.at(n1);
            if (tmpans >= ans){
                ans = tmpans;
                cnt = n1;
            }
            n1 = n1 + 1;
        }
        cout<<cnt<<endl;
    }
}
