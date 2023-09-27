#include <iostream>
#include <map>

using namespace std; 
typedef pair<int, int> P;

int main()
{
	int h, w;
	map<P, int> d;

	for(int i=1; i<151; i++){
			for(int j=i+1; j<151; j++){
				d[P(i*i+j*j,i)] = j;
			}
	}

	while(cin >> h >> w){
		if(h==0 && w==0){return 0;}
		map<P, int>::iterator ite = d.find(P(h*h+w*w,h));
		ite++;
		cout << ((*ite).first).second << " " << (*ite).second << endl;
	}
}