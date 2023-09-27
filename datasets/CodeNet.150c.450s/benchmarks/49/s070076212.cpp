#include<iostream>
#include<list>
#include<string>
#include<algorithm>
#include <utility>
#include<stdio.h>
#include<climits>
#include <vector>
#include <queue>

using namespace std;

int main(void){
    int n;
    int i,j;
    int min,max,s;
    while(1){
        cin >> n;
        if(!n) break;
        s = 0;
        cin >> j;
        min = max = j;
        s += j;
        for(i = 1;i < n;i++){
            cin >> j;
            if(min > j) min = j;
            if(max < j) max = j;
            s += j;
        }
        cout << (s-min-max)/(n-2) << endl;
    }
}