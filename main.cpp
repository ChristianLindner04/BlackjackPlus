/* 11/30/21: Make Player class, hand class, moved some stuff from card class to hand class. Can now pull cards, asks user if they want to pull card.
 pretty much just need to try my hand at making the game. Maybe tmrw I can make the hit/stand/whatever mechanics */
#include <iostream>
#include "Card.h"
#include "Hand.h"
#include "Player.h"
int main(){
    srand(time(NULL));
    // gen deck
    std::vector<Card> deck;
    Hand::genDeck(&deck);
    
    Hand playerHand;
    Hand cpuHand;
    while(Player::userWantsToPlay()){
                                                         /*PULL CARDS*/
    playerHand.pullCard(&deck);
    std::cout << "The card that you drew first is: " << Card::toString(playerHand.get(playerHand.getArr().size()-1)) << std::endl;
    cpuHand.pullCard(&deck);
    std::cout << "The card that the dealer drew first is: " << Card::toString(cpuHand.get(cpuHand.getArr().size()-1)) << std::endl;}
    
    
    
}
