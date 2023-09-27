#include<bits/stdc++.h>
#include<iostream>
int INF=1001001001;

int mini(int x,int y){
  if(x<y){
    return x;
  }else{
    return y;
  }
}

int main(){
  std::string str1,str2;
  int A[1001][1001];
  std::cin>>str1;
  std::cin>>str2;
  for(int i=0;i<=str1.size();i++){
    for(int j=0;j<=str2.size();j++){
      A[i][j]=INF;
    }
  }
 
  for(int i=0;i<=str1.size();i++) A[i][0]=i;
  for(int i=0;i<=str2.size();i++) A[0][i]=i;
 
  for(int i=0;i<str1.size();i++){
    for(int j=0;j<str2.size();j++){
      A[i+1][j+1]=mini(A[i][j],mini(A[i+1][j],A[i][j+1]))+1;
 
      if(str1[i]==str2[j]) A[i+1][j+1]=mini(A[i+1][j+1],A[i][j]);
 
    }
  }
 
  std::cout<<A[str1.size()][str2.size()]<<"\n";
  return 0;
}

