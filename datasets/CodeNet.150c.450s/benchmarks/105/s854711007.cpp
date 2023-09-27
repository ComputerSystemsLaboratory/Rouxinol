#include<bits/stdc++.h>
using namespace std;

long getBit(long n){
    long tmp = 1;
    while(n >= tmp){
        tmp *= 2;
    }
    
    tmp /= 2;
    return tmp;
}


int main(){
   int t;
   cin >> t;
   vector<int>ans(t);
   for(int tt = 0;tt<t;tt++){
       int n;
       cin >> n;
       long a[n];
       for(int i=0;i<n;i++)cin >> a[i];
       string s;
       cin >> s;
           bool chk = true;
           vector<long>zero;
           for(int i=n-1;i>=0;i--){
               if(s[i] == '0'){
                   zero.push_back(a[i]);
               }else{
                   long tmp = a[i];
                    for(int j=0;j<zero.size();j++){
                       sort(zero.begin()+j,zero.end(),greater<long>());
                       long bit = getBit(zero[j]);
                       if(bit==0)break;
                       for(int k=j+1;k<zero.size();k++){
                           if(zero[k] >= bit)zero[k]=zero[k]^zero[j];
                       }
                   }
                   for(int j=0;j<zero.size();j++){
                       if(zero[j]==0)break;
                       if(getBit(tmp) == getBit(zero[j])){
                           tmp = tmp^zero[j];
                       }
                       if(tmp==0)break;
                   }

                   if(tmp!=0){
                       chk=false;
                       break;
                   }
               }
           }
           if(chk)ans[tt]=0;
           else ans[tt]=1;
       
   }

   for(int i=0;i<t;i++){
       cout << ans[i] << endl;
   }

   return 0;
}