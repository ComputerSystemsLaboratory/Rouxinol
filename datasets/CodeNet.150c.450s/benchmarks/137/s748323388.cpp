#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;

#define L 1000003


string A[L];

int num(char s){
  if(s=='A') return 1;
  else if(s=='C') return 2;
  else if(s=='G') return 3;
  else if(s=='T') return 4;
}

long long key(string s){
  long long sum=0;
  int k=1;
  for(int i=0;i<strlen(&s[0]);i++){
    sum+=num(s[i])*k;
    k*=5;
  }
  return sum;
}

int hash1(int x){
  return x%L;
}

int hash2(int x){
  return 1+x%(L-1);
}

void insert(string s){
  long long k=key(s);
  int h1,h2;
  h1=hash1(k); h2=hash2(k);
  for(int i=0;;i++){
    int h=(h1+i*h2)%L;
    if(A[h][0]=='\0'){ 
      A[h]=s; break;
    }
    else if(A[h]==s) break;
  }
}

void find(string s){
  long long k=key(s);
  int h1,h2;
  h1=hash1(k); h2=hash2(k);
  for(int i=0;;i++){
    int h=(h1+i*h2)%L;
    if(A[h][0]=='\0'){
      cout<<"no"<<endl; return;
    }
    if(A[h]==s){
      cout<<"yes"<<endl;
      return;
    }
  }
}


int main(){
  for(int i=0;i<L;i++){
    A[i]='\0';
  }
  string com,s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>com>>s;
    if(com[0]=='i'){
      insert(s);
    }else{
      find(s);
    }
  }
  return 0;
}

