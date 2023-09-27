#include<iostream>
int rounds;
int Ascore, Bscore;
int Acard,Bcard;
int main(){
	while (true){
		std::cin >> rounds;
		if (rounds == 0)break;
		for (int i = 0; i < rounds; i++){
			std::cin >> Acard>> Bcard;
			if (Acard > Bcard){
				Ascore += (Acard + Bcard);
			}
			else if (Acard < Bcard){
				Bscore += (Acard + Bcard);
			}
			else{
				Ascore += Acard;
				Bscore += Bcard;
			}
		}
		std::cout << Ascore << " " << Bscore << "\n";
		Ascore = 0, Bscore = 0;
	}
	return 0;
}