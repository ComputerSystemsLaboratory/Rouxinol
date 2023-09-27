#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string p[1001],s;
	int c;
	int st[1001] = { 0 }, l = 0, i,maxl=0,maxn=0;
	while ((c = getchar()) != '\n'){
		if (c == ' '){
			for (i = 0; i < l; i++){
				if (p[i] == s){
					st[i]++;
					s.clear();
					break;
				}
			}
			if (i == l){
				int size = s.size();
				p[l] = s;
				maxl = max(maxl,size);
				if (maxl == s.size())maxn = l;
				s.clear();
				l++;
			}
		}
		else{
			s += c;
		}
	}
	for (i = 0; i < l; i++){
		if (p[i] == s){
			st[i]++;
			break;
		}
	}
	if (i == l){
		int size = s.size();
		p[l] = s;
		maxl = max(maxl, size);
		if (maxl == s.size())maxn = l;
		s.clear();
		l++;
	}
	int maxb=0,maxnum;
	for (int i = 0; i < l; i++){
		maxb = max(maxb, st[i]);
		if (maxb == st[i]){
			maxnum = i;
		}
	}
	cout << p[maxnum] << " ";
	cout << p[maxn] << endl;
}