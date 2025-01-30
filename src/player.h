#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    int x, y; // ตำแหน่งตัวละคร
public:
    Player(int startX, int startY);
    void update();
    void draw();
};

#endif