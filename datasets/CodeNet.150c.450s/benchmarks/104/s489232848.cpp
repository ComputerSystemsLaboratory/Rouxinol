#include <iostream>

using namespace std;

int main()
{
 short map[31], w, n;
 while(cin >> w) {
  cin >> n;
  w++;
  for(int i=1; i < w; i++) map[i] = i;
  for(int i=0; i < n; i++) {
   int a, b;
   scanf("%d,%d", &a, &b);
   int tmp = map[a];
   map[a] = map[b];
   map[b] = tmp;
  }
  for(int i=1; i < w; i++) cout << map[i] << endl;
 }
 return 0;
}