#include "vector.h"

class player {
private:
    //Players variables
    int health;
    vector position;

public:
    //Constructor
    explicit player(int Health = 10, vector Position = vector());

    //Position of the player
    vector getPosition();

    //Move the player
    void movePosition(vector moveVector);
};
