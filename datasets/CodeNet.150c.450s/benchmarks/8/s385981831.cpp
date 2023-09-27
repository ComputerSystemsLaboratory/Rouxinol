#include<iostream>
#include<string>
using namespace std;
int main(void){
  int n,i;
  cin >> n;
  string s1,s2;
  int taro = 0, hanako = 0;
  for(i = 0; i < n; i++){
    cin >> s1 >> s2;
    if(s1.compare(s2)==0) {
      taro++;hanako++;
    }
    else if(s1.compare(s2)>0){
        taro+=3;
    }
    else{
    hanako+=3;
    }
  }
  cout << taro << " " << hanako << endl;
}
