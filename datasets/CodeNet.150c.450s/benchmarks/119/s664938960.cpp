// include
#include <iostream>

// typedef
typedef unsigned long long ull;
typedef unsigned int uint;

// macro
#define REP(index, num) for (auto index = 0; index < num; index++)
#define REP1(index, num) for (auto index = 1; index <= num; index++)

#define MAX_NUM 60

// using namespace 
using namespace std;

const int ExistIsland(const int inX, const int inY);

// global
int W, H;
int c[MAX_NUM][MAX_NUM] = { 0 };

int main()
{
  while (1)
  {
    cin >> W >> H;

    // 入力が 0 0 なら終了
    if (W * H == 0)
      break;

    REP(hId, H)
      REP(wId, W)
      cin >> c[wId][hId];

    // 深さ優先探索
    int count = 0;
    REP(hId, H)
      REP(wId, W)
      count += ExistIsland(wId, hId);

    cout << count << endl;
  } 
}

const int ExistIsland(const int inX, const int inY)
{
  if (inX < 0 || W <= inX) return 0;
  if (inY < 0 || H <= inY) return 0;

  if (c[inX][inY] == 0)
    return 0;
  else
    c[inX][inY] = 0;

  //bool existFlag = true;

  // 周りに移動
  ExistIsland(inX + 1, inY);
  ExistIsland(inX + 1, inY + 1);
  ExistIsland(inX, inY + 1);
  ExistIsland(inX - 1, inY + 1);
  ExistIsland(inX - 1, inY);
  ExistIsland(inX - 1, inY - 1);
  ExistIsland(inX, inY - 1);
  ExistIsland(inX + 1, inY - 1);

  return 1;
}



