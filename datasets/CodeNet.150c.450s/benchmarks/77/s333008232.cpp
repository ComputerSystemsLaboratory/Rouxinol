//
//  main.cpp
//  procon
//
//  Created by ???????????? on 2015/05/21.
//  Copyright (c) 2015??´ y. inoue. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    while (true) {
        int N;
        std::cin >> N;

        if (N == 0) break;

        bool t[21][21];
        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                t[i][j] = false;
            }
        }
        for (int i = 0; i < N; i++) {
            int x, y;
            std::cin >> x >> y;
            t[y][x] = true;
        }

        int M;
        std::cin >> M;
        int get = 0;
        int x = 10, y = 10;
        for (int i = 0; i < M; i++) {
            char dir;
            int dis;
            std::cin >> dir >> dis;
            for (int j = 0; j < dis; j++) {
                switch (dir) {
                    case 'N':
                        y++;
                        break;

                    case 'S':
                        y--;
                        break;

                    case 'E':
                        x++;
                        break;

                    case 'W':
                        x--;
                        break;

                    default:
                        break;
                }

                if (t[y][x]) {
                    get++;
                    t[y][x] = false;
                }
            }
        }
        
        if (N == get) {
            std::cout << "Yes" << "\n";
        } else {
            std::cout << "No" << "\n";
        }
    }
}