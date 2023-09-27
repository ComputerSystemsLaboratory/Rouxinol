#include <iostream>
#include <string>

using namespace std;
int main(){
	string str,order,space ;
	char temp;
	int q,a,b;
	cin>> str ;
	cin>> q;
	for(int i=0;i<q;i++){
		cin >> order;
		if (order =="print"){
			cin >> a >> b;
			for(int j=a;j<=b;j++){
				cout << str[j];
			}
			cout << "\n";
		}
		
		else if(order == "replace"){
			cin >> a >> b ;
			cin >> space;
			for(int j=a;j<=b;j++){
				str[j]=space[j-a];
			}
		}
		
		else {
			cin >> a >>b ;
			for(int j=0;j<(b-a+1)/2;j++){
					temp=str[a+j];
					str[a+j]=str[b-j];
					str[b-j]=temp;
			}
		}

	}

		return 0;
}