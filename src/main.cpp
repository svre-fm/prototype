#include <iostream>
#include <raylib.h>
#include "player.h"
#include "enemy.h"

using namespace std;

int main() {
    InitWindow(800, 600, "MyGame with Multiple Files");
    SetTargetFPS(60);

    Player player(100, 300); // สร้างตัวละคร Player
    Enemy enemy(500, 300);   // สร้างตัวละคร Enemy

    while (!WindowShouldClose()) {
        // อัปเดต
        player.update();
        enemy.update();

        // วาดกราฟิก
        BeginDrawing();
        ClearBackground(RAYWHITE);
        player.draw();
        enemy.draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}