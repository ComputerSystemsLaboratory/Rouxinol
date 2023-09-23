#include<iostream>
#include<algorithm>
#define N 2

using namespace std;
void output_array_int(int*,int,char);
void input_array_int(int*,int);

////////////////////////////////////////////////////////////////////////////////

int main(){
  int a,b,c,i,s;
  s=0;
  cin>>a>>b>>c;
  for(i=a;i<=b;i++){
    if(c%i==0){
      s++;
    }
  }

  cout<<s<<endl;

  return 0;
}

////////////////////////////////////////////////////////////////////////////////

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