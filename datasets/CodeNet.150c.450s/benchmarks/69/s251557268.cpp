#include <iostream>
#include <string.h>
#include <fstream>
#include<time.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <cstdlib>
#include <stack>
#include <map>
#include <queue>
#include<cctype>
#include <math.h>
#include <algorithm>
#define Size 1000
using namespace std;
int number[10];
int lef[10];
bool dfs(int num){
    if(num == 10){
        int lnum = 0, rnum = 0;
        for(int i = 0; i < 10; i ++){
            if((lef[i] == 1 && lnum > number[i])
               ||(lef[i] == 0 && rnum > number[i]))
               return false;
            else if(lef[i] == 1)
                lnum = number[i];
            else
                rnum = number[i];
        }
        return true;
    }
    lef[num] = 1;
    bool left = dfs(num + 1);
    lef[num] = 0;
    bool right = dfs(num + 1);
    return left || right;
}
int main()
{
    //ifstream in;
    //in.open("a.txt", ios::in);
    int n;
    cin>>n;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < 10; j ++){
            cin>>number[j];
        }
        if(dfs(0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}