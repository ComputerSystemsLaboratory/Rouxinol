#include<bits/stdc++.h>

using namespace std;


int main(){

int e,m;

while(cin>>e,e){

int min=100000;

for(int y=0;y*y<=e;y++){
for(int z=0;z*z*z+y*y<=e;z++){
int x=e-y*y-z*z*z;

if(x>=0&&x+y*y+z*z*z==e){
if(min>x+y+z)min=x+y+z;
}
}
}
cout<<min<<endl;
}

return 0;
}
