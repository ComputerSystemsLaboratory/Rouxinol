/*
 * Main.cpp
 *
 *  Created on:
 *      Author: KC
 */
/*
 ID: chancha4
 PROG: packrec
 LANG: C++
 */
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <sstream>
#include <math.h>
#include <vector>
#include <time.h>
#include<stack>
#include <set>
#include <limits>
#include<map>
#include<utility>

using namespace std;

int n = 10;
int e[11];

bool solve(int lv, int topa, int counta, int topb, int countb){
    bool boola;
    bool boolb;
    if(lv == n) return ((counta + countb) == n) ;

    if(topa < e[lv]) boola = solve(lv + 1, e[lv], counta + 1, topb, countb);
    else boola = false;

    if(topb < e[lv]) boolb = solve(lv + 1, topa , counta, e[lv], countb + 1);
    else boolb = false;

    return (boola || boolb);


}
int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 10; j++) scanf("%d", e + j);
        bool res = solve(0, 0, 0, 0, 0);
        if(res) puts("YES");
        else puts("NO");

    }
}