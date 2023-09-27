#include <iostream>
#include <string>

using namespace std;

int mToTen(string str){
	int num=0;
	int sum=0;
	char tmp[5]="mcxi";

	while(1){
		int ten=1;
		int keisuu=1;

		if(str.at(num)-'0'<=9 && str.at(num)-'0'>=2){
			keisuu = str.at(num)-'0';
		//	cout<<"keisuu="<<keisuu<<endl;
			num++;
		}

		for(int i=0;i<4;i++){
			if(str.at(num)==tmp[i]){

				if(i==0)ten=1000;
				else if(i==1)ten=100;
				else if(i==2)ten=10;
				else ten=1;
				num++;
				break;
			}
		}
	//	cout<<"keisuu="<<keisuu<<" ten="<<ten<<endl;

		sum += keisuu*ten;

		if(num==str.size())break;
	}

	return sum;
}
	
void tenToM(int num){
	int ans[4];

	for(int i=0;i<4;i++){
		ans[i] = num%10;
		num/=10;
	}
	
	for(int i=3;i>=0;i--){
		if(ans[i]>=2&&ans[i]<=9){
			cout<<ans[i];
		}
		else if(ans[i]==0)continue;

		if(i==3)cout<<'m';
		else if(i==2)cout<<'c';
		else if(i==1)cout<<'x';
		else cout<<'i';
	}
	cout<<endl;
}
	


int main(){

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		string str1,str2;
		cin>>str1>>str2;
		int ans = mToTen(str1)+mToTen(str2);
		tenToM(ans);

	}

	return 0;
}