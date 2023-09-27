#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
  string F[N];
  string BK[N];
  string BN[N];
  string SK[N];
  string SN[N];
  for(int i=0;i<N;i++){
    cin >> F[i];
    BK[i] = F[i].at(0);
    SK[i] = F[i].at(0);
    BN[i] = F[i].at(1);
    SN[i] = F[i].at(1);
  }
  for(int i=0;i<N;i++){
    for(int j=N-1;j>0;j--){
      if(BN[j]<BN[j-1]){
        swap(BN[j],BN[j-1]);
        swap(BK[j],BK[j-1]);
      }
    }
  }
  for(int i=0;i<N;i++){
    if(i<N-1){
    cout << BK[i] << BN[i] << " ";
    }
    else if(i==N-1){
      cout << BK[i] << BN[i] << endl << "Stable" << endl;
    }
  }
  for(int i=0;i<N-1;i++){
    int min=i;
    for(int j=i;j<N;j++){
      if(SN[j]<SN[min]){
        min =j;
      }
    }    
    swap(SN[i],SN[min]);
    swap(SK[i],SK[min]);
  }
  for(int i=0;i<N;i++){
    if(i<N-1){
      cout << SK[i] << SN[i] << " ";
    }
    else if(i==N-1){
      cout << SK[i] << SN[i] << endl;
    }
  }
  for(int i=0;i<N;i++){
    if(BK[i]!=SK[i]){
      cout << "Not stable" << endl;
      break;
    }
    if(i==N-1){
      cout << "Stable" << endl;
    }
  }
}  
