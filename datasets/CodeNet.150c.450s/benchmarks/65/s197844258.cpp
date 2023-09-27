#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

void printCardsInLine(vector<pair<char, int> > &arr) {
	for(auto itr=arr.begin(); itr!=--(arr.end()); ++itr) {
		printf("%c%d ", (*itr).first, (*itr).second);
	}
	printf("%c%d\n", (*(--arr.end())).first, (*(--arr.end())).second);
}

int main() {
    int n, val;
    char suit;
    vector<pair<char, int> > cards, cards2;
    bool stable, flag;

    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        scanf(" %c%d", &suit, &val);
        cards.push_back(pair<char, int>(suit, val));
    }

    cards2 = cards;

    for(auto it=cards.begin(); it!=cards.end(); ++it) {
        for(auto rit=--cards.end(); rit!=it; --rit) {
            if((*rit).second<(*(rit-1)).second) {
                swap(*rit, *(rit-1));
            }
        }
    }
    printCardsInLine(cards);
    printf("Stable\n");

    stable = true;
    for(auto it=cards2.begin(); it!=cards2.end(); ++it) {
        auto mini = it;
        for(auto it2=it; it2!=cards2.end(); ++it2) {
            if(flag && (*it2).second<(*mini).second){
                mini = it2;
                stable = false;
            } else if(!flag && (*it2).second<(*mini).second) {
                mini = it2;
            }
            if((*it2).second==(*it).second && it!=it2) flag = true;
        }
        swap(*it, *mini);
        flag = false;
    }

    printCardsInLine(cards2);
    if(stable)  printf("Stable\n");
    else    printf("Not stable\n");
}