#include<iostream>
using namespace std;
void Insert(int);
void Increase(int,int);
int Extract(void);
void maxHeapify(int i);
int H[1000000];
int n=0;
int main(){
  int key,n=0;
  char ch[10];

  while(1){
    cin>>ch;
    if(ch[0]=='i'){
      cin>>key;
      Insert(key);
    }
    else if(ch[0]=='e' && ch[1]=='x'){
      cout<<Extract()<<endl;
    }
    else{
      break;
    }
  }
  for(int i=0;i<n;++i){
    cout<< H[i]<<endl;
  }
  return 0;
}

void Insert(int key)
{
  n+=1;
  H[n]=-1;
  Increase(n,key);
}
void Increase(int i,int key)
{
  int tmp;
  H[i]=key;
  while(i>1 &&H[i/2]<H[i]){
    tmp=H[i];
    H[i]=H[i/2];
    H[i/2]=tmp;
    i=i/2;
  }
}

int Extract()
{
  int max=H[1];
  H[1]=H[n];
  n--;
  maxHeapify(1);
  return max;
}
void maxHeapify(int i)
{
  int r,l,largest,tmp;
  l=i*2;
  r=i*2+1;

  if(l<=n&& H[l]>H[i])largest=l;
  else largest=i;

  if(r<=n && H[r]>H[largest])largest=r;

  if(largest!=i){
    tmp=H[i];
    H[i]=H[largest];
    H[largest]=tmp;
  
  maxHeapify(largest);
  }
}