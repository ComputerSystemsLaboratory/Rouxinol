#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class person{
	private: int sum;
	public: person(int sum):sum(sum){}
		void setKoishi(){
			sum++;
		}
		int clear(){
			int res=sum;
			sum=0;
			return res;
		}
		bool haveAllKoishi(int allKoishi){
			return sum == allKoishi;
		}
};

class vessel{
	private:int sum;
	public:vessel(int sum):sum(sum){}
	       void setKoishi(int koishi){
			sum=koishi;
	       }
	       void getKoishi(){
			sum--;
	       }
	       bool isNothing(){
			return sum==0;
	       }
};
int main(){
	int sum;
	int n,p;
	while((cin>>n>>p)&&(n!=0)&&(p!=0)){
		vector<person> candidate;
		vessel aVessel(p);
		for(int i=0;i<n;i++){
			candidate.emplace_back(0);
		}
		for(int cnt=0;cnt<1000000;cnt++){
			if(!aVessel.isNothing()){
				aVessel.getKoishi();
				candidate[cnt%n].setKoishi();
			}else{
				if(candidate[cnt%n].haveAllKoishi(p)){
					cout << cnt%n << endl;
					break;
				}else{
					aVessel.setKoishi(candidate[cnt%n].clear());
				}
			}
		}
	}
  return 0;
}