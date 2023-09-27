#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<set>
#include<map>
#include<string.h>
#include<queue>
#include<math.h>
#include<stdio.h>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int mi=INT_MAX;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<mi){
                mi=a[i]-a[i-1];
            }
        }
        cout<<mi<<endl;
    }
    return 0;
}