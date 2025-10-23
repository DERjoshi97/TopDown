#ifndef WORLD_HPP
#define WORLD_HPP

#include "raylib.h"

class world
{
    public:
        world();
        void drawWorld();
    private:
        Vector2 mapPos{0.0f, 0.0f};
        Texture2D map = LoadTexture("world/worlds/Map.png");
    protected:
};


#endif