#include<iostream>
using namespace std;
#define NUM 10
int main(){
  int n;
  int ball[NUM];
  int b[NUM];
  cin>>n;
  for(int c=0;c<n;c++){
    for(int i=0;i<NUM;i++){
      cin>>ball[i];
      b[i]=-1;
    }
    int x=0;
    for(int j=0;j<NUM-1;j++){
      int t=ball[j];
      while(j<NUM-1 && t>=ball[j+1]){
	b[x]=ball[j+1];
	x++;
	j++;
      }
    }
    int f=true;
    for(int j=1;j<NUM && b[j]>0;j++){
      if(b[j]<=b[j-1]){
        f=false;
	break;
      }
    }
    if(f)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}