#include  <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;

typedef bool B;
typedef long double D;
typedef complex<D> P;
typedef vector<P> VP;
typedef struct {P s,t;} L;
typedef vector<L> VL;
typedef struct {P c;D r;} C;
typedef vector <C> VC;

const D eps=1.0e-10;
const D pi=acos(-1.0);
template<class T> bool operator==(T a, T b){return abs(a-b)< eps;}
template<class T> bool operator< (T a, T b){return a < b-eps;}
template<class T> bool operator<=(T a, T b){return a < b+eps;}
//template<class T> int sig(T r) {return (r==0||r==-0) ? 0 : r > 0 ? 1 : -1;}
template<class T> int sig(T a,T b = 0) {return a < b ? -1 : b > a ? 1 : 0;}
#define X real()
#define Y imag()

D ip(P a, P b) {return a.X * b.X + a.Y * b.Y;}
D ep(P a, P b) {return a.X * b.Y - a.Y * b.X;}
D sq(D a) {return sqrt(max(a, (D)0));}
P vec(L l){return l.t-l.s;}
inline P input(){D x,y;cin >> x >> y; return P(x,y);}
//??\??? ???????????¬????????¨???


// ??? not verify
D toRagian(D degree){ return degree*pi/180.0;}
D ang (P p){return arg(p);}
D ang (P base, P a, P b) {return arg( (b - base) / (a - base) );} // base ??????
P rot (P base, P a, D theta){
	P tar=a-base;return base+polar(abs(tar), arg(tar)+theta );
}

enum CCW{
	LEFT = 1,
	RIGHT = 2,
	BACK = 4,
	FRONT = 8,
	MID = 16,
	ON=FRONT|BACK|MID
};

inline int ccw(P base, P a, P b) {              //???a??¨???b???????????????????????????
	a -= base; b -= base;
	if (ep(a, b) > 0)
		return LEFT;    // counter clockwise
	if (ep(a, b) < 0)
		return RIGHT;   // clockwise
	if (ip(a, b) < 0)
		return BACK;    // b--base--a on line
	if (norm(a) < norm(b))
		return FRONT;   // base--a--b on line
	// otherwise
	return MID;      // base--b--a on line  a??¨b????????????????????????
}

// ????§???¢??????????????? ?????? 2 ?????? 1 ???????????? 0???(???????§???¢??????)
//verify AOJ CGL_3-C
int in_polygon(VP pol,P p){
	int n=pol.size();
	int res=0;
	rep(i,n){
		if(ccw(pol[i],pol[(i+1)%n],p)==MID)
			return 1;
		D vt=(p.Y-pol[i].Y)/(pol[(i+1)%n].Y-pol[i].Y);
		D dx=pol[(i+1)%n].X-pol[i].X;
		if((pol[i].Y<=p.Y)&&(p.Y< pol[(i+1)%n].Y)&&(p.X<pol[i].X+vt*dx))res++;
		if((pol[i].Y> p.Y)&&(p.Y>=pol[(i+1)%n].Y)&&(p.X<pol[i].X+vt*dx))res--;
	}
	return res?2:0;
}

int main(void){
    D x, y;
    while(cin >> x >> y){
        VP pol(3); P p;
        pol[0] = P(x, y);
        rep(i, 2) pol[i + 1] = input();
        p = input();

        string res = in_polygon(pol, p) != 0 ? "YES":"NO";

        cout << res << endl;
    }
    
	return 0;
}