#ifndef ChARACTER_HPP
#define CHARACTER_HPP
#include "raylib.h"
#include "BaseCharacter.hpp"

class Character : public BaseCharacter
{
public:
    Character(int winWidth, int winHeigt);
    virtual void tick(float deltaTime) override;
    virtual Vector2 getScreenPos() override;
private:
    int windowWidth{};
    int windowHeight{};
protected:
    Texture2D texture{LoadTexture("Characters/Player/CharAni-Full-NoWeps.png")};
    Texture2D idle{LoadTexture("Characters/Player/CharAni-Full-NoWeps.png")};
    Texture2D run{LoadTexture("Characters/Player/CharAni-Full-NoWeps.png")};
};
#endif