#include<iostream>
#include<string>
using namespace std;
int c1,c2;
void updo(string);
int main(){
  int n;
  string x;
  while(1){
    //
    c1=0;//0=down;1=lu;2=ld;3=ru;4=rd;5=up;
    c2=0;
    //in
    cin >> n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin >> x;
      updo(x);
    }
    cout << c2 << endl;
  }
  return 0;
}
void updo(string x){
  if(c1==0){
    if(x=="lu")c1=1;
    else if(x=="ru")c1=3;
  }
  else if(c1==1){
    if(x=="ru"){
      c2++;
      c1=5;
    }
    else if(x=="ld")c1=0;
  }
  else if(c1==2){
    if(x=="rd"){
      c2++;
      c1=0;
    }
    else if(x=="lu")c1=5;
  }
  else if(c1==3){
    if(x=="lu"){
      c2++;
      c1=5;
    }
    if(x=="rd")c1=0;
  }
  else if(c1==4){
    if(x=="ld"){
      c2++;
      c1=0;
    }
    if(x=="ru")c1=5;
  }
  else if(c1==5){
    if(x=="ld")c1=2;
    else if(x=="rd")c1=4;
  }
}
      
    