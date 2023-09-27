#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

typedef long long ll;
#define INF 2139062143

void heap(int);

int arr[500001];
int n;

int main(int argc,char* argv[]){
  memset(arr,127,sizeof(arr));

  //input
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>arr[i];

  //calc
  for(int i=n/2;i>0;i--)
    heap(i);

  //output
  for(int i=1;i<=n;i++)
    cout<<" "<<arr[i];
  cout<<endl;

  return 0;
}

void heap(int nd){
  int lft=nd*2, rht=nd*2+1,largest=nd;

  if(lft<=n && arr[largest]<arr[lft])
    largest=lft;
  if(rht<=n && arr[largest]<arr[rht])
    largest=rht;

  if(largest!=nd){
    swap(arr[nd],arr[largest]);
    heap(largest);
  }
}