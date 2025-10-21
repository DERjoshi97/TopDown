#include "raylib.h"

int main()
{
    int windowWidth{1920};
    int windowHeight{1080};

    Vector2 mapPos{0.0f, 0.0f};

    InitWindow(windowWidth, windowHeight, "Mein Fenster");

    // Now that the window (and graphics device) is initialized, load textures
    Texture2D map = LoadTexture("world/worlds/OpenWorldMap24x24.png");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawTextureEx(map, mapPos, 0.f, 4.0, WHITE);

        EndDrawing();
    }
    // Unload GPU resources
    UnloadTexture(map);

    CloseWindow();
}