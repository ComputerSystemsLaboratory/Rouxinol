#include <iostream>
using namespace std;
bool debug=false;

int main(){
  int x,y,s;
  while(1){
    cin>>x>>y>>s;
    if(x==0&&y==0&&s==0)break;
    int before=100*s/(100+x)+1;
    if(debug)cout<<"before: "<<before<<endl;
    int ans=-1;
    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
	if(i*(100+x)/100+j*(100+x)/100==s){
	  ans=max(ans,i*(100+y)/100+j*(100+y)/100);
	}
	if(debug)cout<<i*(100+y)/100+j*(100+y)/100<<endl;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}