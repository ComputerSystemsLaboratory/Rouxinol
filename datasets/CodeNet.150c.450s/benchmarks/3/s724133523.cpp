#include <bits/stdc++.h>
using namespace std;

int main(){
  string a,b,c,d,e;
  int f,g,h,i,j;
  cin>>a>>f;
  for(int k=0;k<f;k++){
    cin>>b>>g>>h;
    if(b=="print"){
      cout <<a.substr(g,h-g+1)<<endl;
    }else if(b=="reverse"){
      c=a.substr(g,h-g+1);
	e=c;
	for(int q=0;q<h-g+1;q++){
		c[q]=e[e.length()-q-1];}
      for(int l=g;l<=h;l++){
	a[l]=c[l-g];
      }
    }else if(b=="replace"){
      cin>>d;
      i=g;
      for(int l=g;l<=h;l++){
	a[l]=d[l-i];
      }
    }
   }
  return 0;
}