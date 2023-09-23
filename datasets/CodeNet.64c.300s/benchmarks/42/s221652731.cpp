#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

char ch[] = "ENWS";
int mx[] = {1, 0, -1, 0};
int my[] = {0, 1, 0, -1};

signed main()
{
  int N, M;
  while(cin >> N, N) {
    
    bool mas[25][25] = {0};
    int A, B; char C;
    int x, y, cnt = 0; x = y = 10;

    Rep(i, N) {
      cin >> A >> B; mas[B][A] = true;
    }
    if(mas[10][10]) mas[10][10] = false, cnt++;
    cin >> M;
    while(M--) {
      cin >> C >> A;
      Rep(i, 4) {
	if(C == ch[i]) {
	  Rep(j, A) {
	    y += my[i], x += mx[i];
	    if(mas[y][x]) mas[y][x] = false, cnt++;
	  }
	}
      }
    }

    if(cnt == N) cout << "Yes" << endl;
    else cout << "No" << endl;
   
  }
  return 0;
}