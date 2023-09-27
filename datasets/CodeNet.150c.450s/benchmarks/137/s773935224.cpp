#include<iostream>
#define m 1000003
using namespace std;

int T[m];

int h(int k,int i){
  return  (k%m+i*(1+k%(m-1)))%m;
}

int  insert(int k){
  int i=0;
  while(1){
    int j=h(k,i);
    if(j<m && T[j]==0 ){ T[j]=k;return j;}
    else i++;
  }
}

int find(int k){
  int i=0;
  while(1){
    int j=h(k,i);
    if(j<m && T[j]==k) return 1;
    else if((j<m && T[j]==0) || i>=m) return 0;
    else i++;
  }
}


int change(string str1){
  int k=0;
  for(int i=str1.size();i>=0;i--){
    if(str1[i]=='A') k+=1;
    else if(str1[i]=='C') k+=2;
    else if(str1[i]=='G') k+=3;
    else if(str1[i]=='T') k+=4;
    if(i>0) k*=5;
  }
  return k;
}

int main(){
  int n,k,f;
  string str,str1;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str>>str1;
    k=change(str1);
    if(str[0]=='i') insert(k);
    else{
      f=find(k);
      if(f==1) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
  }
  return 0;
}