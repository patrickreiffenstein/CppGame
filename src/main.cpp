#include "main.h"

//Adds the player
player player;

void render() {


}

void get_input() {
    for (int i = 8; i < 255; ++i) {
        if (GetAsyncKeyState(i) & 0x07) {//If key down
            if (i == VK_ESCAPE) exit(0);

            if (i == VK_UP) {
                player.movePosition(vector::up());
                player.getPosition().printVector();
            }
            if (i == VK_DOWN) {
                player.movePosition(vector::down());
                player.getPosition().printVector();
            }
            if (i == VK_LEFT) {
                player.movePosition(vector::left());
                player.getPosition().printVector();
            }
            if (i == VK_RIGHT) {
                player.movePosition(vector::right());
                player.getPosition().printVector();
            }
        }
    }
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
int main() {
    while(true) {
        get_input();

        render();
    }
}
#pragma clang diagnostic pop