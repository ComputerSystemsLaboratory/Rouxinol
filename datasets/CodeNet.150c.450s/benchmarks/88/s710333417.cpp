#include <iostream>

using namespace std;

int d(int a) {return a*a;}

int main()
{
  int h,w;
  while(1){
	cin >> h >> w;
	if (h == 0 && w == 0) break;
	int tai = d(h)+ d(w);
	int ansh=150,answ=0,now=(150*150);
	for (int i = 1; i <= 150; i++) {
	  for (int j = (i + 1); j <= 150; j ++) {
		int newtai = d(i)+d(j);
		if((newtai > tai) && (newtai < now || (newtai == now && i < ansh))){
		  ansh = i;
		  answ = j;
		  now = newtai;
		}else if((newtai == tai) && ((now == tai && i < ansh) || now > tai) && (i > h)){
			ansh = i;
			answ = j;
			now = newtai;
		}
	  }
	}

	cout << ansh << " " << answ << endl;
  }
  
  return 0;
}