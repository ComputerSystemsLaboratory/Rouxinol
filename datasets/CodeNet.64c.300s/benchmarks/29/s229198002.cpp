#include <iostream>
#include <string>
#include <map>
#include <math.h>
#include <complex>

using namespace std;

int main(){

    int e;

    while(cin>>e,e){

        int x,y,z;
        int answer = 1000000;
        /*for(int i=0;i<=e;i++){
            for(int j=0;j<=sqrt(e)-i;j++){
                for(int k=0;k<=pow(e,1.0/3.0)-i+pow(j,2.0);k++){
                    if(i+pow(j,2.0)+pow(k,3.0)==e&&answer>i+j+k){
                        answer = i+j+k;
                    }
                }
            }
        }*/

        for(int k=0;k*k*k<=e;k++){
            for(int j=0;j*j<=e-k*k*k;j++){
                int i=e-j*j-k*k*k;
                    if(answer>i+j+k){
                        answer = i+j+k;
                    }
            }
        }

        cout<<answer<<endl;
    }

    return 0;
}
