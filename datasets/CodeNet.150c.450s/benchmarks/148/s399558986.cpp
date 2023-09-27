#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        long int n;
        vector<long int> ans(4,0);
        cin>>n;
        vector<string> verdict(4);
        verdict[0]="AC";
        verdict[1]="WA";
        verdict[2]="TLE";
        verdict[3]="RE";
        vector<string>string(n);
        for(long int i=0;i<n;i++){
                cin>>string[i];
                for(int j=0;j<4;j++){
                        if(string[i]==verdict[j]){
                                ans[j]++;
                        }
                }
                
        }
        for(int j=0;j<4;j++){
                cout<<verdict[j]<<" x "<<ans[j]<<"\n";
        }
return 0;
}
/*

        creation time:  13.09.2020 09:23:27

*/                      

