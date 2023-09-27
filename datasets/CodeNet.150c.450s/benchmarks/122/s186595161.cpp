#include<bits/stdc++.h>
using namespace std;
int h,t[2000001];
void maxHeapify(int i){
  int l = i*2,r = i*2+1,largest;
  if (l<=h&&t[l]>t[i])
    largest=l;
  else 
    largest = i;
  if(r<=h&&t[r]>t[largest])
    largest=r;
  if(largest!=i)
    swap(t[i],t[largest]),maxHeapify(largest);
}

int main(){
  string s;
  int a;
  t[0]=2100000000;
  while(cin>>s&&s[2]!='d'){
    if(s[0]=='i'){
      cin>>a;
      h++;
      int i=h;
      t[h]=a;
      while(t[i/2]<t[i])swap(t[i/2],t[i]),i/=2;
      }
    else {
      cout<<t[1]<<endl;
      t[1]=t[h];
      h--;
      maxHeapify(1);
    }
  }
  return 0;
}