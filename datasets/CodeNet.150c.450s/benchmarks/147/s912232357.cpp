#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int>a(10001);
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int l=1;l<=100;l++){
                int v=i*i+j*j+l*l+i*j+l*j+l*i;
                if(v>10000)continue;
                a[v]++;
            }
        }
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}