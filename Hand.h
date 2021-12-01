#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h> 
#include "Card.h"
class Hand{       // Deck obj
    public:
        void pullCard(std::vector<Card>*deck){
            int s = rand() % deck->size();
            thisHand.push_back(deck->at(s));
            deck->erase(deck->begin()+s);
            
            //Card::printDeck(*deck);
        }
        static void genDeck(std::vector<Card>* deck){
            for(int x = 1; x<=4; x++){
                for(int i = 1; i<=13;i++){
                    Card c(std::vector<int>{x,i});
                    deck->push_back(c);
                }
            }
        }
        Card get(int idx){
            return thisHand.at(idx);
        }
        std::vector<Card> getArr(){
            return thisHand;
        }
    private:
        std::vector<Card> thisHand;
    













};