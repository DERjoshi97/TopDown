#include "world.hpp"

world::world()
{

}

void world::drawWorld()
{
    DrawTextureEx(map, mapPos, 0.f, 4.0, WHITE);
}