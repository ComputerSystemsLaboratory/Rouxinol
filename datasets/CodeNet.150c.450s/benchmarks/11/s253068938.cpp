#include "bits/stdc++.h"
using namespace std;

int main() {
int n,a;
//boolean???0??§????????????
//?????¨map??§????????¨?????????????????????????????????????????°??????????????§????????¨??????????°????????????????
/*????????????????????????????????????????????????for??§????????????????????????????????¨??§???????????????????????¨??¨ture??\???????\´???????????¨??????
??????????????????????????¨??????????°????????????????*/
bool cards[4][14]={};
char suit;
cin>>n;
for (int i = 0; i < n; ++i) {
	cin>>suit>>a;
	if(suit=='S'){cards[0][a]=1;}
	if(suit=='H'){cards[1][a]=1;}
	if(suit=='C'){cards[2][a]=1;}
	if(suit=='D'){cards[3][a]=1;}
}

for (int i = 0; i < 4; ++i) {
	for (int j = 1; j <= 13; ++j) {
		if(cards[i][j]==1)continue;
		if(i==0){cout<<"S"<<" "<<j<<endl;}
		if(i==1){cout<<"H"<<" "<<j<<endl;}
		if(i==2){cout<<"C"<<" "<<j<<endl;}
		if(i==3){cout<<"D"<<" "<<j<<endl;}
	}
}


return 0;
}