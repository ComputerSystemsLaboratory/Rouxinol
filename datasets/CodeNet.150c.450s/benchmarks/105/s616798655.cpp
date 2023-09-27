        #include <bits/stdc++.h>
        using namespace std;
   #define int long long
const int MAX = 510000;
const int MOD = 998244353;


     signed main(){
         cout << std::fixed << std::setprecision(15);
int T;
cin>>T;
for(int t=0;t<T;t++){
     int n;
     cin>>n;
     int a[n];
     string s;
     for(int i=0;i<n;i++)cin>>a[i];
     cin>>s;
     int ans=0;
     for(int i=n-1;i>=0;i--){
          if(s[i]=='1'){
               vector<int> v;
               int w[61]={};
               for(int j=n-1;j>i;j--)if(s[j]=='0'){
                    v.push_back(a[j]);
               }
               
               if(v.empty()){
                    ans=1;
                    break;
               }
               for(int j=60;j>=0;j--){
                    for(int k=0;k<v.size();k++){
                         if((1ll<<j)&v[k]){
                              swap(v[k],v[v.size()-1]);
                              break;
                         }
                    }
                    if((1ll<<j)&v[v.size()-1]){
                         for(int k=0;k<v.size()-1;k++)if((1ll<<j)&v[k])v[k]^=v[v.size()-1];
                         w[j]=v[v.size()-1];
                         v.pop_back();
                    }
                    if(v.empty())break;
               }
               //cerr<<v.size()<<' ';
               int ans2=0;
               for(int j=60;j>=0;j--){
                    if((ans2^a[i])&(1ll<<j)){
                         ans2^=w[j];
                    }
                    if((ans2^a[i])&(1ll<<j)){
                         ans=1;
                         break;
                    }
               }
             
          }
            if(ans==1)break;
     }
     cout<<ans<<endl;
}

 }

 


 






    





      

        
