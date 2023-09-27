#include<iostream>

using namespace std;

//??\?????????
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){

	int num,i,j;
	
	cin >> num;
	
	int a[num],b[num],c[num];
	
	for(i=0;i<num;i++){
		cin >> a[i] >> b[i] >> c[i];
	}
	
	int t[3];
	for(i=0;i<num;i++){
		t[0] = a[i];
		t[1] = b[i];
		t[2] = c[i];
		
		int max,str;
		str = 1;
		while(str<=3){
			max = t[str-1];
			for(j=str;j<3;j++){
				if(max<t[j]){
					max = t[j];
					swap(t[str-1],t[j]);
				}
			}
			str++;
		}
		if(t[0]*t[0]==t[1]*t[1]+t[2]*t[2])
			cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}