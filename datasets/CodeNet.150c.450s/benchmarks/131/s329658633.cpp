#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main(){
	while(1){
		char a[20];
		int L;
		cin>>a>>L; 
		if(!L) break;

		int hist[30], after=0, count=1;
		int ans1, ans2;
		hist[0] =atoi(a);
		while(1){
			fill(a+strlen(a), a+L, '0');
			vector<int> max(L, 0), min(L, 0);
			for(int i=L-1; i>=0; i--){
				max[i] = min[i] = a[i]-'0';
			}
			sort(max.begin(), max.end());
			sort(min.begin(), min.end(),greater<int>());
			int imax=0, imin=0;
			for(int i=0; i<L; i++){
				if(max[i] == 0) imax*=10;
				else imax += max[i]*pow(10, i);
				imin += min[i]*pow(10, i);
			}
			after = imax - imin;
			bool flag=false;
			for(int i=0; i<count; i++){
				if(hist[i] == after){
					flag =true;
					ans1 = i;
					break;
				}
			}
			if(flag) break;
			hist[count++] = after;
			//itoa(after, a, 10);
			sprintf(a, "%d", after);
		}
		cout << ans1 << " " << after << " " << count-ans1 << endl;
	}
	return 0;
}
