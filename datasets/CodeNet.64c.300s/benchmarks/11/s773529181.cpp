#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int x,y,z;
    cin>>x;
    y=x/3600;z=(x-y*3600)/60;
    cout<<x/3600<<":"<<z<<":"<<x-y*3600-z*60<<endl;
}

