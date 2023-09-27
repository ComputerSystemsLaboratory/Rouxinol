#include<iostream>
using namespace std;
int calc(int,int);

int main(){
    int n,x;
    cin >> n >> x;

    while ( n != 0 || x !=0 ){
        cout << calc(n,x) << endl;
        cin >> n >> x;
    }
}

int calc(int n,int x){
    int ans = 0;

    for (int k=x/3+1;k<x && k<=n;k++){
        for (int j=(x-k)/2+1;j<x-k && j<k;j++){
            //cout << j << " " << k << endl;
            if(x-k-j > 0){
                //cout << "ans:" << x-k-j << " " << j << " " << k << endl;
                ans+=1;
            }
        }
    }
    return ans;
}
