#include<iostream>
#include<string>

char f(int on, int cnt){
	if(on==1){
		if(cnt==1)return '.';
		if(cnt==2)return ',';
		if(cnt==3)return '!';
		if(cnt==4)return '?';
		if(cnt==0)return ' ';
	}else if(on==2){
		if(cnt==1)return 'a';
		if(cnt==2)return 'b';
		if(cnt==0)return 'c';
	}else if(on==3){
		if(cnt==1)return 'd';
		if(cnt==2)return 'e';
		if(cnt==0)return 'f';
	}else if(on==4){
		if(cnt==1)return 'g';
		if(cnt==2)return 'h';
		if(cnt==0)return 'i';
	}else if(on==5){
		if(cnt==1)return 'j';
		if(cnt==2)return 'k';
		if(cnt==0)return 'l';
	}else if(on==6){
		if(cnt==1)return 'm';
		if(cnt==2)return 'n';
		if(cnt==0)return 'o';
	}else if(on==7){
		if(cnt==1)return 'p';
		if(cnt==2)return 'q';
		if(cnt==3)return 'r';
		if(cnt==0)return 's';
	}else if(on==8){
		if(cnt==1)return 't';
		if(cnt==2)return 'u';
		if(cnt==0)return 'v';
	}else if(on==9){
		if(cnt==1)return 'w';
		if(cnt==2)return 'x';
		if(cnt==3)return 'y';
		if(cnt==0)return 'z';
	}
}

int main(){
	int n;
	std::cin >> n;
	for(int i = 0; i < n; ++i){
		std::string s;
		std::cin>>s;
		int key[10];
		for(int i=0;i<10;++i)key[i]=0;
		int on=0;
		for(int i = 0; i < s.size();++i){
			if(s[i]!='0'){
				key[s[i]-'0']++;
				on=s[i]-'0';
				
			}else{
				if(on){
					int cnt=key[on];
					if(on==7 || on==9 && key[on]>=4)cnt%=4;
					else if(on==1 && key[on]>=5)cnt%=5;
					else if(on>=1 && on<=9 && on!=9 && on!=7 && on!=1 && key[on]>=3)cnt%=3;
					std::cout<<f(on,cnt);
					//std::cout<<key[on]<<std::endl;
					for(int i=0;i<10;++i)key[i]=0;
				}
				on=0;
			}//44033055505550666011011111090666077705550301110
		}
		std::cout<<std::endl;
	}
	return 0;
}