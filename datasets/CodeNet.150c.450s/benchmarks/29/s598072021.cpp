#include<bits/stdc++.h>
using namespace std;

int main(){
  std::ios::sync_with_stdio(false);
  list<unsigned long long> dat(0);
  list<unsigned long long>::iterator t=dat.begin();
  string com;
  int n,a;

  cin>>n;
  
  for(int i=0; i<n; i++){
    cin >> com;

    if(com=="insert"){
      cin >> a;
      dat.push_front(a);
    }
    else if(com=="delete"){
      cin >> a;
      t = dat.begin();
      while(t!=dat.end() && *t!=(unsigned long long)a){
	t++;
      }
      if(*t==(unsigned long long)a)
	dat.erase(t);
    }
    else if(com=="deleteFirst"){
      dat.pop_front();
    }
    else{
      dat.pop_back();
    }
  }
  
  t=dat.begin();
  printf("%Ld",*t++);
  while(t!=dat.end()){
    printf(" %Ld", *t++);
  }
  printf("\n");


  return 0;
}