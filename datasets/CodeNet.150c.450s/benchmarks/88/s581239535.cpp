#include <iostream>
using namespace std;

int main(){
    while(1){
        int h, w;
        cin >> h >> w;

        if(h==0 && w==0){
            break;
        }
        int c = h*h+w*w;
        int ah, aw;
        int ac = 1000000;
        for(int hh=1;hh<150;hh++){
            for(int ww=hh+1;ww<150;ww++){
                int cc = hh*hh + ww*ww;
                if(cc < c) continue;
                if(cc == c && hh <= h) continue;
                if(cc < ac){
                    ah = hh;
                    aw = ww;
                    ac = cc;
                } else if(cc == ac) {
                    if(hh < ah){
                        ah = hh;
                        aw = ww;
                        ac = cc;
                    }
                }

            }
        }
        cout << ah << " " << aw << endl;
    }
}