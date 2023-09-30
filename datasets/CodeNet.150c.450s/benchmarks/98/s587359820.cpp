#include<iostream>

//????????????(??????)
const int INF=1000;

//??????????????§
int n,m;
int s1[INF];
int s2[INF];

int tarouSum;
int hanakoSum;

int main() {
	while (true) {
		//?????????
		tarouSum=0;
		hanakoSum=0;

		//??\???1
		std::cin>>n>>m;
		//???????????¶
		if(n==0 && m==0)break;
		
		//??\???2
		for(int i=0;i<n;i++) {
			std::cin >> s1[i];
			hanakoSum+=s1[i];
		}
		for(int i=0;i<m;i++){
			std::cin >> s2[i];
			tarouSum+=s2[i];
		}
		//?????¬??????????????°
		int needPoint=hanakoSum-tarouSum;

		//???????\???°????????????????????????
		if (needPoint % 2 != 0) {
			std::cout<<-1<<std::endl;
			continue;
		}
		//????????¶??°?????¨??????????????????????????????????????????????????????????????????????????????
		needPoint/=2;
		bool ansExist=false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (s1[i] - s2[j] == needPoint) {
					std::cout<<s1[i]<<" "<<s2[j]<<std::endl;
					ansExist=true;
					break;
				}
			}
			if(ansExist)break;
		}
		if(!ansExist)std::cout<<-1<<std::endl;
	}
	return 0;
}