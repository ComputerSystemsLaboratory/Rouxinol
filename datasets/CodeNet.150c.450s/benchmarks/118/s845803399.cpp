//10
#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    int y,m,d;
    cin>>y>>m>>d;
    int e=0;
    while(y!=1000||m!=1||d!=1){
      e++;
      d++;
      if(d>((y%3==0||m%2==1)?20:19)){
	d=1;
	m++;
	if(m>10){
	  m=1;
	  y++;
	}
      }
    }
    cout<<e<<endl;
  }
  return 0;
}
      