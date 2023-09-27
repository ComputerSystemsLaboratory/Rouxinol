#include <cstdio>
#include <iostream>
using namespace std;
int cnt;
struct Card{char suit,v;};
void selection_sort(Card *C,int N){
  for(int i=0;i<N;i++){
    int minj=i;
    for(int j=i;j<N;j++){
      if(C[j].v<C[minj].v)minj=j;
    }
    Card t;
    t=C[i];
    C[i]=C[minj];
    C[minj]=t;
    
   
  }
}
void bubble_sort(Card *C,int N){
  bool f=true;
  while(f){
    f=false;
    for(int j=N-1;j>=1;j--){
      if(C[j].v<C[j-1].v){
	Card t=C[j];
	C[j]=C[j-1];
	C[j-1]=t;
	f=true;
      }
    }
  }
}
void print_(Card *C,int N){
  for(int i=0;i<N;i++){
    cout << C[i].suit << C[i].v;
    if(i!=N-1)printf(" ");
  }
  cout << endl;
}
int main(){
  int N;
  Card C[101],C2[101];
  cin >> N;
  for(int i=0;i<N;i++){cin >> C[i].suit >> C[i].v; C2[i]=C[i];}
 
  bubble_sort(C,N);
  print_(C,N);
  cout << "Stable" << endl;
  selection_sort(C2,N);
  print_(C2,N);
  bool equal=true;
  for(int i=0;i<N;i++){
    if(C[i].suit!=C2[i].suit)equal=false;
  }
  if(equal)cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  return 0;
}