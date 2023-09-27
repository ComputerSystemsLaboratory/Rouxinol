/**
 * Areas on the Cross-Section Diagram
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D&lang=ja
 * 
 * 参考： Areas on the Cross-Section Diagram 解き方メモを読めば理屈がわかる
 * https://mtdtx9.hatenablog.com/entry/2017/04/24/230941
 */

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct WaterArea {
  // 水たまりの左端の場所
  int leftIndex;
  // 水たまりの大きさ
  int areaSize;
};

WaterArea mkWaterArea(int leftIndex, int areaSize) {
  WaterArea area = WaterArea();
  area.leftIndex = leftIndex;
  area.areaSize = areaSize;
  return area;
}

/**
 * それぞれの水たまりの大きさを出力する
 */
void trace(stack <WaterArea>A) {
  vector <int>areaSizes(A.size());
  while (A.size() > 0) {
    // stackはLIFOなので、一度取り出して整頓する
    WaterArea area = A.top();
    A.pop();
    areaSizes.at(A.size()) = area.areaSize;
  }

  // 水たまりのサイズを出力
  for (int i = 0; i < areaSizes.size(); i++) {
    cout << ' ' << areaSizes.at(i);
  }
}

int areaTotalSize(stack <WaterArea>A) {
  int total = 0;
  while (A.size() > 0) {
    WaterArea area = A.top();
    A.pop();
    total += area.areaSize;
  }

  return total;
}

int main() {
  // cin.tie(0);
  // ios::sync_with_stdio(false);

  stack <WaterArea>areaStack;
  stack <int>slopeIndexStack;

  char slope;
  int currentIndex = -1;
  while (++currentIndex <= 20000) {
    cin >> slope;
    if (cin.eof()) {
      break;
    } else if (slope == '\\') {
      slopeIndexStack.push(currentIndex);
    } else if (slope == '/') {
      if (slopeIndexStack.empty()) {
        continue;
      }

      int slopeIndex = slopeIndexStack.top();
      slopeIndexStack.pop();
      WaterArea area = mkWaterArea(slopeIndex, currentIndex - slopeIndex);
      while (areaStack.size() > 0) {
        WaterArea areaTop = areaStack.top();
        // cout << "area top index " << areaTop.size << " " << areaTop.index <<  endl;
        if (areaTop.leftIndex > area.leftIndex) {
          areaStack.pop();
          area.areaSize += areaTop.areaSize;
        } else {
          break;
        }
      }
      areaStack.push(area);
    }
  }

  // 水たまりの総サイズ
  cout << areaTotalSize(areaStack) << endl;
  // 水たまりの数
  cout << areaStack.size();
  // それぞれの水たまりのサイズ
  trace(areaStack);
  cout << endl;

  return 0;
}

