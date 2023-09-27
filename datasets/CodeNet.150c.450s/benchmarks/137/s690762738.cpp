///
// File:  alds1_4_c.cpp
// Author: ymiyamoto
//
// Created on Sat Oct  7 19:25:59 2017
//

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define SIZE 1046527

struct dict_key_t {
  int64_t key;

  dict_key_t(string str)
  {
    int64_t temp = 0;
    for (uint32_t i = 0; i < str.size(); i++) {
      if (str[i] == 'A') {
        temp += 0b001;
      } else if (str[i] == 'C') {
        temp += 0b010;
      } else if (str[i] == 'G') {
        temp += 0b011;
      } else {
        temp += 0b100;
      }
      temp <<= 3;
    }
    key = temp;
  }

  int64_t hash(int64_t i)
  {
    return (h1() + i * h2()) % SIZE;
  }

private:
  int64_t h1()
  {
    return key % SIZE;
  }

  int64_t h2()
  {
    return 1 + (key % (SIZE - 1));
  }
};

static vector<string> array(SIZE, "");

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    string command, val;
    cin >> command >> val;
    if (command[0] == 'i') {
      dict_key_t key(val);
      for (int64_t i = 0;; i++) {
        int64_t hash = key.hash(i);
        if (array[hash] == "") {
          array[hash] = val;
          break;
        }
      }
    } else if (command[0] == 'f') {
      dict_key_t key(val);
      for (int64_t i = 0;; i++) {
        int64_t hash = key.hash(i);

        if (array[hash] == "" || i >= SIZE) {
          cout << "no" << endl;
          break;
        }

        if (array[hash] == val) {
          cout << "yes" << endl;
          break;
        }
      }
    }
  }

  return 0;
}