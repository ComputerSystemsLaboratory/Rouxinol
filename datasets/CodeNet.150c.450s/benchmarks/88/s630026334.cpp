#include<cstdio>
#include<cmath>

using namespace std;

int h,w;

int main() {
	//freopen("input.txt","r",stdin);
	while(1) {
		scanf("%d%d",&h,&w);
		if(h+w==0) break;
		int d = h*h + w*w;

		int ad=1<<30,ah=1<<30,aw=1<<30;
		for(int nw=1;nw<=d/nw+10;++nw) {
			int th = sqrt(1.0*d-nw*nw);
			for(int nh=1;nh<nw;++nh) {
				if(nh <= 0 || nh >= nw) continue;
				if(nh*nh + nw*nw > d || (nh*nh + nw*nw == d && nh >h)) {
					if(nh*nh + nw*nw < ad || (nh*nh + nw*nw == ad && nh<ah)) {
						ad = nh*nh + nw*nw;
						ah = nh;
						aw = nw;
					}
				}
			}
		}

		printf("%d %d\n",ah,aw);
	}
}