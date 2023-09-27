#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,j=0;
	int sum1=0,sum2=0,sum,cnt=0;
	string str1,str2,ans;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> str1 >> str2; 
		//cout << "str1=" << str1 << " " << "str2=" << str2 << endl;
	

		for(int i=0;i<str1.size();i++){
			if(str1[i]=='m'){
				if(i==0){
					sum1 = 1000; 
				} else {
					//cout << "str1[i-1]-'0'=" << str1[i-1]-'0' << endl; 
					sum1 = sum1 + 1000 * (str1[i-1]-'0');
				}
			}
	
			if(str1[i]=='c'){
				if(i==0||str1[i-1]=='m'){
					sum1 = sum1 + 100; 
				} else {
					//cout << "str1[i-1]-'0'=" << str1[i-1]-'0' << endl;
					sum1 = sum1 + 100 * (str1[i-1]-'0');
				}
			}

			if(str1[i]=='x'){
				if(i==0||str1[i-1]=='m'||str1[i-1]=='c'){
					sum1 = sum1 + 10; 
				} else {
					//cout << "str1[i-1]-'0'=" << str1[i-1]-'0' << endl;
					sum1 = sum1 + 10 * (str1[i-1]-'0');
				}
			}

			if(str1[i]=='i'){
				if(i==0||str1[i-1]=='m'||str1[i-1]=='c'||str1[i-1]=='x'){
					sum1 = sum1 + 1; 
				} else {
					sum1 = sum1 + 1 * (str1[i-1]-'0');
				}
			}
			//cout << "i=" << i << " " << "str1[i]=" << str1[i] << endl;
			//if(i!=0) cout << "str1[i-1]-'0'=" << str1[i-1]-'0' << endl;
			//cout << "sum1=" << sum1 << endl;
		}

		for(int i=0;i<str2.size();i++){
			if(str2[i]=='m'){
				if(i==0){
					sum2 = 1000; 
				} else {
					//cout << "str2[i-1]-'0'=" << str2[i-1]-'0' << endl; 
					sum2 = sum2 + 1000 * (str2[i-1]-'0');
				}
			}

			if(str2[i]=='c'){
				if(i==0||str2[i-1]=='m'){
					sum2 = sum2 + 100; 
				} else {
					//cout << "str2[i-1]-'0'=" << str2[i-1]-'0' << endl;
					sum2 = sum2 + 100 * (str2[i-1]-'0');
				}
			}

			if(str2[i]=='x'){
				if(i==0||str2[i-1]=='m'||str2[i-1]=='c'){
					sum2 = sum2 + 10; 
				} else {
					//cout << "str2[i-1]-'0'=" << str2[i-1]-'0' << endl;
					sum2 = sum2 + 10 * (str2[i-1]-'0');
				}
			}

			if(str2[i]=='i'){
				if(i==0||str2[i-1]=='m'||str2[i-1]=='c'||str2[i-1]=='x'){
					sum2 = sum2 + 1; 
				} else {
					sum2 = sum2 + 1 * (str2[i-1]-'0');
				}
			}
			//cout << "i=" << i << " " << "str2[i]=" << str2[i] << endl;
			//if(i!=0) cout << "str2[i-1]-'0'=" << str2[i-1]-'0' << endl;
			//cout << "sum2=" << sum2 << endl;
		}

		sum = sum1 + sum2;

		while(1000<=sum){
			sum = sum - 1000;
			cnt++;
		}
		if(1<cnt){
			ans += (cnt + '0');
			ans += 'm';
		} else if(cnt==1){
			ans += 'm';

		}
		cnt=0;

		while(100<=sum){
			sum = sum - 100;
			cnt++;
		}
		if(1<cnt){
			ans += (cnt + '0');
			ans += 'c';
		} else if(cnt==1){
			ans += 'c';
		}
		cnt=0;

		while(10<=sum){
			sum = sum - 10;
			cnt++;
		}
		if(1<cnt){
			ans += (cnt + '0');
			ans += 'x';
		} else if(cnt==1){
			ans += 'x';
		}
		cnt=0;

		while(1<=sum){
			sum = sum - 1;
			cnt++;
		}
		if(1<cnt){
			ans += (cnt + '0');
			ans += 'i';
		} else if(cnt==1){
			ans += 'i';
		}
		cnt=0;

		cout << ans << endl;
		ans.clear();
		sum1=0,sum2=0,sum=0;
		str1.clear();
		str2.clear();
		ans.clear();

	}

	return 0;
}