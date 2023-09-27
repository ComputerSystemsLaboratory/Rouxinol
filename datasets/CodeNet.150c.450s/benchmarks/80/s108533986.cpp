#include<iostream>
using namespace std;

int main(){
  int Ainfo,Amath,Ascience,Aenglish,Binfo,Bmath,Bscience,Benglish;
  cin >> Ainfo >> Amath >> Ascience >> Aenglish;
  cin >> Binfo >> Bmath >> Bscience >> Benglish;
  int totalA=0,totalB=0;
  totalA = Ainfo + Amath + Ascience + Aenglish;
  totalB = Binfo + Bmath + Bscience + Benglish;

  if(totalA < totalB){
    cout << totalB << endl;
  }else if(totalB < totalA){
    cout << totalA << endl;
  }else if(totalA == totalB){
    cout << totalA << endl;
  }
  
  return 0;
}