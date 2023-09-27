#include<iostream>
#include<algorithm>
#include<tuple>
#include<vector>

using namespace std;

int main(){

    while(1){
        int h, w;
        cin>> h>> w;
        if(!(h||w)) break;
        vector<tuple<int, int, int>> V;// sum, height, width
        for(int i=1; i<=200; i++){
            for(int j=i+1; j<=200; j++){
                V.push_back(make_tuple(i*i+j*j, i, j));
            }
        }
        sort(V.begin(), V.end());
        for(int i=0; i<V.size(); i++){
            int s, _h, _w;
            tie(s, _h, _w)=V[i];
            if((s==h*h+w*w)&&h==_h&&w==_w){
                tie(s, _h, _w)=V[i+1];
                cout<< _h<< " "<< _w<< endl;
                break;
            }
        }
    }

    return 0;
}