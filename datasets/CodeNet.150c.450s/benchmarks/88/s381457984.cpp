#include <iostream>
#define INF 100000
using namespace std;

int main(void){
	int h,w,d;
	int min;
	bool b;
	while (cin >> h >>w,h|w){
		b=false;
		min=INF;
		d=w*w+h*h;
		for(int i=h+1;i<150;i++)
			for(int j=i+1;j<150;j++)
				if(d==(i*i+j*j))
					cout << i <<' ' << j << endl,j=150,i=150,b=true;
		if(b)
			continue;
		for(int i=1;i<150;i++)
			for(int j=i+1;j<150;j++)
				if(min>(i*i+j*j)&&(i*i+j*j)>d)
					min=(i*i+j*j),h=i,w=j;
		cout << h <<' ' << w << endl;
	}
	return 0;
}