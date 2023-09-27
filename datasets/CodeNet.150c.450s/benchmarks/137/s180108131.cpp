
#include <cstdio>

#include <iostream>

#include <cstring>

using namespace std;

typedef long long ll;

 

#define row 1001333  //取一个比h2(k)大的质数

#define col 20

 

char H[row][col];

 

ll h1(ll key){

	return key%row;

}

 

ll h2(ll key){

	return 1+(key%(row-1));

}

 

ll chtonum(char s){  //character to number

	if(s=='A') return 1;

	if(s=='C') return 2;

	if(s=='G') return 3;

	if(s=='T') return 4;

	return 0;

}

 

ll get_key(char s[]){  //生成key值

	ll sum=0,p=1;

	int len=strlen(s);

	for(ll i=0;i<len;i++){

		sum+=p*chtonum(s[i]);

		p*=5;

	}

	return sum;

}

 

void insert(char s[]){

	ll key,h;

	key=get_key(s);

	ll i =0;

	while(1){

		h=(h1(key)+i*h2(key))%row;  //根据key值生成对应的位置

		if(strcmp(H[h],s)==0) return ;//这个元素字典里已经有了

		else if (strlen(H[h])==0){

			strcpy(H[h], s);//如果该位置没有别的值，就把这个元素插进去

			return ;

		} 

		i++;//如果这个i对应的h的位置已经有元素了，那么继续寻找下一个i对应的位置

	}

}

 

bool find(char s[]){

	ll key,h;

	key=get_key(s);

	ll i=0;

	while(1){

		h=(h1(key)+i*h2(key))%row;

		if(strcmp(H[h],s)==0) return true;//如果找到了该元素

		else if (strlen(H[h])==0) return false;

		i++;

	}

	return false;

}

 

int main (){

	int n;

	char c[20],s[20];

	for(int i = 0;i<row;i++) H[i][0]='\0'; //把数组初始化 方便比较

	scanf("%d",&n);

	for(int i =0;i<n;i++){

		cin>>c>>s;

		if(c[0]=='i') insert(s);

		else {

			if(find(s)) cout<<"yes"<<endl;

			else cout<<"no"<<endl;

		}

	}

	return 0;

}

