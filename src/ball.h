#pragma once

class Ball
{
public:
    Ball();
    void Update();
    void Draw();

private:
    int x;
    int y;
    int speedX;
    int speedY;
    int radius;
};