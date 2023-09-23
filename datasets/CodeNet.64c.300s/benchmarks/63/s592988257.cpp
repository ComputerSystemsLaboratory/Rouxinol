/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0005&lang=jp*/

#include <iostream>

using namespace std;

int gcd(int x,int y){
    if(x<y){
        swap(x,y);
    }
    if(y==0){
        return x;
    }else {
        return gcd(y, x % y);
    }
}

int main(){
    int x,y;
    while(cin>>x>>y){
        long long g=gcd(x,y);
        cout<<g<<" "<<y/g*x<<endl;
    }
    return 0;
}