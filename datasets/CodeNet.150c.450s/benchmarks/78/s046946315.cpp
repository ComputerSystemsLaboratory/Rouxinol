#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e+8;
// f[k] := k テ」ツつ津ヲツュツ」テ・ツ崢崚ゥツ敖「テ、ツスツ禿ヲツ閉ーテ」ツ?ョテ・ツ陳古」ツ?ィテ」ツ?療」ツ?ヲティツ。ツィテ」ツ?凖」ツ?淌」ツつ?」ツ?ォテ・ツソツ?ィツヲツ?」ツ?ェテヲツュツ」テ・ツ崢崚ゥツ敖「テ、ツスツ禿ヲツ閉ーテ」ツ?ョテ・ツ?凝ヲツ閉ーテ」ツ?ョテヲツ慊?・ツーツ湘・ツ?、
int f[1000001];
// g[k] := k テ」ツつ津・ツ・ツ?ヲツ閉ーテ」ツ?ョテヲツュツ」テ・ツ崢崚ゥツ敖「テ、ツスツ禿ヲツ閉ーテ」ツ?ョテ・ツ陳古」ツ?ィテ」ツ?療」ツ?ヲティツ。ツィテ」ツ?凖」ツ?淌」ツつ?」ツ?ォテ・ツソツ?ィツヲツ?」ツ?ェテ・ツ・ツ?ヲツ閉ーテ」ツ?ョテヲツュツ」テ・ツ崢崚ゥツ敖「テ、ツスツ禿ヲツ閉ーテ」ツ?ョテ・ツ?凝ヲツ閉ーテ」ツ?ョテヲツ慊?・ツーツ湘・ツ?、
int g[1000001];

int main(){
	fill(f, f + 1000001, INF);
	fill(g, g + 1000001, INF);
	vector<int> a, b;
	for(int i = 0 ; true ; i++ ){
		int k = i * (i + 1) * (i + 2) / 6;
		if( 1e+6 < k ) break;
		
		if( k % 2 == 1 ){
			b.push_back(k);
			g[k] = 1;
		}
		a.push_back(k);
		f[k] = 1;
	}
	for(int i = 0 ; i < 1000001 ; i++ ){
		if( f[i] ){
			for(int j = 0 ; j < a.size() ; j++ ){
				int k = i + a[j];
				if( 1e+6 < k ) break;
				f[k] = min(f[k], f[i] + 1);
			}
		}
		if( g[i] ){
			for(int j = 0 ; j < b.size() ; j++ ){
				int k = i + b[j];
				if( 1e+6 < k ) break;
				g[k] = min(g[k], g[i] + 1);
			}
		}
	}
	
	int N;
	while( cin >> N , N ){
		cout << f[N] << " " << g[N] << endl;
	}
}