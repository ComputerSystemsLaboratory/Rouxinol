#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main(){
    int n,m,p;
    while(cin >> n >> m >> p){
        if((n|m|p) == 0) break;
        int v[n],sum=0,ret;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum += v[i];
        }
        //1-T¦ð|¯Äzª³êéàzÉ·é
        sum *= 100 - p;
        //zª³êéàz/I=1 ½è
        ret = v[m-1]?sum / v[m-1]:0;
        cout << ret << endl;
            
    }
}