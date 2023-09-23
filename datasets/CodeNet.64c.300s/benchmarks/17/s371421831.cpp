#include <iostream>
using namespace std;
int main(){
  int x,y,s,i,j,max,s1,s2,sum,c;
  while(1){
    max=0;
    cin >> x >> y >> s;
    if(x==0&&y==0&&s==0) break;
    /*    for(i=1;i<s;i++){
	  s1=i*(100+x)/100;
	  cout << "s1 " << s1 << endl;
	  cout << "s2 " << s2 << endl;
	  cout << "s1+s2 " << s1+s2 << endl;
      
	  }*/
    for(i=1;i<s;i++){
      s1=i*(100+x)/100;
      for(j=1;j<s;j++){
	s2=j*(100+x)/100;
	if(s1+s2==s){
	  sum=i*(100+y)/100+j*(100+y)/100;
	  if(sum>max) max=sum;  
	}
      }
    }
    cout << max << endl;
  }
  return 0;
}