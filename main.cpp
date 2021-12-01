#include <iostream>
#include "Card.h"
int main(){
    // gen card and print it
    Card c(Card::genCardNums());
    std::cout << Card::toString(&c) << std::endl;
    std::cout << "TEST ONE IS DONE" << std::endl;
    // gen deck and print it
    std::vector<Card> deck;
    Card::genDeck(&deck);
    Card::printDeck(&deck);


}