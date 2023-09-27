#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n,a,b,c,x;
	int i1;
	int count;
	int y;
	int check;
	int x2;

	while(1){
		cin >> n >> a >> b >> c >> x;
		if (n==0 && a==0 && b==0 && c==0 && x==0) break;
		
		count=0;
		x2=x;
		for(i1=0;i1<n;i1++){
			cin >> y;

			if (y==x && i1==0) continue;

			while(1){
				if (count>10000) break;
				
				x2=(a*x2+b)%c;
				count++;
				if (y==x2) break;
			}
		}

		if (count>10000) cout << -1 << endl;
		else cout << count << endl;

		
	}
}