#include<bits/stdc++.h>

using namespace std;

int main(){
    int  n;
    while(cin>>n,n){
        vector<int>students(n);
        for(int i=0;i<n;++i){
            cin>>students[i];
        }
        sort(students.begin(),students.end());
        int ans=100000000;
        for(int i=1;i<n;++i){
            ans=min(ans,students[i]-students[i-1]);
        }
        cout<<ans<<endl;
    }
}