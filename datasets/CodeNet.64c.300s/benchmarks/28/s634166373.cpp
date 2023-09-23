#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
        int w,h,x,y,r;
        cin>>w>>h>>x>>y>>r;
        cout<<((x-r>=0&&x+r<=w&&y-r>=0&&y+r<=h)?"Yes":"No")<<endl;
        return 0;
}