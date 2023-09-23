#include <iostream>
#include <utility>
using namespace std;

int main(){
        int x,y;
        while(cin>>x>>y&&(x||y)){
                if(x>y)swap(x,y);
                cout<<x<<" "<<y<<endl;
        }
        return 0;
}