#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class card{
public:
	char suit;
	int val;
	card() {}
	card(char s,int v) {
		suit = s;
		val = v;
	}
	bool operator<=(card& e) {
			return this->val <= e.val;
		}
	bool operator<(card& e) {
		return this->val < e.val;
	}
	card& operator=(card& e) {
		this->suit = e.suit;
		this->val = e.val;
		return *this;
	}
};

int pt(vector<card>& a,int p,int r) {
	card x = a[r];
	int i = p-1;
	for(int j = p;j < r;j++) {
		if(a[j] <= x) {
			i++;
			auto l = a[i];
			a[i] = a[j];
			a[j] = l;
		}
	}
	auto l = a[r];
	a[r] = a[i+1];
	a[i+1] = l;
	return i+1;
}

void qs(vector<card>& a,int p,int r) {
	if (p < r) {
		int q = pt(a,p,r);
		qs(a,p,q-1);
		qs(a,q+1,r);
	}
}

vector<card> s;

void merge(int l,int m,int r) {
    card* ll = new card[m-l+1];
    card* rr = new card[r-m+1];
    ll[m-l].val = 0x7fffffff;
    rr[r-m].val = 0x7fffffff;
    for(int i = l;i < m;i++)ll[i-l]=s[i];
    for(int i = m;i < r;i++)rr[i-m]=s[i];
    int i = 0,j = 0,c = 0;
    while(c != r-l) {
        if(ll[i] <= rr[j]) {
            s[l+c] = ll[i];
            i++;
        }else {
            s[l+c] = rr[j];
            j++;
        }
        c++;
    }
}

void sort(int l,int r) {
    if(r <= l + 1) return;
    int m = (l + r) / 2;
    sort(l,m);
    sort(m,r);
    merge(l,m,r);
}

int main(void) {
	int n,t;
	string st;
	cin >> n;
	vector<card> a;
	for(int i = 0;i < n;i++){
		cin >> st >> t;
		a.push_back(card(st[0],t));
		s.push_back(card(st[0],t));
	}
	sort(0,n);
	qs(a,0,n-1);
	bool stable = true;
	for(int i = 0;i < n;i++) {
		if(s[i].suit != a[i].suit || s[i].val != a[i].val)
			stable = false;
	}
	if(stable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for(int i = 0;i < n;i++) {
		cout << a[i].suit << " " << a[i].val << endl;

	}
}

