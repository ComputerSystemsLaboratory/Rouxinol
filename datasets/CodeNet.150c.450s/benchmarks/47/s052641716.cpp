#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int W,H,x,y,r;
    string str;
   
    cin >> W >> H >> x >> y >> r;
    
    if(0 <= x-r && x+r <= W && 0 <= y-r && y+r <= H){
        str = "Yes";
    }else{
        str = "No";
    }
        
        cout << str << endl;
return 0;
}