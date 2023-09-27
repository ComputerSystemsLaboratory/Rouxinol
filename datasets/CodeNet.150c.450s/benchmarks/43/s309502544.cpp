#include<iostream>
using namespace std;

int main()
{
  while(1){
    int n;
    cin>>n;

    if(n){
      int a[10000];
      int b[10000];

      for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
      }

      int ap=0,bp=0;
      
      for(int i=0;i<n;i++){
		if(a[i]>b[i]){ap+=a[i]+b[i];}
		else if(a[i]<b[i]){bp+=a[i]+b[i];}
		else{ap+=a[i];bp+=b[i];}
      }
      
      cout<<ap<<" "<<bp<<endl;
    }
    else{break;}
  }
  return 0;
}