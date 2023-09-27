//itp1_topic9_B
#include <iostream>
#include <string>
using namespace std;

int main(){
  string r;
  int i,m,h;
  cin>>r;
  while(r!="-"){
    cin>>m;

    for(i=0;i<m;i++){
         cin>>h;
	 string t1=r.substr(h,(int)r.size());
	 string t2=r.substr(0,h);
	 t1+=t2;
	 r=t1;
	 /* cout<<r<<endl;*/
    }
    cout<<r<<endl;
    cin>>r;
  }

  return 0;
}

