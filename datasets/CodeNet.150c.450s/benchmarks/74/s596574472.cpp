/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: shrif
 *
 * Created on January 20, 2017, 8:32 AM
 */

//============================================================================
// Name        : recursion.cpp
// Author      : Sherif Embarak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int n, s;
int table[50010];

int main() {

    cin >> s>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    table[0] = 0;
    for (int i = 1; i <= s; i++)
        table[i] = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= s; j++) {
            if (j >= v[i])
                if (table[j - v[i]] != INT_MAX)
                    table[j] = min(table[j], table[j - v[i]] + 1);
        }
    }
    cout << table[s] << endl;
    return 0;
}