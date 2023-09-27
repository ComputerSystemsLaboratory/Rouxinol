#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct LAKE {
	int start;	// start is negasitive integer.
	int end;	// end is positive integer.
	int square;
};

bool isInLake(int left, int right, vector<LAKE>& L, int& targetL) {
	for(int i=0; i<(int)L.size(); ++i) {
		if(L[i].start > left && L[i].end > right) {
			targetL=i;
			return true;
		}
	}
	targetL = -1;
	return false;
}

int main() {
	int n,max,min,h,k=0,S=0,idxL;
	string buf;
	LAKE tempL;
	vector<LAKE> L;
	vector<queue<int> > land;
	cin >> buf;
	n=(int)buf.size()+1;
	land.resize(2*n);
	h=0;
	max=n;
	min=n;
	for(int i=1; i<=n; ++i) {
		if(buf[i-1]=='/' ) {
			if(i!=1&&buf[i-2]=='/') ++h;
			land[n+h].push(i);
			if(n+h>max) { max=n+h; }
		} else if (buf[i-1]=='\\') {
			if(i!=1&&buf[i-2]!='/') --h;
			land[n+h].push(-i);
			if(n+h<min) { min=n+h; }
		} else if (buf[i-1]=='_') {
			if(i!=1&&buf[i-2]=='/') {
				++h;
			}
		}
	}
	for(int i=max; i>=min; --i) {
		int temp_l,temp_r;
		while(!(land[i].empty())) {
			temp_l=land[i].front();
			land[i].pop();
			if(temp_l<0 && !(land[i].empty()) ) {
				temp_r=land[i].front();
				land[i].pop();
				if(isInLake(temp_l,temp_r,L,idxL)==false) {
					tempL.start=temp_l;
					tempL.end=temp_r;
					tempL.square=temp_r+temp_l;
					L.push_back(tempL);
					++k;
				} else {
					L[idxL].square+=temp_r+temp_l;
				}
			}
		}
	}
	sort(L.begin(),L.end(),[](LAKE L1,LAKE L2) {
		return L1.end<L2.end;
	});
	for(int i=0; i<k; ++i) {
		S+=L[i].square;
	}
	printf("%d\n%d",S,k);
	for(int i=0; i<k; ++i) {
		printf(" %d",L[i].square);
	}
	printf("\n");
	return 0;
}