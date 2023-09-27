#include<iostream>
#include<string>
using namespace std;

void print(string cards[40],int size){
  cout<<cards[0];
  for(int i=1;i<size;i++){
    cout<<" "<<cards[i];
  }
  cout<<endl;
}

bool check(string collect[40],string cards[40],int size){
  for(int i=0;i<size;i++){
    if(collect[i]!=cards[i]) return false;
  }
  return true;
}

int main(){
  int n;
  cin>>n;
  string cards1[40];
  string cards2[40];
  string cards3[40];

  for(int i=0;i<n;i++){
    cin>>cards1[i];
    cards3[i]=cards2[i]=cards1[i];
  }

  //bubble
  for(int i=0;i<n;i++){
    for(int j=n-1;j>=i;j--){
      if(cards2[j][1] < cards2[j-1][1]){
	swap(cards2[j],cards2[j-1]);
      }
    }
  }

  print(cards2,n);
  cout<<"Stable"<<endl;

  //selection
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(cards3[j][1] < cards3[minj][1]){
	minj=j;
      }
    }
    swap(cards3[i],cards3[minj]);
  }

  print(cards3,n);
  if(check(cards2,cards3,n))
    cout<<"Stable"<<endl;
  else 
    cout<<"Not stable"<<endl;
  //check

  return 0;
}