#include <iostream>
#include <vector>
#include <complex>
using namespace std;

typedef complex<double> cd;

#define X real()
#define Y imag()

double dot(cd a,cd b){
    return (a*conj(b)).X;
}

double cross(cd a,cd b){
    return -((a*conj(b)).Y);
}

int main(){
    double x,y;

    while(cin>>x>>y){
        vector<cd> v,vec;
        v.push_back(cd(x,y));
        for(int i=1;i<3;i++){
            cin>>x>>y;
            v.push_back(cd(x,y));
        }

        v.push_back(v[0]);

        for(int i=0;i<3;i++){
            vec.push_back(v[i+1]-v[i]);
        }

        cin>>x>>y;

        int all_p=1,all_n=1;

        for(int i=0;i<3;i++){
            double crs=cross(vec[i],cd(x,y)-v[i]);
            all_p &= crs>0;
            all_n &= crs<0;
        }

        if(all_p || all_n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}