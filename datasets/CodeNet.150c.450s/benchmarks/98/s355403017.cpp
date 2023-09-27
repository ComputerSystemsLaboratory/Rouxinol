#include <iostream> 
#include <vector>

using namespace std;

struct card{
	int taro;
	int hanako;
	int sum;
	card(int x,int y){
		taro = x;
		hanako = y;
		sum = x + y;
	}
	card()
		{
		}
	
/*	int getTaro(){
		return taro;
	}
	int getHanako(){
		return hanako;
	}
	int getSum(){
			return sum;
			}*/
};

	

int main(void){
	int n,m,num,sum1,sum2;
	while(1){
		cin >> n;
		cin >> m;
		int cou = 0;
		sum1 = sum2 = 0;
		if(n==0&&m==0){ break; }
		vector<int> vec1;
		vector<int> vec2;
		vector<card*> vec3;
		for(int i=0;i<n;i++){
			cin >> num;
			vec1.push_back(num);
			sum1 += num;
		}
		for(int i=0;i<m;i++){
			cin >> num;
			vec2.push_back(num);
			sum2 += num;
		}

		num = (sum1-sum2);

		for(int i=0;i<vec1.size();i++){
			for(int j=0;j<vec2.size();j++){
				if((vec1[i]-vec2[j])*2 == num){
					vec3.push_back(new card(vec1[i],vec2[j]));
						cou++;
					}
				}
			}
		for(int j=0;j<cou-1;j++){
			for(int i=0;i<cou-1;i++){
				if(vec3[i]->sum > vec3[i+1]->sum){
					card *c = new card();
					c = vec3[i];
					vec3[i] = vec3[i+1];
					vec3[i+1] = c;
				}
			}
		}
		if(cou == 0){
			cout << -1 << endl;
		}else{
			cout << vec3[0]->taro << " " << vec3[0]->hanako << endl;
		}
			
			for(int i=0;i<cou;i++){ delete vec3[i] ; }
		}
	
	return 0;
}