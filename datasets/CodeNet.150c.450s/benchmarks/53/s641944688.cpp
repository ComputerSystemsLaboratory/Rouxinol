#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<":";
    int m=n;
    for(int i=2;i<sqrt(n);i++){
       for(;;){
          if(m%i!=0){break;}
          else if(m%i==0){
          	     cout<<" "<<i;
          	     m/=i;
          }
       }
       if(m==1)break;
    }
    if(n==m){
      cout<<" "<<n<<endl;
    }
    else if(m!=1){
           cout<<" "<<m<<endl;	
    }
    else{cout<<endl;}
    return 0;
}
