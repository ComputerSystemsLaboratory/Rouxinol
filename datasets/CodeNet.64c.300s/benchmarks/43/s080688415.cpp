#include<iostream>
using namespace std;

int main(){
int W,X,Y,Z,w,x,y,z;
cin >> W >>X >> Y >> Z >> w >> x >>y >> z;

if( (W + X + Y + Z) > (w + x + y + z)){
    cout << W + X + Y + Z << endl;
}
else if(( W + X + Y + Z) < (w + x + y + z)){
    cout << w + x + y + z << endl;
}
else{ 
    cout << w + x + y + z << endl;
}

return 0;
}