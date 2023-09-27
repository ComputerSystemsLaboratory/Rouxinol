#include<bits/stdc++.h>
using namespace std;

int A[2000000],h;

void maxheapify(int i){
  int l,r,largest;
  l=2*i;
  r=2*i+1;
  if(l<=h && A[l]>A[i]) largest=l;
  else largest=i;
  if(r<=h && A[r]>A[largest]) largest=r;
  if(largest!=i){
    swap(A[i],A[largest]);
    maxheapify(largest);
  }
}

int extractmax(){
  int v;
  if(h<1) return 0;
  v=A[1];
  A[1]=A[h--];
  maxheapify(1);
  return v;
}

void buildmaxheap(){
  for(int i=h/2;i>0;i--){
    maxheapify(i);
  }
}

void insert(int k){
  h++;
  int i=h;
  A[h]=k;
  while(i>1 && A[i/2]<A[i]){
    swap(A[i], A[i/2]);
    i/=2;
  } 
  
}

int main(){
  string s;
  int a;
  while(1){
    cin>>s;
    if(s[0]=='i'){
      cin>>a;
      insert(a);
    }
    else if(s[1]=='x'){
      cout<<extractmax()<<endl;
    }
    else return 0;
  }
}

