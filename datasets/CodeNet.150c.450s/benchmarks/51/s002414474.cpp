/*30人の受講生がいて各受講生には1番から30番までの出席番号がふられている．この授業の課題を28人の学生が提出した．
提出した28人の出席番号から提出していない2人の出席番号を求めるプログラムを作成せよ.*/
#include<iostream>
using namespace std;
int main(){
    int a[31];
    for(int i=1;i<31;i++){
       a[i]=i;
    }
    for(int i=0;i<31;i++){
       int s;
       cin>>s;
       for(int j=1;j<31;j++){
          if(a[j]==s){
            a[j]=0;
          }
       }
    }
    for(int i=1;i<31;i++){
       if(a[i]==0){}
       else{
         cout<<a[i]<<endl;
       }
    }
}
