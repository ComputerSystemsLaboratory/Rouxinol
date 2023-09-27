#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

class bilist{
	long a[2000001];
	long L, R;
public:
	bilist(){ L = 0, R = -1; }
	inline long size(){
		return R - L + 1;
	}
	inline void insert(long x){
		a[++R] = x;
	}
	void deleteFirst(){
		while (L<R && a[R] == -1) --R;
		a[R--] = -1;
		while (L<R && a[R] == -1) --R;
	}
	void deleteLast(){
		while (L<R && a[L] == -1) ++L;
		a[L++] = -1;
		while (L<R && a[L] == -1) ++L;
	}
	void del(long x){
		long ite = R;
		for (; ite >= L; --ite){
			if (a[ite] == x){
				a[ite] = -1; return;
			}
		}
		if (ite < L) return;
	}
	void print(){
		bool Top = true;
		for (long i = R; i >= L; --i){
			if (a[i] == -1) continue;
			if (!Top) printf(" ");
			Top = false;
			printf("%ld",a[i]);
		}
		printf("\n");
	}
};

bilist blist;
int main(){
	long n; scanf("%ld", &n);
	while (n--){
		char tmp[20]; scanf("%s", &tmp);
		string a; a = tmp;
		if (a == "insert" || a == "delete"){
			long b; scanf("%ld", &b);
			if (a == "insert"){
				blist.insert(b);
			}
			else{
				blist.del(b);
			}
		}
		else if (a == "deleteFirst"){
			blist.deleteFirst();
		}
		else if (a == "deleteLast"){
			blist.deleteLast();
		}
		//blist.print();
	}
	blist.print();
}