#include<iostream>
using namespace std;
int main(){
int e;
while(true){
cin >> e;
if(!e)
break;
int x,y,z;
int ans = e;
for(z=0;z*z*z<=e;z++){for(y=0;y*y+z*z*z<=e;y++){int b=e-(y*y+z*z*z);ans = min(ans,b+y+z);
}
}
cout << ans <<endl;
}
}