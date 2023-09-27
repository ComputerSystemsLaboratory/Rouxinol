#include<iostream>
using namespace std;
   
int main(){
int W,H,x,y,r;
cin >> W >> H >>x>>y>>r;

     if ( x < r || x + r > W  || y < r || y + r > H )    cout << "No" << endl;
else if ( x >= r && x + r <= W && y >= r && y + r <= H ) cout << "Yes" << endl;
   
return 0;
}