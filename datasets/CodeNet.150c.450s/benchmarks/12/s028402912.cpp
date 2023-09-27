// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_9_A: Complete Binary Tree

#include <cstdio>

static int parent(int i) { return i/2; }
static int left(int i) { return 2*i; }
static int right(int i) { return 2*i+1; }

int main()
{
  int h;
  std::scanf("%d", &h);
  int as[h+1]; // 1-origin
  for (auto i = 1; i < h+1; ++i) {
    std::scanf("%d", &as[i]);
  }

  for (auto i = 1; i < h+1; ++i) {
    std::printf("node %d: key = %d, ", i, as[i]);
    if (parent(i) >= 1) {
      std::printf("parent key = %d, ", as[parent(i)]);
    }
    if (left(i) <= h) {
      std::printf("left key = %d, ", as[left(i)]);
    }
    if (right(i) <= h) {
      std::printf("right key = %d, ", as[right(i)]);
    }
    std::printf("\n");
  }
}

// eof