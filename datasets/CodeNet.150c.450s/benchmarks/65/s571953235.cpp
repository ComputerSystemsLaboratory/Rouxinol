#include<iostream>
#include<vector>
#include<string>

class Card{
protected:
    int value;
    std::string pattern;
public:
    Card(std::string pattern,int value);
    Card(std::string card);
    int getValue();
    std::string getPattern();
    std::string getCard();
};

Card::Card(std::string pattern,int value){
    this->pattern = pattern;
    this->value = value;
}

Card::Card(std::string card){
    this->pattern = card.substr(0,1);
    this->value = std::stoi(card.substr(1,1));
}

int Card::getValue(){
    return value;
}

std::string Card::getPattern(){
    return pattern;
}

std::string Card::getCard(){
    return pattern + std::to_string(value);
}

class CardSort{
protected:
    std::vector<Card> cardSet;
public:
    CardSort(std::vector<Card> cardSet);
    std::vector<Card> getCardSet();
    void showCardSet();
    void startBubbleSort();
    void startSelectSort();
};

CardSort::CardSort(std::vector<Card> cardSet){
    this->cardSet = cardSet;
}

std::vector<Card> CardSort::getCardSet(){
    return this->cardSet;
}

void CardSort::showCardSet(){
    for(int i = 0;i < cardSet.size();i++){
        std::cout << (i ? " " : "") << cardSet[i].getCard();
    }
    std::cout << std::endl;
}

void CardSort::startBubbleSort(){
    for(int i = 0;i < cardSet.size() - 1;i++){
        for(int j = cardSet.size() - 1;j >= i + 1;j--){
            if(cardSet[j].getValue() < cardSet[j-1].getValue()){
                Card tmp = cardSet[j];
                cardSet[j] = cardSet[j-1];
                cardSet[j-1] = tmp;
            }
        }
    }
}

void CardSort::startSelectSort(){
    for(int i = 0;i < cardSet.size();i++){
        int minj = i;
        for(int j = i;j < cardSet.size();j++){
            if(cardSet[j].getValue() < cardSet[minj].getValue()){
                minj = j;
            }
        }
        if(i != minj){
            Card tmp = cardSet[minj];
            cardSet[minj] = cardSet[i];
            cardSet[i] = tmp;
        }
    }
}

bool isStable(std::vector<Card> bubble,std::vector<Card> select){
    for(int i = 0;i < bubble.size();i++){
        if( (bubble[i].getPattern() != select[i].getPattern() || bubble[i].getValue() != select[i].getValue()) ){
            return false;
        }
    }
    return true;
}

int main(){
    
    int content;
    std::cin >> content;

    std::vector<Card> vec;

    int i = 0;
    std::string input;

    while(std::cin >> input){
        
        Card c = Card(input);
        vec.push_back(input);

        i++;
        if(i >= content){
            break;
        }
    }

    CardSort bs = CardSort(vec);
    CardSort ss = CardSort(vec);

    bs.startBubbleSort();
    bs.showCardSet();
    std::cout << "Stable" << std::endl;

    ss.startSelectSort();
    ss.showCardSet();
    if( isStable(bs.getCardSet(),ss.getCardSet()) ){
        std::cout << "Stable";    
    }else{
        std::cout << "Not stable";
    }
    std::cout << std::endl;
    
    return 0;
}