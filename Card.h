#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>  
class Card{
    public:
    /* Getters */
    int getSuit(){
        return this->suit;
    }
    int getNum(){
        return this->num;
    }
        /* returns suit, num in vector 
            card gen should be 
                Card name(Card::genCardNums());
        */
        static std::vector<int> genCardNums(){
            srand(time(NULL));
            int s = rand() % 4 + 1;
            int n = rand() % 13 + 1;
            return std::vector<int>{s,n};
        }
        /* Create deck vector, then pass thru to funct and it will add the cards */
        static void genDeck(std::vector<Card>* deck){
            for(int x = 1; x<=4; x++){
                for(int i = 1; i<=13;i++){
                    Card c(std::vector<int>{x,i});
                    deck->push_back(c);
                }
            }
        }
        static void printDeck(std::vector<Card>* deck){
            for(int i = 0; i< deck->size(); i++){
                // std::string str = Card::toString(&deck->at(i));
                std::cout << Card::toString(&deck->at(i)) << std::endl;
                std:: cout << "\n";
            }
        }
        // Constructor
        Card(std::vector<int> c){
            this->suit = c.at(0);
            this->num = c.at(1);
        }
    /* aids printing */
    static std::string toString(Card* c){
        // std::cout << this->suit << this->num;
        std::string str = "";
        switch(c->getNum()){
            case 11: 
                str+="Jack ";
                break;
            case 12: 
                str+="Queen ";
                break;
            case 13: 
                str+="King ";
                break;
            case 1:
                str+="Ace ";
                break;
            default: 
                str+= std::to_string(c->getNum());
                str+= " ";
        }
        switch(c->getSuit()){
            case 1: 
                str += "of Spades";
                break;
            case 2:
                str += "of Diamonds";
                break;
            case 3:
                str += "of Hearts";
                break;
            case 4:
                str += "of Clubs";
                break;
        }
        return str;
        }
    private:
        int suit;
        int num;
    













};