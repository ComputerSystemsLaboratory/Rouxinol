#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int a,L;
	while(cin>>a>>L && (a|L)!=0){
		int data[100];
		int count=1;
		bool f=true;
		data[0]=a;
		while(f){
			vector<int> num;
			for(int i=0;i<L;i++){
				num.push_back(a%10);
				a/=10;
			}
			sort(num.begin(),num.end());
			int b=0,c=0;
			for(int i=0;i<num.size();i++){
				b*=10;
				b+=num[i];
				c*=10;
				c+=num[num.size()-i-1];
			}
			data[count]=a=c-b;
			for(int i=0;i<count;i++){
				if(data[i]==a){
					f=false;
					cout<<i<<" "<<a<<" "<<count-i<<endl;
					break;
				}
			}
			count++;
		}
	}
}