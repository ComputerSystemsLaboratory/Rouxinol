#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int a,i;
   vector<int> s;
   for(i=0;i<5;i++){
      cin>>a;
      s.push_back(a);
   }
   sort(s.rbegin(),s.rend());
   
   printf("%d",s[0]);
   for(i=1;i<5;i++){
      printf(" %d",s[i]);
   }
   printf("\n");
   return 0;
}