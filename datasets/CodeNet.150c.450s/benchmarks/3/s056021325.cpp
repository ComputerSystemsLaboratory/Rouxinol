#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1, str2;
	string command;
	int a, b;
	int q;
	int i,j,k;
	
	cin >> str1 >> q;

	for(i=0;i<q;i++){
		cin >> command;
		if(command=="replace"){
			cin >> a >> b >> str2;
			k=0;
			for(j=a;j<=b;j++){
				str1[j]=str2[k];
				k++;
			}
		}
		else if(command=="reverse"){
			cin >> a >> b;
			k=b-a;
			str2=str1.substr(a,b-a+1);
			for(j=a;j<=b;j++){
				str1[j]=str2[k];
				k--;
			}
		}
		else if(command=="print"){
			cin >> a >> b;
			str2=str1.substr(a,b-a+1);
			cout << str2 << endl;
		}
	}
	return 0;
}