#include<iostream>
using namespace std;
int main(){
   int house[5][4][11];
   int n,b,f,r,v;

   for(int i=1; i<=4; i++){
   	for(int j=1; j<=3; j++){
   		for(int k=1; k<=10; k++){
   			house[i][j][k] = 0;
   		}
   	}
   }

   cin >> n;

   for(int l=0; l<n; l++){
   	cin >> b >> f >> r >> v;
   	house[b][f][r] += v;
   }

   for(int i=1; i<=3; i++){
   	for(int j=1; j<=3; j++){
   		for(int k=1; k<=10; k++){
   			cout << " " << house[i][j][k];
   		}
   		cout << endl;
   	}
   	for(int l=0; l<20; l++){
   		cout << "#";
   	}
   	cout << endl;
   }

   	for(int j=1; j<=3; j++){
   		for(int k=1; k<=10; k++){
   			cout << " " << house[4][j][k];
   		}
   		cout << endl;
   	}

   return 0;
}
   