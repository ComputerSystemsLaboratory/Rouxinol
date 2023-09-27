#include <stdio.h>
#include <string.h>

int judge(int w, int h, int pw, int ph){// (w, h) < (pw, ph)??????0 ?????????1?????????
	if(w*w+h*h < pw*pw+ph*ph) return 0;
	else if(w*w+h*h > pw*pw+ph*ph) return 1;
	if(h < ph) return 0;
	else return 1;
}

int main()
{
	int w, h, mw = 152, mh = 151;
	int iw, ih;
	while(1){
		scanf("%d %d", &ih, &iw);
		if(iw == 0 && ih == 0) break;
		for (h = 1; h <= 150; h++)
		{
			for (w = h+1; w <= 150; w++)
			{
				if(w == iw && h == ih) continue;
				if(judge(w, h, iw, ih)){
					if(judge(mw, mh, w, h)){
						mw = w;
						mh = h;
					}
				}
			}
		}
		printf("%d %d\n", mh, mw);
		mw = 152;
		mh = 151;
	}
	return 0;
}