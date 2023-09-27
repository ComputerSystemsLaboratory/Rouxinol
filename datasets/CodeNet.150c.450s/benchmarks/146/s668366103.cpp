/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_3_A&lang=jp
所要時間は15分程度。一つ目の例題をACしてしまえばやるだけといいった印象。
着席位置は{中央x中央}
*/


#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<complex>

using std::cout;
using std::cin;
using std::setw;
using std::setfill;
using std::string;
using std::pair;
using std::make_pair;
using std::vector;
using std::queue;
using std::deque;
using std::priority_queue;
using std::next_permutation;
//using std::iota;
using std::sort;
using std::greater;
using std::max;
using std::min;
using std::abs;
using std::complex;

#define INF 999999999;
#define MOD 1000000007

using ulli = unsigned long long int;

//#define EVEL 1

#ifndef EVEL
#define dbug(X) std::cout << #X << ":" <<X<<" " ;
#define dbugf(s) std::cout << s << " ";
#define dbugln std::cout<<"\n";
#else
#define dbug(X) {}
#define dbugf(s) {}
#define dbugln {}
#endif

using Comp = complex<double>;

int n;
double x1, y1n, x2, y2, x3, y3, x4, y4;

int main(){
	cin.tie(0);
	std::ios::sync_with_stdio(false);

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1n, &x2, &y2, &x3, &y3, &x4, &y4);
            //printf("%f %f %f %f %f %f %f %f", x1, y1n, x2, y2, x3, y3, x4, y4);
            Comp ab = Comp(x2-x1, y2-y1n);
            Comp cd = Comp(x4-x3, y4 - y3);
            double s = ab.real() * cd.imag() - ab.imag()*cd.real();
            //dbug(s)
            if(abs(s) < 0.0000000001) printf("YES\n");
            else printf("NO\n");
    }

    return 0;
}
