#include <iostream>
using namespace std;
int main(){
int x,y,s;
while(cin >> x >> y >> s && x){
int ans=0;
for(int i=1;i<s;i++){
for(int j=1;j<s;j++){
if(i*(100+x)/100+j*(100+x)/100==s){
if(i*(100+y)/100+j*(100+y)/100>ans){
ans=i*(100+y)/100+j*(100+y)/100;
}
}
}
}
cout << ans << endl;
}
}