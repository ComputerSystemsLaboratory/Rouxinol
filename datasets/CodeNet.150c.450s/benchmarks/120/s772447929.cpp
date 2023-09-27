#include<iostream>
using namespace std;

int R, C;
int senbei[10000];
int numofbit(int bits){
    int num=0;
    for(;bits!=0;bits&=bits-1){
        num++;
    }
    return num;
}
int solve(int i, int j, int senbei[]){
    int a, b, k, x;
    int sum=0;
    x = 1;
    x <<= i;
    if(i<R){
        if(j){
            for(k=0;k<C;k++){
                senbei[k] ^= x;
            }
        }
        a = solve(i+1, 0, senbei);
        b = solve(i+1, 1, senbei);
        if(a > b){
            return a;
        }else{
            return b;
        }
    }else{
        for(k=0;k<C;k++){
            a = numofbit(senbei[k]);
            sum += (R-a>a) ? R-a : a ;
        }
        return sum;
    }
}
            
int main(){
    int i, j;
    int a, b;
    cin >> R >> C;
    while(R || C){
        for(j=0;j<C;j++){
            senbei[j] = 0;
        }
        for(i=0;i<R;i++){
            for(j=0;j<C;j++){
                cin >> a;
                senbei[j] += a<<=i;
            }
        }
        //for(i=0;i<C;i++){
        //    cout << senbei[i] << endl;
        //}
        a = solve(0,0,senbei);
        b = solve(0,1,senbei);
        cout << ((a>b)?a:b) << endl;
        cin >> R >> C;
    }
}