#include<iostream>
#include<set>

using namespace std;

int main(){

    while(1){
        int n;
        cin>> n;
        if(n==0) break;
        string f[n];
        for(int i=0; i<n; i++) cin>> f[i];

        int left, right;
        int up=1, down=0;
        left=right=down;
        int next=up;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(f[i]=="lu"){
                if(right==up&&next==up) {cnt++; next=down;}
                left=up;
            }else if(f[i]=="ru"){
                if(left==up&&next==up) {cnt++; next=down;}
                right=up;
            }else if(f[i]=="ld"){
                if(right==down&&next==down) {cnt++; next=up;}
                left=down;
            }else if(f[i]=="rd"){
                if(left==down&&next==down) {cnt++; next=up;}
                right=down;
            }
        }
        cout<< cnt<< endl;
    }



    return 0;
}