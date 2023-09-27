#include<bits/stdc++.h>
using namespace std;

int search(int [],int,int);

int main()
{
  int key,n,q,sum=0,A[100000];

  cin>>n;
  for(int i=0;i<n;i++) cin>>A[i];
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>key;
    if(search(A,n,key)) sum++;
  }
  cout<<sum<<endl;
}

int search(int A[],int n,int key)
{
  int i=0;
  A[n]=key;
  while(A[i]!=key) i++;
  return i!=n;
}

