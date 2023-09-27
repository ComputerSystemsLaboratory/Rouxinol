#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long int n;

    while(cin>>n){
        if(n==0)break;
        else{
            long long int ans=1000001;

            vector<long long int> v;

            for(int i=0;i<n;i++){
                long long int a;
                cin>>a;
                v.push_back(a);
            }

            sort(v.begin(),v.end());
            
            for(int i=0;i<n-1;i++){
                ans=min(ans,v[i+1]-v[i]);
            } 
            
            cout<<ans<<endl;

        }
    }

    return 0;
}