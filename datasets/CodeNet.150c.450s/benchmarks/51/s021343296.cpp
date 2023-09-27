#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    int stu[30] = {0};
    int n;

    rep(i,28){
        cin >> n;
        stu[n-1] = 1;
    }
    rep(i, 30){
        if(stu[i] != 1){
            cout << i + 1 << endl;
        }
    }
}