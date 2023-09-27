#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
#define rep(i,a,b) for(int (i)=(a);(i)<(b);(i)++)

using namespace std;




int main(void){
	//string fname;
	//cin >> fname;
	//ifstream fin(fname);
	//fname = fname + ".answer";
	//ofstream fout(fname);
	int x, y, s;
	while (true){
		int max_int = 0;
		//fin >> x >> y >> s;
		cin >> x >> y >> s;
		if (x == 0)break;
		rep(i,1,s+1)
			rep(j, 1, s+1){
				int r = i*(100 + x),l=j*(100+x);
				if (r / 100 + l / 100 != s)continue;
				r = i*(100 + y), l = j*(100 + y);
				max_int = max(max_int, r / 100 + l / 100);
			}
	//	fout << max_int << endl;
		cout << max_int << endl;
	}

	//fin.close();
	//fout.close();
	return 0;
}