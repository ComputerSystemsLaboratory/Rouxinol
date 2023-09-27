//
// Created by yuu on 2019-06-20.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <math.h>
#include <stack>
#include <queue>
#include <cstdio>

using namespace std;
int L;
int getMin(string str){
    vector<int>aa;
    for (int i = 0; i < L; ++i) {
        aa.push_back((int)str[i]-'0');
    }

    sort(aa.begin(), aa.end());

    int ret = 0;
    for (int i = 0; i < L; ++i) {
        ret += aa[i] * pow(10, (L-1)-i);
    }

    return  ret;
}


int getBig(string str){
    vector<int>aa;
    for (int i = 0; i < L; ++i) {
        aa.push_back((int)str[i]-'0');
    }

    sort(aa.begin(), aa.end(), greater<int>());

    int ret = 0;
    for (int i = 0; i < L; ++i) {
        ret += aa[i] * pow(10, (L-1)-i);
    }

    return  ret;
}

int main(void){

    while (1){
        int hoge;
        cin>>hoge>>L;
        if(hoge==0 &&L==0){
            break;
        }

        map<string, int> a;

        string A = to_string(hoge);
        a[A] = 0;

        while (A.size() < L){
            A += '0';
        }
       // cout<<A<<endl;
        int count = 1;
        while(1){
            int big = getBig(A);
            int min = getMin(A);

            int temp = big - min;
            if(temp == 0){
                A = "0";
            }else{
                A = to_string(temp);
            }

            //cout<<A<<endl;

            if(a.count(A) == 1){
                cout<<a[A]<<" "<<temp<<" "<<count- a[A]<<endl;
                break;
            }
            a[A] = count;
            if(A.size() < L){
                while (A.size() < L){
                    A += '0';
                }
            }
           //cout<<A<<endl;

            count ++;


        }


    }

    return 0;
}

