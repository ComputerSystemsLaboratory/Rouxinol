///
// File:  1193.cpp
// Author: ymiyamoto
//
// Created on Sat Nov 25 23:05:51 2017
//

#include <array>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

void print_board(vector<vector<int32_t>> board)
{
  for (uint32_t i = 0; i < board.size(); i++) {
    for (uint32_t j = 0; j < board[i].size(); j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

void erase(vector<vector<int32_t>> &board, vector<pair<uint32_t, uint32_t>> disps)
{
  for (uint32_t i = 0; i < disps.size(); i++) {
    for (uint32_t j = disps[i].first; j < disps[i].second; j++) {
      board[i][j] = -1;
    }
  }

  for (uint32_t i = 0; i < 5; i++) {
    for (uint32_t j = 0; j < board.size() - 1; j++) {
      while (board[j][i] == -1) {
        for (uint32_t k = j; k < board.size() - 1; k++) {
          board[k][i] = board[k + 1][i];
        }
      }
    }
  }
}

int32_t main()
{
  while (true) {
    int32_t H;
    cin >> H;
    if (H == 0) break;
    vector<vector<int32_t>> board(H + 1);
    for (int32_t i = H; i >= 0; i--) {
      for (uint32_t j = 0; j < 5; j++) {
        uint32_t b;
        if (i == H) {
          b = 0;
        } else {
          cin >> b;
        }
        board[i].push_back(b);
      }
    }

    uint32_t points = 0;
    while (true) {
      vector<pair<uint32_t, uint32_t>> disps(H);
      bool is_erase = false;
      for (uint32_t i = 0; i < H; i++) {
        uint32_t max_rep = 0;
        uint32_t start = 0;
        uint32_t end = 0;
        uint32_t max_start = 0;
        uint32_t max_end = 0;
        for (uint32_t j = 0; j < 5; j++) {
          if (board[i][j] != 0 && board[i][start] == board[i][j]) {
            end++;
            uint32_t rep = end - start;
            if (max_rep < rep) {
              max_rep = rep;
              max_start = start;
              max_end = end;
            }
          } else {
            start = j;
            end = j + 1;
          }
        }

        if (max_rep >= 3) {
          disps[i] = {max_start, max_end};
          points += board[i][max_start] * max_rep;
          is_erase = true;
        }
      }

      if (!is_erase) break;

      erase(board, disps);
    }

    cout << points << endl;
  }
  return 0;
}