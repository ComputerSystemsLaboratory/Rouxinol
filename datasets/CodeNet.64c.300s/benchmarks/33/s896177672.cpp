#include<iostream>
#include<algorithm>
#define N 2

using namespace std;
void output_array_int(int*,int,char);
void input_array_int(int*,int);

////////////////////////////////////////////////////////////////////////////////

int main(){
  int a,b;
  char op;

  for(;;){
    cin>>a>>op>>b;
    if(op=='?'){
      break;
    }
    switch (op) {
      case '+':
      cout<<a+b<<endl;
      break;

      case '*':
      cout<<a*b<<endl;
      break;

      case '-':
      cout<<a-b<<endl;
      break;

      case '/':
      cout<<a/b<<endl;
      break;
    }
  }

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