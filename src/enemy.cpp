#include "enemy.h"
#include <raylib.h>

Enemy::Enemy(int startX, int startY) : x(startX), y(startY) {}

void Enemy::update() {
    x += (GetFrameTime() * 50); // ศัตรูเคลื่อนที่ไปทางขวาเรื่อยๆ
}

void Enemy::draw() {
    
    DrawRectangle(x, y, 50, 50, RED);
}