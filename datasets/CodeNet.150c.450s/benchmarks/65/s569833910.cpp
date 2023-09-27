#include<bits/stdc++.h>
using namespace std;

typedef struct{
  char mark;
  int num;
}Elem;

int main(){
  int n;

  Elem bubble[37],select[37];
  
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>bubble[i].mark>>bubble[i].num;
    select[i].mark=bubble[i].mark;
    select[i].num=bubble[i].num;
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(bubble[j].num>bubble[j+1].num){
	Elem temp=bubble[j];
	bubble[j]=bubble[j+1];
	bubble[j+1]=temp;
      }
    }
  }
  for(int i=0;i<n-1;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(select[j].num<select[minj].num){
	minj=j;
      }
    }
    Elem temp=select[i];
    select[i]=select[minj];
    select[minj]=temp;
  }
  int flag =0;
  for(int i=0;i<n;i++){
    if(bubble[i].mark != select[i].mark){
      flag=1;
      break;
    }
  }
  for(int i=0;i<n;i++){
    cout<<bubble[i].mark<<bubble[i].num;
    if(i==n-1)cout<<endl;
    else cout<<" ";
  }
  cout<<"Stable"<<endl;
  for(int i=0;i<n;i++){
    cout<<select[i].mark<<select[i].num;
    if(i==n-1)cout<<endl;
    else cout<<" ";
  }
  if(flag)cout<<"Not stable"<<endl;
  else cout<<"Stable"<<endl;
}