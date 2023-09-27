#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, L;
  while(scanf("%d %d", &a, &L), a || L){
    map<int, int> dec;
    for(int i = 0; i <= 20; i++){
      if(dec.count(a) != 0){
	cout << dec[a] << " " << a << " " << i - dec[a] << endl;
	break;
      } else {
	dec[a] = i;
	char maxAstr[10], minAstr[10];
	sprintf(maxAstr, "%0*d", L, a);
	sprintf(minAstr, "%0*d", L, a);
	sort(maxAstr, maxAstr + L, greater<char>());
	sort(minAstr, minAstr + L);
	int maxAnum, minAnum;
	maxAnum = atoi(maxAstr);
	minAnum = atoi(minAstr);
	a = maxAnum - minAnum;
      }
    }
  }
  return 0;
}