#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>



class Card{
public:
  char c;
  int num;
  int default_index;
  Card(int c,int num,int di){this->c = c;this->num = num;this->default_index=di;}
};



int main(){
  int n;
  std::cin >> n;
  std::cin.ignore();
  
  std::string input;
  getline(std::cin,input);
  
  std::stringstream ss(input);
  std::vector<Card> card;
  for(int i=0;i<n;i++){
    std::string tmp;
    getline(ss,tmp,' ');
    card.push_back(Card(tmp[0],std::stoi(tmp.substr(1)),i));
  }
  
  //bubble
  int not_sort = 1;
  while(not_sort){
    not_sort = 0;
    for(int i=0;i<n-1;++i){
      if(card[i].num>card[i+1].num){
        std::swap(card[i],card[i+1]);
        not_sort = 1;
      }
    }
  }
  
  for(int i=0;i<card.size();++i){
    std::cout << card[i].c << card[i].num;
  	if(i==card.size()-1){
  		std::cout << std::endl;
  	}else{
  		std::cout << " ";
  	}
  }
	
  for(int i=1;i<card.size();++i){
  	if(card[i-1].num==card[i].num && card[i-1].default_index > card[i].default_index){
  		std::cout << "Not stable" << std::endl;
  		break;
  	}
  	if(i==card.size()-1){
    	std::cout << "Stable" << std::endl;
    }
  }
  
  //もとに戻す
  not_sort = 1;
  while(not_sort){
    not_sort = 0;
    for(int i=0;i<n-1;++i){
      if(card[i].default_index>card[i+1].default_index){
        std::swap(card[i],card[i+1]);
        not_sort = 1;
      }
    }
  }

  //selection
  int change = 0;
	
	for(int i=0;i<card.size();i++){
		int min_num=i;
		for(int j=i+1;j<card.size();++j){
			if(card[min_num].num > card[j].num){
				min_num = j;
			}
		}
		
		if(i!=min_num){
			change++;
			std::swap(card[i],card[min_num]);
		}
	}
  
	
  for(int i=0;i<card.size();++i){
    std::cout << card[i].c << card[i].num;
  	if(i==card.size()-1){
  		std::cout << std::endl;
  	}else{
  		std::cout << " ";
  	}
  }
  
  for(int i=1;i<card.size();++i){
  	if(card[i-1].num==card[i].num && card[i-1].default_index > card[i].default_index){
  		std::cout << "Not stable" << std::endl;
  		break;
  	}
  	if(i==card.size()-1){
    	std::cout << "Stable" << std::endl;
    }
  }
  
  
  return 0;
}