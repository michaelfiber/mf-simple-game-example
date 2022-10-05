#include "raylib.h"

int main(void) {
    
    // image coordinates
    int x = 200;
    int y = 150;

    // create the window
    InitWindow(400,300,"Simple Game Example");

    SetTargetFPS(60);

    // Load the texture to draw.
    Texture2D sprite = LoadTexture("resources/sprite.png");

    // Main Game Loop. Raylib provides the WindowShouldClose function. 
    while(!WindowShouldClose()) {
        

        // UPDATE EVERYTHING

        // update based on keyboard input:
        if (IsKeyDown(KEY_RIGHT)) x++;
        if (IsKeyDown(KEY_LEFT)) x--;
        if (IsKeyDown(KEY_UP)) y--;
        if (IsKeyDown(KEY_DOWN)) y++;

        
        // DRAW EVERYTHING

        // Draw the image:
        BeginDrawing();

        // Wipe the screen clear and set the background to white.
        ClearBackground(WHITE);
        
        // Draw the texture so its top left corner is at the pixel x,y
        DrawTexture(sprite, x, y, WHITE);

        EndDrawing();
    }

    // Clean up after yourself
    UnloadTexture(sprite);
    CloseWindow();

}