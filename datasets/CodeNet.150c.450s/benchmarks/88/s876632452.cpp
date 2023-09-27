#include <iostream>
using namespace std;

int main(){
    int h, w;
    while(true){
        cin >> h >> w;
        if(h == 0)
            break;
        int ah = 1e9, aw;
        int val = h*h + w*w, val_ = 1e9;
        for(int i=1; i<=150; i++){
            for(int j=i+1; j<=150; j++){
                int v = i*i + j*j;
                if(v >= val){
                    if(v == val){
                        if(i > h){
                            ah = i;
                            aw = j;
                            val_ = val;
                            i = 200;
                            j = 200;
                        }
                    }else {
                        if(v == val_ && i < ah){
                            ah = i;
                            aw = j;
                            j = 200;
                        }
                        if(v < val_){
                            ah = i;
                            aw = j;
                            val_ = v;
                            j = 200;
                        }
                    }
                }
            }
        }
        cout << ah << ' ' << aw << endl;
    }
  
    return 0;
}