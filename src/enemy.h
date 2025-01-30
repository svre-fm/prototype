#pragma once

class Enemy {
private:
    int x, y; // ตำแหน่งศัตรู
public:
    Enemy(int startX, int startY);
    void update();
    void draw();
};