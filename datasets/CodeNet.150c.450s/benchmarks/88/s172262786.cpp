#include "bits/stdc++.h"

using namespace std;

const int INF = numeric_limits<int>::max() / 2;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int h,w;//w>h
    while(cin>>h>>w,h||w){
        int cr=INF,hei=INF,wid;
        for(int haba=1;haba<=150;haba++){
            for(int taka=1;taka<haba;taka++){
                if(h*h+w*w<taka*taka+haba*haba || 
                h*h+w*w==taka*taka+haba*haba && h<taka){
                    if(taka*taka+haba*haba<cr ||
                    taka*taka+haba*haba==cr && taka<hei){
                        cr=taka*taka+haba*haba;
                        hei=taka;
                        wid=haba;
                    }
                }
            }
        }
        cout<<hei<<" "<<wid<<endl;
    }
}