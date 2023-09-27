#include<iostream>
#include<algorithm>
#define N 5

using namespace std;
void output_array_int(int*,int,char);
void input_array_int(int*,int);

int main(){
  int W,H,x,y,r;

  cin>>W>>H>>x>>y>>r;

  if(W>=x+r&&x-r>=0&&H>=y+r&&y-r>=0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

  return 0;
}

void output_array_int(int * a,int n,char ch){
  int i;

  for(i=0;i<n;i++){
    cout<<*(a+i);
    if(i<(n-1)){
      cout<<ch;
    }
  }

  cout<<endl;

  return;
}

void input_array_int(int *a,int n){
  int i;

  for(i=0;i<n;i++){
    cin>>*(a+i);
  }
}