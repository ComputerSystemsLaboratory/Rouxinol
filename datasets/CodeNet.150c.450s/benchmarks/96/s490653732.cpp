#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main(){
  char m[9][5]={{'.',',','!','?',' '},
		{'a','b','c','1','1'},
		{'d','e','f','1','1'},
		{'g','h','i','1','1'},
		{'j','k','l','1','1'},
		{'m','n','o','1','1'},
		{'p','q','r','s','1'},
		{'t','u','v','1','1'},
		{'w','x','y','z','1'}};
  int a,count=0,c,d;
  char b[1025];
  cin>>a;
  for(int i=0;i<a;i++){
    scanf("%s",b);
    c=strlen(b);
    for(int j=0;j<c;j++){
      if(b[j]!='0')count++;
      else
	if(b[j-1]!=0 && count){
	  d=b[j-1]-'0';
	  if(d==1)
	    cout<<m[d-1][(count-1)%5];
	  else if(d==7 || d==9)
	    cout<<m[d-1][(count-1)%4];
	  else
	    cout<<m[d-1][(count-1)%3];
	  count=0;
	}
    }
    cout<<endl;
  }
  return 0;
}