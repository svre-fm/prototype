#include "player.h"
#include "raylib.h"

Player::Player(int startX, int startY) : x(startX), y(startY) {}

void Player::update() {
    if (IsKeyDown(KEY_RIGHT)) x += 5;
    if (IsKeyDown(KEY_LEFT)) x -= 5;
}

void Player::draw() {
    DrawRectangle(x, y, 50, 50, RED);
}