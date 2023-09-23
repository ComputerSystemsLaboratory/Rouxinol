#include <iostream>
#include <string>   
using namespace std;
 
int main(){
	int i;
	cin >> i;
	int a[i][3],b = 0;
	while(b < i){
		cin >> a[b][0] >> a[b][1] >> a[b][2];
		b++;
	}
	b = 0;
	string j[i];
	while(b < i){
		j[b] = "NO";
		if(a[b][0]*a[b][0] + a[b][1]*a[b][1] == a[b][2]*a[b][2]){
			j[b] = "YES";
		}
		if(a[b][0]*a[b][0] + a[b][2]*a[b][2] == a[b][1]*a[b][1]){
			j[b] = "YES";
		}		
		if(a[b][1]*a[b][1] + a[b][2]*a[b][2] == a[b][0]*a[b][0]){
			j[b] = "YES";
		}
	cout << j[b] << endl;	
	b++;	
	}	


}