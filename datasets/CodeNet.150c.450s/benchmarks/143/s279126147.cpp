    #include <bits/stdc++.h>
     
    using namespace std;
    const long long INF = 1LL <<60;  
     
    long long gcn(long long x,long long y){
      if(x%y==0){
        return y;
      }
      else{
        return gcn(y,x%y);
      }
    }
     
    int main(void){
      long long res=0;
      long long n,q;
      long tmp,tmp2;
      long n_max=100000;
      long long i,j,k;
      long a[100010]={};
      
      cin>>n;
      for(i=0;i<n;i++){
        cin>>tmp;
        a[tmp]++;
        res+=tmp;
      }
      cin>>q;
      for(i=0;i<q;i++){
        cin>>tmp>>tmp2;
        res+=a[tmp]*(tmp2-tmp);
        a[tmp2]+=a[tmp];
        a[tmp]=0;
        cout<<res<<endl;
      }
//      cout<<res<<endl;
      return 0;
    }