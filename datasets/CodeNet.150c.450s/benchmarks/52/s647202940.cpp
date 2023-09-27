#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int a[10],u,count=0;
  while(cin >> u ){
    if(u!=0){
      a[count]=u;
      count++;
    }
    else {
      cout << a[count-1]<<endl;
      count--;
    }
  }
}

