#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int w,h;
	while(cin >> h >> w,h|w){
		int aw=200,ah=200;
		bool ok=false;
		int cmin=100000;
		int d=w*w+h*h;
		for(int ch=1;ch<151;ch++){
			for(int cw=ch+1;cw<151;cw++){
				if(!ok&&d==cw*cw+ch*ch&&ch>h){
					aw=cw,ah=ch,ok=true;
					cout << ah << " "<< aw << endl; 
					break;
				}
				if(cw*cw+ch*ch>d)
					cmin=min(cmin,cw*cw+ch*ch);
			}
		}
		if(ok)
			continue;
		else{
			for(int ch=1;ch<151;ch++){
				for(int cw=ch+1;cw<151;cw++){
					if(cmin==cw*cw+ch*ch&&ah>ch)
						aw=cw,ah=ch;
				}
			}
		}
		cout << ah << " " << aw << endl;
	}
	return 0;
}