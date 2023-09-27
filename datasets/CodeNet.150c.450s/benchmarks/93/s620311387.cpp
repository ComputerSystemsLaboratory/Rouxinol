
#include<iostream>
#include<string>
using namespace std;

int partition(int* A,string* S,int p,int r){
  int  x=A[r];
  int  i=p-1;
  for(int j=p;j<=r-1;j++){
     if(A[j]<=x){
	i=i+1;
	int tmp1=A[j];string tmp2=S[j];
	A[j]=A[i];S[j]=S[i];
	A[i]=tmp1;S[i]=tmp2;
      }
   }
  int tmp1=A[i+1];string tmp2=S[i+1];
  A[i+1]=A[r];S[i+1]=S[r];
  A[r]=tmp1;S[r]=tmp2;
  return i+1;
}

void quicksort(int* A,string* S,int p,int r){
  if(p<r){
    int q=partition(A,S,p,r);
    quicksort(A,S,p,q-1);
    quicksort(A,S,q+1,r);
  }
}

int buffer_i[100001];string buffer_s[100001];
void mergesort(int n,int* A,string* S){
  if(n<=1)return;
  int mid=n/2;
  mergesort(mid,A,S);
  mergesort(n-mid,A+mid,S+mid);

  for(int i=0;i<mid;i++){
    buffer_i[i]=A[i];buffer_s[i]=S[i];
  }
  int j=mid;
  int i=0;int k=0;

  while(i<mid&&j<n){
    if(buffer_i[i]<=A[j]){
      A[k]=buffer_i[i];
      S[k++]=buffer_s[i++];
    }
    else{
      A[k]=A[j];
      S[k++]=S[j++];
    }
  }
  while(i<mid){
    A[k]=buffer_i[i];
    S[k++]=buffer_s[i++];
  }
}

int main(){
  int n;
  cin>>n;
  int card_num1[n];string card_str1[n];
  int card_num2[n];string card_str2[n];
  for(int i=0;i<n;i++)cin>>card_str1[i]>>card_num1[i];
  for(int i=0;i<n;i++){
    card_num2[i]=card_num1[i];
    card_str2[i]=card_str1[i];
  }

  quicksort(card_num1,card_str1,0,n-1);
  mergesort(n,card_num2,card_str2);

  bool stable=true;
  for(int i=0;i<n;i++)if(card_str1[i]!=card_str2[i])stable=false;
  if(stable)cout<<"Stable";
  else cout<<"Not stable";
  cout<<endl;
  for(int i=0;i<n;i++)cout<<card_str1[i]<<' '<<card_num1[i]<<endl;
}

