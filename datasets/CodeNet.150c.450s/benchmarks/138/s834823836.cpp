#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {

    //freopen(" E:\\workspace\\CLionProjects\\demo\\index.txt","r",stdin);
//    int x,y,divisor=1;
//
//    int maxDiver=100000;
//    vector<int >diverList;
//    diverList.push_back(1);
//    diverList.push_back(2);
//    for(int i=3;i<maxDiver;i++){
//        bool  flag=true;
//        for(int j=2;j<sqrt(i);j++){
//            if(i%j==0){
//                flag=false;
//                break;
//            }
//        }
//        if(flag)diverList.push_back(i);
//    }
//    int length=diverList.size();
    int x,y,divisor=1;
    cin>>x>>y;
    if(x>y)swap(x,y);
    for(int i=2;i<=x;){
        if(x%i==0&&y%i==0){
            divisor*=i;
            x=x/i;
            y=y/i;
        } else{
            i++;
        }
    }
    cout<<divisor<<endl;

    return 0;
}