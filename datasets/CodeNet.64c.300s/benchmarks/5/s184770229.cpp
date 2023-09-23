#include <iostream>
#include <algorithm>
using namespace std;
    
int main(){
	int data,m[10];

	
	for (int j=0;j<=9;j++){
			while(cin >> data){
			if (data<=10000 && data >= 0 ) {
			m[j]=data;
			break;
		}
			}
	}

for (int i=0;i<=8;i++){

	if (m[i] < m[i+1]){
		swap(m[i],m[i+1]);
	for (int j=i;j>0;j--){
	if (m[j] > m[j-1])
		swap(m[j],m[j-1]);
	}
	}
}


 
for (int i=0;i<=2;i++){
cout <<  m[i] <<'\n';
}

    return 0;
}