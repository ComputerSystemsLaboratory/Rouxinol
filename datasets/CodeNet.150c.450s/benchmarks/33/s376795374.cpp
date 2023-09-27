#include<iostream>
using namespace std;

int main(){
	int x,y,s;
	cin>>x>>y>>s;
	while((x|y|s)!=0){
		int a=1,b=s-1;
		int top=0;
		while(a<=b){
			int a_max= (double)a*100/(100+x);
			int b_max= (double)b*100/(100+x);
			while((double)a_max*(100+x)/100 < a+1) a_max++;
			while((double)b_max*(100+x)/100 < b+1) b_max++;
			a_max--; b_max--;
			if((int)((double)a_max*(100+x)/100) == a && (int)((double)b_max*(100+x)/100) == b ){
				int price=(int)((double)a_max*(100+y)/100) + (int)((double)b_max*(100+y)/100);
				if(price>top) top=price;
			}
			a++; b--;
		}
		cout<<top<<endl;
		cin>>x>>y>>s;
	}
return 0;
}