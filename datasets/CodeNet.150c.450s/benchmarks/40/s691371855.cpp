#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int i, j, d[7], d_next[7];
    string dire;

    cin >> d[1] >> d[2] >> d[3] >> d[4] >> d[5] >> d[6];
    cin >> dire;
    for(i=0;i<dire.size();i++){
        if(dire[i] == 'E'){
            d_next[1]=d[4];
            d_next[2]=d[2];
            d_next[3]=d[1];
            d_next[4]=d[6];
            d_next[5]=d[5];
            d_next[6]=d[3];
        }else if(dire[i] == 'N'){
            d_next[1]=d[2];
            d_next[2]=d[6];
            d_next[3]=d[3];
            d_next[4]=d[4];
            d_next[5]=d[1];
            d_next[6]=d[5];
        }else if(dire[i] == 'S'){
            d_next[1]=d[5];
            d_next[2]=d[1];
            d_next[3]=d[3];
            d_next[4]=d[4];
            d_next[5]=d[6];
            d_next[6]=d[2];
        }else{
            d_next[1]=d[3];
            d_next[2]=d[2];
            d_next[3]=d[6];
            d_next[4]=d[1];
            d_next[5]=d[5];
            d_next[6]=d[4];
        }
        for(j=1;j<7;j++){
            d[j] = d_next[j];
        }
    }

    cout << d[1] << endl;
    return 0;
}

