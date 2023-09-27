#include <iostream>
#include <algorithm>
using namespace std;

struct Card{
  char Illust;
  int Num;
};

void Disp(Card *c,int n){
  for(int i = 0;i < n-1;i++){
    cout << c[i].Illust << c[i].Num << " ";
  }cout << c[n-1].Illust << c[n-1].Num << endl;
}

bool isStable(Card *c1,Card *c2,int n){
  for(int i = 0;i < n;i++){
    if(c1[i].Illust != c2[i].Illust){
      return false;
    }
  }
  return true;
}

void BubbleSort(Card *c,int n){
  for(int i = 0;i < n;i++){
    for(int j = n-1;j > i;j--){
      if(c[j].Num < c[j-1].Num){
        swap(c[j].Num,c[j-1].Num);
        swap(c[j].Illust,c[j-1].Illust);
      }
    }
  }
}

void SelectionSort(Card *c,int n){
  int minv;
  for(int i = 0;i < n-1;i++){
    minv = i;
    for(int j = i;j < n;j++){
      if(c[j].Num < c[minv].Num){
        minv = j;
      }
    }
    swap(c[i].Num,c[minv].Num);
    swap(c[i].Illust,c[minv].Illust);
  }
}


int main(){
  int n;
  Card c_1[101],c_2[101];
  cin >> n;
  
  for(int i = 0;i < n;i++){
    cin >> c_1[i].Illust >> c_1[i].Num;
    c_2[i] = c_1[i];
  }
  
  BubbleSort(c_1,n);
  SelectionSort(c_2,n);
  Disp(c_1,n);
  cout << "Stable" << endl;
  Disp(c_2,n);
  if(isStable(c_1,c_2,n)){
    cout << "Stable" << endl;
  }else{
    cout << "Not stable" << endl;
  }
  
  return 0;
}