#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
#define MAX_N 100000000
#define MAX 
using namespace std;
bool debug=false;

pair<char,int> p[40];

bool check(pair<char,int>pai[],int n){
  for(int i=0;i<n-1;i++){
    bool flag=false;
    for(int j=i+1;j<n;j++){
      if(pai[i].second==pai[j].second){
	//check
	for(int k=0;i<n;k++){
	  if(pai[i].first==p[k].first&&pai[i].second==p[k].second){
	    flag=true;
	    break;
	  }else if(pai[j].first==p[k].first&&pai[j].second==p[k].second) return false;
	}
      }else{
	break;
      }
      if(flag)break;
    }
  }
  return true;
}

void BubbleSort(pair<char,int>pai[],int n){
  for(int i=1;i<n;i++){
    for(int j=n-1;j>=i;j--){
      if(pai[j].second<pai[j-1].second)swap(pai[j],pai[j-1]);
    }
  }
  rep(i,0,n){
    cout<<pai[i].first<<pai[i].second;
    if(i==n-1) cout<<endl;
    else cout<<" ";
  }
  if(check(pai,n))cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
}

void SelectionSort(pair<char,int>pai[],int n){
  for(int i=0;i<n;i++){
    int mini=i;
    for(int j=i;j<n;j++){
      if(pai[mini].second>pai[j].second)mini=j;
    }
    swap(pai[i],pai[mini]);
  }
    rep(i,0,n){
    cout<<pai[i].first<<pai[i].second;
    if(i==n-1) cout<<endl;
    else cout<<" ";
  }
  if(check(pai,n))cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;
}

int main(){
  int n;
  pair<char,int> pai[40];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>pai[i].first>>pai[i].second;
    p[i].first=pai[i].first;
    p[i].second=pai[i].second;
  }
  
  BubbleSort(pai,n);
  
  for(int i=0;i<n;i++){
    pai[i].first=p[i].first;
    pai[i].second=p[i].second;
  }
  
  SelectionSort(pai,n);
  return 0;
}