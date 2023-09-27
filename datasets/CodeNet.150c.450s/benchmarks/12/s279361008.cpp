#include<bits/stdc++.h>
using namespace std;
struct Node{
  int key;
  int id,parent,left,right;
};


Node A[100000];

void heap(Node A[],int H){
  for(int i=1;i<=H;i++){
    if(i==1){
      A[i].left=A[2*i].key;
      A[i].right=A[2*i+1].key;
    }
    else {
      A[i].parent=A[i/2].key;
      A[i].left=A[2*i].key;
      A[i].right=A[2*i+1].key;
    }
  }
}


int main(){
  int H=0;
  cin>>H;
  for(int i=1;i<=H;i++){
    cin>>A[i].key;
    A[i].id=i;
  }
  heap(A,H);
  for(int i=1;i<=H;i++){
    cout<<"node "<<A[i].id<<": key = "<<A[i].key<<", ";
    if(i==1){
      cout<<"left key = "<<A[i].left<<", right key = "<<A[i].right<<", "<<endl;
    }
    else{
      if(A[i].left==0&&A[i].right!=0){
	cout<<"parent key = "<<A[i].parent<<", right key = "<<A[i].right<<", "<<endl;
      }
      else if(A[i].left!=0&&A[i].right==0){
	cout<<"parent key = "<<A[i].parent<<", left key = "<<A[i].left<<", "<<endl;
      }
      else if(A[i].left==0&&A[i].right==0){
	cout<<"parent key = "<<A[i].parent<<", "<<endl;
      }
      else {
	cout<<"parent key = "<<A[i].parent<<", left key = "<<A[i].left<<", right key = "<<A[i].right<<", "<<endl;
      }
    }
  }
  return 0;
}

