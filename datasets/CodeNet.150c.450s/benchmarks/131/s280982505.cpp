#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int l;
	long num;
	while(cin>>num>>l){
		if(num==0 && l==0) break;
		vector<long> a;
		a.push_back(num);
		int c=0,d=-1;
		while(1){
			vector<int> number;
			for(int i=0;i<l;i++){
				number.push_back(num%10);
				num /=10;
			}
			sort(number.begin(),number.end());
			long max=0,min=0;
			int t=1;
			for(int i=0;i<l;i++){
				max += t*number[i];
				min += t*number[number.size()-1-i];
				t *=10;
			}
			num=max-min;
			c++;
			for(int i=0;i<a.size();i++){
				if(num==a[i]){
					d=i;
					break;
				}
			}
			if(d>=0) break;
			a.push_back(num);
		}
		cout<<d<<" "<<num<<" "<<c-d<<endl;
	}
	return 0;
}