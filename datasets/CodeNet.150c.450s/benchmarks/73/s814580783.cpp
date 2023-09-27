#include <iostream>
#include <vector>
using namespace std;

class RangeSumQuery{
private:
	vector< int > value;
	int _size;
public:
	
	void Init(int size){
		int bitcount = 0;//?????°
		int t = size;
		
		while(t != 0){
			t /= 2;
			++bitcount;
		}
		if(size % (1 << (bitcount - 1)) != 0) bitcount++;
		_size = (1 << bitcount) - 1;
		
		value.resize(_size);
		
		for(vector< int >::iterator it = value.begin(); it != value.end(); ++it){
			(*it) = 0;
		}
	}
	
	void Update(int index, int v){
		int n = index + (_size>>1);
		value[n] += v;
		
		while(n > 0){
			n = (n - 1) / 2;
			value[n] = value[n * 2 + 1] + value[n * 2 + 2];
		}
	}
	
	int _RunQuery(int s, int t, int k, int l, int r){
		if(s <= l && r <= t){
			return value[k];
		}
		if(r < s || t < l){
			return 0;
		}
		return _RunQuery(s, t, 2 * k + 1, l, (l + r) / 2) + _RunQuery(s, t, 2 * k + 2, (l + r) / 2 + 1, r);
	}
	
	int RunQuery(int s, int t){
		return _RunQuery(s, t, 0, 0, (_size>>1));
	}
};

int main(){
	int n, q;
	int com, x, y;
	RangeSumQuery rsq;
	
	cin >> n >> q;
	rsq.Init(n);
	
	for(int i = 0; i < q; ++i){
		cin >> com >> x >> y;
		
		if(com == 0)rsq.Update(x - 1, y);
		else cout << rsq.RunQuery(x - 1, y - 1) << endl;
	}
}