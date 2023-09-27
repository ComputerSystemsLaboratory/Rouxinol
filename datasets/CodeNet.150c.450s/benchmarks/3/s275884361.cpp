#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){

  string str1,str2,p;
  int q;
  int a,b;
  char t;
  int i,j,k;

  cin >>str1;
  cin >>q;

  for(j=0;j<q;j++){
    cin >>str2;
  
    if(str2=="replace"){
      cin >>a >>b >>p;
      k=0;
      for(i=a;i<=b;i++){
	str1[i]=p[k];
	k++;
      }
    }

    if(str2=="reverse"){
      cin >>a >>b;
      for(i=a;i<=b;i++,a++,b--){
	t=str1[i];
	str1[a]=str1[b];
	str1[b]=t;
      }
    }

    if(str2=="print"){
      cin >>a >>b;
      for(i=a;i<=b;i++){
      cout <<str1[i];
      }
      cout <<endl;
    }
  }
  return 0;
}