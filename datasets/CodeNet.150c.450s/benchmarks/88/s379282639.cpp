#include <iostream>
#include <map>
using namespace std;

int main( )
{
	map<int, int>m;
	map<int, int>::iterator pm;
	int size, rect, h, w;
	for(h = 1; h < 151; h++){
		for(w = 1; w < 151; w++){
			if(w > h){
				size = (h * h + w * w ) * 1000 + h;
				rect = h * 1000 + w;
				m.insert(pair<int, int>(size, rect));
			}
		}
	}
	while(1){
		cin >> h;
		cin >> w;
		if (h == 0 && w == 0)
			break;
		size = (h * h + w * w ) * 1000 + h;
		pm = m.find(size);
		pm++;
		rect = pm->second;
		w = rect % 1000;
		h = rect / 1000;
		cout << h << " " << w << endl;
	}

	return 0;
}