#include <bits/stdc++.h>

using namespace std;

void updans(int tansh,int tansw,int &ansh,int &answ){
    int a=tansh*tansh+tansw*tansw,b=ansh*ansh+answ*answ;
    if(a<b){
        ansh=tansh;answ=tansw;
    }
    else if(a==b){
        if(tansh<ansh){
            ansh=tansh;answ=tansw;
        }
    }
}

int main(){
    while(true){
        int h,w;
        cin>>h>>w;
        if(h==0)break;
        int tai=h*h+w*w;
        int ansh=1000,answ=1000;
        for (int i = 1; i < 200; ++i) {//h
            for (int j = i+1; j < 200; ++j) {//w
                if(i*i+j*j<tai)continue;
                if(i*i+j*j==tai){
                    if(i<=h)continue;
                    updans(i,j,ansh,answ);
                }
                else{
                    updans(i,j,ansh,answ);
                }
            }
        }
        cout<<ansh<<" "<<answ<<endl;
    }
    return 0;
}
