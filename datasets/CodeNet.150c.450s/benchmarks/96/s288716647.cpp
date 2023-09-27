#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  string s;
  int n;
  char in;
  int num=0 , count=0;

  cin >> n;
  getchar();

  for(int i=0; i<n; i++){

    s = "";
    
    while(scanf("%c",&in)){
      if(in == '\n' ){ break; }

      else if(in == '0'){
 
	  if(num==2)
	    s += 'a'+(count-1)%3;
	  else if(num==3)
	    s += 'd'+(count-1)%3;
	  else if(num==4)
	    s += 'g'+(count-1)%3;
	  else if(num==5)
	    s += 'j'+(count-1)%3;
	  else if(num==6)
	    s += 'm'+(count-1)%3;
	  else if(num==7)
	    s += 'p'+(count-1)%4;
	  else if(num==8)
	    s += 't'+(count-1)%3;
	  else if(num==9)
	    s += 'w'+(count-1)%4;
	  else if(num==1){
	    switch((count-1)%5){
	    case 0: s+='.'; break;
	    case 1: s+=','; break;
	    case 2: s+='!'; break;
	    case 3: s+='?'; break;
	    default: s+=' ';
	    }
	  }

	  num = 0;
	  count = 0;

      }
      //kakutei

      else{
	if(in-'0' == num)
	  count ++;
	else{
	  num = in-'0';
	  count = 1;
	}
      }
    }
    //while

    cout << s << endl;

  }
	    
  return 0;
}