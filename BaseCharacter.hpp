#ifndef BASECHARACTER_HPP
#define BASECHARACTER_HPP
#include "raylib.h"

class BaseCharacter
{
    public:
        BaseCharacter();
        Vector2 getWorldPos()
        {
            return worldPos;
        }
        virtual void tick(float deltaTime);
        void undoMovement();
        Rectangle getCollisionRech();
        virtual Vector2 getScreenPos()=0;
    private:
    protected:
        Vector2 worldPos{};
        Vector2 worldPosLastFrame{};
        float runningTime{};
        int frame{};
        float updateTime{1.f/12.f};
        int maxFrames{6};
        Vector2 velocity{};
        float speed{4.0f};
        float rightLeft{1.f};
        Texture2D texture{};
        Texture2D idle{};
        Texture2D run{};
        float width{};
        float height{};
        float scale{4.0f};
};
#endif