#include <bits/stdc++.h>

//??????????????????????????????????????????
char key[10][6] = {
  {}, //0
  {5, '.', ',', '!', '?', ' '},
  {3, 'a', 'b', 'c'},
  {3, 'd', 'e', 'f'},
  {3, 'g', 'h', 'i'},
  {3, 'j', 'k', 'l'},
  {3, 'm', 'n', 'o'},
  {4, 'p', 'q', 'r', 's'},
  {3, 't', 'u', 'v'},
  {4, 'w', 'x', 'y', 'z'}
};
		 

int main(){

  int N;

  std::cin >> N;

  //??\????????\???????????°??????????????????????????¨???????????¨???????????????
  while(N){
    int row = 0;
    int count = -1;
  
    std::string str;
    std::cin >> str;

    for(int i = 0; i < (int)str.size(); i++){
      int num = str[i] - '0'; //???'??°???' - '0'??? ??§????????¨???????????°?????????int ?????????(ex: '1'-'0' = 1)

      if(num != 0){
	row = num;
	count++;
      }else{

	if(row != 0) //?????????0?????´???????°?????????????
	  std::cout << key[row][ (count % key[row][0]) + 1 ]; 
	
	row = 0;
	count = -1;
	/*??????????????§???????????????count???0????????????????????????key??????????????????cout%key[row][0]????????????????????¨
	  5550???????????????????????\?????¨???????????????0????????£?????????????????¬??????3????????£????????????????????¨????????????????????????*/
      }

    }

    std::cout << std::endl;

    N--;
    
  }
  return 0;
}