#include<iostream>
using namespace std;

typedef struct{
  char mark;
  int number;
}Card;


int main(){
  Card array[52]={};
  bool flags[52]={0};
  int n;
  char Marks[4]={'S','H','C','D'};
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      array[13*i+j].mark=Marks[i];
      array[13*i+j].number=j+1;
    }
  }
  cin>>n;
  for(int i=0;i<n;i++){
    char a;
    int b;
    cin>>a>>b;
    for(int j=0;j<52;j++){
      if(array[j].mark == a && array[j].number == b){
	flags[j] = true;
      }
    }
  }
  for(int i=0;i<52;i++){
    if(flags[i] == false)
      cout<<array[i].mark<<" "<<array[i].number<<endl;
  }
  return 0;
}