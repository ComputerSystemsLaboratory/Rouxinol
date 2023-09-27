#include <iostream>
#include <string>
using namespace std;
int main(){
  int n,i,j,len,s1cal,s2cal,cal,m,c,x,ii;
  string s1,s2;
  cin >> n;
  for(i=0;i<n;i++){
    s1cal=0;
    cin >> s1;
    len=s1.size();
    for(j=0;j<len;j++){
      if(s1[j]=='m'){
	if(j-1!=-1&&'2'<=s1[j-1]&&s1[j-1]<='9') s1cal=s1cal+1000*(s1[j-1]-'0');
	else s1cal=s1cal+1000;
      }
      else if(s1[j]=='c'){
	if(j-1!=-1&&'2'<=s1[j-1]&&s1[j-1]<='9') s1cal=s1cal+100*(s1[j-1]-'0');
	else s1cal=s1cal+100;
      }
      else if(s1[j]=='x'){
	if(j-1!=-1&&'2'<=s1[j-1]&&s1[j-1]<='9') s1cal=s1cal+10*(s1[j-1]-'0');
	else s1cal=s1cal+10;
      }
      else if(s1[j]=='i'){
	if(j-1!=-1&&'2'<=s1[j-1]&&s1[j-1]<='9'){
	  s1cal=s1cal+(s1[j-1]-'0');
	}
	else s1cal=s1cal+1;
      }
    }
    s2cal=0;
    cin >> s2;
    len=s2.size();
    for(j=0;j<len;j++){
      if(s2[j]=='m'){
	if(j-1!=-1&&'2'<=s2[j-1]&&s2[j-1]<='9') s2cal=s2cal+1000*(s2[j-1]-'0');
	else s2cal=s2cal+1000;
      }
      else if(s2[j]=='c'){
	if(j-1!=-1&&'2'<=s2[j-1]&&s2[j-1]<='9') s2cal=s2cal+100*(s2[j-1]-'0');
	else s2cal=s2cal+100;
      }
      else if(s2[j]=='x'){
	if(j-1!=-1&&'2'<=s2[j-1]&&s2[j-1]<='9') s2cal=s2cal+10*(s2[j-1]-'0');
	else s2cal=s2cal+10;
      }
      else if(s2[j]=='i'){
	if(j-1!=-1&&'2'<=s2[j-1]&&s2[j-1]<='9') s2cal=s2cal+(s2[j-1]-'0');
	else{
	  s2cal=s2cal+1;
	}
      }
    }
    cal=s1cal+s2cal;
    m=0;
    c=0;
    x=0;
    ii=0;
    if(cal/1000>0){
      ii=cal%10;
      cal=cal/10;
      x=cal%10;
      cal=cal/10;
      c=cal%10;
      cal=cal/10;
      m=cal%10;      
    }
    else if(cal/100>0){
      ii=cal%10;
      cal=cal/10;
      x=cal%10;
      cal=cal/10;
      c=cal%10;
    }
    else if(cal/10>0){
      ii=cal%10;
      cal=cal/10;
      x=cal%10;
    }
    else ii=cal;
    if(m!=0){
      if(m!=1) cout << m << 'm';
      else cout << 'm';
    }
    if(c!=0){
      if(c!=1) cout << c << 'c';
      else cout << 'c';
    }
    if(x!=0){
      if(x!=1) cout << x << 'x';
      else cout << 'x';      
    }
    if(ii!=0){
      if(ii!=1) cout << ii << 'i';
      else cout << 'i';
    }
    cout << endl;
  }
  return 0;
}