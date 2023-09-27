#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        unsigned long long int n,k,i,score[200000];
        cin>>n>>k;
        i=0;
        while(i<n){
                cin>>score[i];
                if(i>=k){
                        
                        if(score[i]>score[i-k])
                       {
                        cout<<"Yes\n";}
                        else{
                                cout<<"No\n";
                        }
                }
                i++;
        }
return 0;
}
/*

        creation time:  15.09.2020 11:04:53

*/                      

