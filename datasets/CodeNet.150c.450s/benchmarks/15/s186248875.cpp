#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,q;
    int cnt=0;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>q;
    vector<int>t(q);
    for(int i=0;i<q;i++){
        cin>>t[i];
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(s[j]==t[i]){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
