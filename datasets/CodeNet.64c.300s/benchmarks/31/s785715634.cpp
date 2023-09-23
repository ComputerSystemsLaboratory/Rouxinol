#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int stu[28],cou=1,ans[2]={0},cou_ans=0;
  for(int i=0;i<28;i++){
    cin >> stu[i];
  }
  sort(stu,stu+28);
  for(int i=0;i<28;i++){
    if(stu[i] == cou){
      cou++;
    }
    else{
      cout << cou << endl;
      cou++;
      i -= 1;
    }
    if(i==27 && stu[i] == 29){
      cout << "30" << endl;
    }
  }
}
      