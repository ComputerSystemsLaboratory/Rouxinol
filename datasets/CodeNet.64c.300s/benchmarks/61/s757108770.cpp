#include<iostream>
using namespace std;
int main(){
    int r,c,sum,total;
    cin>>r>>c;
    total=0;
    int lst[r][c];
    for (int a=0;a<r;a++){
        sum=0;
        for (int b=0;b<c;b++){
            int num;
            cin>>num;
            lst[a][b]=num;
            cout<<num<<" ";
            sum=sum+num;
        }
        cout<<sum<<endl;
    }for(int d=0;d<c;d++){
        sum=0;
        for (int e=0;e<r;e++){
            sum=sum+lst[e][d];
            total=total+lst[e][d];
        }cout<<sum<<" ";
    }cout<<total<<endl;
}
