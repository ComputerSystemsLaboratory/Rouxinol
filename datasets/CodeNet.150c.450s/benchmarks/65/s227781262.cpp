#include <bits/stdc++.h>
using namespace std;

struct Card{
  int value;
  char suit;
};

int main(){
  Card c1[37],c2[37];
  int N,cnt=0,mini=99999999;
  
  cin >> N;
  
  for(int i = 0; i < N; i++){
    cin >> c1[i].suit >> c1[i].value;
    c2[i].suit = c1[i].suit;
    c2[i].value = c1[i].value;
  }
  
  for(int i = 0; i < N; i++){
    for(int j = N-1; j > i; j--){
      if(c1[j].value < c1[j-1].value) 
	swap(c1[j],c1[j-1]);
    }
  }

  for(int i = 0; i < N; i++){
    cout << c1[i].suit << c1[i].value;
    if(i != N-1) cout << " ";
    else cout << endl;
  }
  cout << "Stable" << endl;
  
  
 /* for(int i = 0; i < N; i++){
    cout << c2[i].suit << c2[i].value;
    }
    cout << endl;*/
  
  
  
  
 for(int i = 0; i < N; i++){
   mini = i;
   for(int j = i; j < N; j++){
     if(c2[j].value < c2[mini].value) 	mini = j;
   }
   swap(c2[i],c2[mini]);
 }

 for(int i = 0; i < N; i++){
   cout << c2[i].suit << c2[i].value;
   if(i != N-1) cout << " ";
   else cout << endl;
 }
 
 for(int i = 0; i < N; i++){
   if(c2[i].suit != c1[i].suit || c2[i].value != c1[i].value) cnt++;
 }

 if(cnt == 0) cout << "Stable" << endl;
 else cout << "Not stable" << endl;
 
 
 
 return 0;
}