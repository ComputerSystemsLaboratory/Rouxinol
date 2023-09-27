#include <iostream>
#include <cstring>
using namespace std;

void shuffle(char *a , int h){
	char tmp[201];
	char mov[201];
	size_t len=strlen(a);
	strcpy(tmp , (const char*)a+h);
	strncpy(mov , a , h);
	mov[h]='\0';
	strcat(tmp , mov);
	strcpy(a , (const char*)tmp);
	return;
}

int main(){
	char card[201]={0};
	char ans[201]={0};
	int i , m;
	int h[100];
	while(1){
		cin>>card;
		m=strlen(card);
		if ( card[0]=='-'&& m==1 ) break;
	cin>>m;
		for(i=0;i<m;i++){
			cin>>h[i];
			shuffle(card , h[i]);
		}
		strcpy(ans , card);
		cout << ans << endl;
	}
	
	return 0;
}