#include<bits/stdc++.h>
using namespace std;



int main(){

  int n;

  bool p[999999];
  int head;
  int sum;

  while(scanf("%d",&n)!=EOF){

    head = 2;
    sum = 0;

    for(int i=0; i<n; i++){ p[i]=false; }

    while(head<=n){
      
      while(head<=n && p[head-1]==true){ head++; }

      if(!(head>n))sum++;

      for(int i=2; i*head<=n; i++){p[i*head-1]=true;}

      head++;
    }

    cout << sum << endl;
      

  }


  return 0;
}