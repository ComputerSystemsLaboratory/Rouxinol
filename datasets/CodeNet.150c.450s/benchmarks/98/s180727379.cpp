#include <iostream>
using namespace std;
 
int main() {
  int ma,mb,n,m,i,j,suma,sumb;
  while(1){
    int min=0;
    suma=0;
    sumb=0;
    cin>>n>>m;
    if (n==0) break;
    int a[n];
    int b[m];
    for (i=0;i<n;i++){
      cin>>a[i];
    }
    for (i=0;i<m;i++){
      cin>>b[i];
    }
    
    //a??¨b???????¨?????¨????
    for (i=0;i<n;i++){
      suma=suma+a[i];
    }
    for (i=0;i<m;i++){
      sumb=sumb+b[i];
    }
    
//(a[i]-b[j])*2=suma-sumb??¨???????????????????????????????????°??????
    for (i=0;i<n;i++){
      for (j=0;j<m;j++){
        if((a[i]-b[j])*2==suma-sumb){
          if(a[i]+b[j]<min||min==0){
            min=a[i]+b[j];
            ma=a[i];
            mb=b[j];
          }
        }
      }
    }
    if (min==0) cout<<-1<<endl;
    if (min!=0) cout<<ma<<" "<<mb<<endl;
  }
}