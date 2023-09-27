#include<iostream>
using namespace std;

long int l[1000][3];

void swap(int a, int b, int c){
	int buf = l[c][a];
	l[c][a] = l[c][b];
	l[c][b] = buf;
}

//bubble
void sort(int c){
	for(int i = 0; i < 2; i++){
		for(int j = i; j < 2; j++){
			if(l[c][j] > l[c][j+1]) swap(j,j+1,c);	
		}
	}
}

int main(){
int buf;

cin >> buf;

for(int i = 0; i < buf; i++){	
	cin >> l[i][0] >> l[i][1] >> l[i][2];
	sort(i);
}

for(int j = 0; j < buf; j++){
	if(l[j][2]*l[j][2] == l[j][0]*l[j][0] +l[j][1]*l[j][1]){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

return 0;
}