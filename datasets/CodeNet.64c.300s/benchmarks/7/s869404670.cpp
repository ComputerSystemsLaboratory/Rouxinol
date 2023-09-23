#include<iostream>
using namespace std;
int main(){
   int N,n,Cards[4][14];
   char m;

   for(int s=0; s<4; s++)
   	for(int t=1; t<=13; t++)
   		Cards[s][t] = 0;

   cin >> N;

   for(int i=0; i<N; i++){
   	cin >> m >> n;

   	if(m == 'S') Cards[0][n] = 1;
   	if(m == 'H') Cards[1][n] = 1;
   	if(m == 'C') Cards[2][n] = 1;
   	if(m == 'D') Cards[3][n] = 1;

   }

   for(int s=0; s<4; s++){
   	for(int t=1; t<=13; t++){
   		if(Cards[s][t]) continue;
   		if(s == 0) m = 'S';
   		if(s == 1) m = 'H';
   		if(s == 2) m = 'C';
   		if(s == 3) m = 'D';

   		cout << m << " " << t << endl;
   	}
   }

   return 0;

}