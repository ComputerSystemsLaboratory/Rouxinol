#include<iostream>
#include<algorithm>
using namespace std;
int maxnum(int x,int y);
int minnum(int x,int y);
int main(){
    int stu[30] = {0};
    int forg[2];
    int n;
    for(int i = 0;i < 28;i++){
        cin >> n;
        stu[n-1] = 1;
    }
    n = 0;
    for(int i = 0;i < 30;i++){
        if(stu[i] == 0){
            forg[n] = i+1;
            n++;
        }
    }
    sort(forg,forg+2);
    for(int i = 0;i < 2;i++){
        cout << forg[i] << endl;
    }
    return 0;
}

int maxnum(int x,int y){
    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

int minnum(int x,int y){
    if(x <= y){
        return x;
    }
    else{
        return y;
    }
}