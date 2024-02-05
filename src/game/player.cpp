#include "player.h"

//Constructor
player::player(int Health, vector Position){
    health = Health;
    position = Position;
};

//Position of the player
vector player::getPosition() {
    return position;
}

//Move the player
void player::movePosition(vector moveVector) {
    position += moveVector;
}
