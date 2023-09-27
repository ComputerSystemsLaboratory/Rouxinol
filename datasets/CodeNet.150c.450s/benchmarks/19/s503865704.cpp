#include <iostream>
using namespace std;
int main(){
int x,y;
while(cin>>x>>y,!(x==y&&y==0))cout<<(x<y?x:y)<<" "<<(x<y?y:x)<<endl;
return 0;
}