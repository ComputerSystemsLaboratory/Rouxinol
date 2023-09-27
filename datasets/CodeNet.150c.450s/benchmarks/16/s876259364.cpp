#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#define INIT_H 10000
using namespace std;
struct Data
{
	Data(int i, int h) :index(i), height(h){}
	int index;
	int height;
};
struct DataComp
{
	bool operator()(const Data& d1, const Data& d2){
		if( d1.height == d2.height )
			return (d1.index > d2.index);
		return (d1.height < d2.height);
	}
};

int main(){
	int H[20001] = {};
	int T[20001] = {};
	int i = 0, j, s, b, h = INIT_H;
	priority_queue<Data, vector<Data>, DataComp> pq;
	pq.push(Data(0, INIT_H));
	H[0] = INIT_H;

	char c, p = 0;
	while(cin.get(c)){
		if( c == '\n'){
			b = i;
			pq.push(Data(b, h));
			break;
		}
		if (0 != p && c != p)
			pq.push(Data(i, h));
		++i;
		if( c == '/' ) ++h;
		else if( c == '\\' ) --h;
		H[i] = h;		
		p = c;
	}

	s = pq.size();
	if( 0 == s ){
		cout << 0 << "\n" << 0 << "\n";
		return 0;
	}

	Data d = pq.top();
	pq.pop();
	T[d.index] = H[d.index];

	int i_min = d.index,
		i_max = d.index;

	while(!pq.empty())
	{
		Data d = pq.top();
		pq.pop();
		if(T[d.index] == 0){
			h = H[d.index];
			T[d.index] = h;
			if( d.index < i_min ){
				i = d.index + 1;
				while( (H[i] <= h) && (T[i] == 0) && ( i <= i_max )) {
					T[i] = h;
					++i;
				}
				i_min = d.index;
			}else if( d.index > i_max ){
				i = d.index - 1;
				while ((H[i] <= h) && (T[i] == 0) && (i >= i_min)){
					T[i] = h;
					if (H[i] == h) break;
					--i;
				}
				i_max = d.index;
			}
		}
	}

	int A = 0;
	int t = -1;
	vector<int> v(s, 0);
	for(i = 1; i <= b; ++i){
		if( T[i] == 0 || T[i-1] == 0 )
			continue;
		if( T[i-1] == H[i-1] && T[i] > H[i] )
			++t;
		if(-1 == t)
			continue;
		v[t] += (T[i] - H[i]) + (T[i-1] - H[i-1]);
	}

	for(i = 0; i <= t; ++i)
		A += v[i];
	++t;

	cout << A / 2 << "\n" << t;
	for(i = 0; i < t; ++i)
		cout << " " << v[i] / 2;
	cout << "\n";

	return 0;
}