#include <iostream>
using namespace std;

int main(){
  int b,f,r,v,i,j,n;
  int a[12][10];
  for (j=0;j<12;j++){
    for (i=0;i<10;i++)a[j][i]=0;
  }
  cin>>n;
  for (i=0;i<n;i++){
    cin>>b>>f>>r>>v;
    a[b*3+f-4][r-1]+=v;
  }
  for (j=0;j<12;j++){
    if (j&&!(j%3))cout<<"####################"<<endl;
    for (i=0;i<10;i++){
      cout<<' '<<a[j][i];
    }
    cout<<endl;
  }
}

