//曜日を当てる
#include<cstdio>
#include<string>

using namespace std;

int main(void){
	string name[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int mond[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int month,day,m,c;
	int i;	//ループカウンタ

	while(1){
		scanf("%d %d",&month,&day);
		if(month==0)break;
		m=1;	//月の始めの一月
		c=3;	//始まりは木曜日
		while(1){
			for(i=1;i<=mond[m-1];i++,c++)
				if(month==m && i==day) break;
			if(month==m && i==day) break;
			m++;
		}
		printf("%s\n",name[c%7].c_str());
	}

	return 0;
}