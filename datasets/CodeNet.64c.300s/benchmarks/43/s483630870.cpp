#include<iostream>

using namespace std;

int main(){
  int a=0;
  int temp;
  for(int i=0;i<4;i++){
    cin >> temp;
    a+=temp;
  }
  //int b=0;
  int ab=a;
  for(int i=0;i<4;i++){
    cin >> temp;
    ab-=temp;
  }
  if(ab<0){
    cout <<(a-ab)<<endl;
  }else{
      cout << a<< endl;
    }
}