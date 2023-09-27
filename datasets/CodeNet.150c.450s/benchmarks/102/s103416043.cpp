///
// File:  1130.cpp
// Author: ymiyamoto
//
// Created on Sat Nov 11 02:36:17 2017
//

#include <array>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void dfs(int32_t H, int32_t W, array<array<char, 20>, 20> &tiles, array<array<bool, 20>, 20> &visited, int32_t i, int32_t j, char index)
{
  visited[i][j] = true;
  tiles[i][j] = index;

  for (int32_t l = -1; l <= 1; l++) {
    if (0 <= j + l && j + l < W) {
      if (tiles[i][j + l] == '.') {
        dfs(H, W, tiles, visited, i, j + l, index);
      }
    }
  }

  for (int32_t k = -1; k <= 1; k++) {
    if (0 <= i + k && i + k < H) {
      if (tiles[i + k][j] == '.') {
        dfs(H, W, tiles, visited, i + k, j, index);
      }
    }
  }
}

int32_t main()
{
  while (true) {
    int32_t W, H;
    cin >> W >> H;
    if (W == 0) break;

    array<array<char, 20>, 20> tiles;
    array<array<bool, 20>, 20> visited;
    uint32_t start_x = 0;
    uint32_t start_y = 0;
    for (int32_t i = 0; i < H; i++) {
      for (int32_t j = 0; j < W; j++) {
        cin >> tiles[i][j];
        if (tiles[i][j] == '@') {
          start_x = i;
          start_y = j;
          tiles[i][j] = '.';
        }
      }
    }

    char index = 0;
    for (int32_t i = 0; i < H; i++) {
      for (int32_t j = 0; j < W; j++) {
        if (tiles[i][j] == '.') {
          dfs(H, W, tiles, visited, i, j, index);
          index++;
        }
      }
    }

    char start_index = tiles[start_x][start_y];
    uint32_t count = 0;
    for (int32_t i = 0; i < H; i++) {
      for (int32_t j = 0; j < W; j++) {
        if (tiles[i][j] == start_index) {
          count++;
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}