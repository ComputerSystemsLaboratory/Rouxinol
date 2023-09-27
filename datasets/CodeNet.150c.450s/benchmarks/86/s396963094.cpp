//
//  main.cpp
//  procon
//
//  Created by ???????????? on 2015/05/21.
//  Copyright (c) 2015??´ y. inoue. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    while (true) {
        int N, M, P;
        cin >> N >> M >> P;
        if (!(N || M || P)) {
            break;
        }

        int pool = 0;
        int hit = 0;
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            pool += num;
            if (i == M - 1) {
                hit = num;
            }
        }

        if (hit == 0) {
            cout << 0 << "\n";
        } else {
            cout << pool * (100 - P) / hit << "\n";
        }
    }
}