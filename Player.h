#include <string>
#include <iostream>
class Player{
    public:
    static bool userWantsToPlay(){
        std::cout << "Would you like to play? (y/n): ";
        std::string str;
        std::cin >> str;
        if(str == "n"){
            return false;
        }
        else{return true;}
    }




    private:



};