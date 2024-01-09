#pragma once
#include <SDL.h>
#include <SDL_render.h>

class GameObject {
public:

    GameObject(SDL_Renderer* renderer, int x, int y, int width, int height, SDL_Color color);

    ~GameObject();

    virtual void draw();

    // Ajoutez d'autres méthodes si nécessaire

protected:
    SDL_Renderer* renderer;
    int x, y, width, height;
    SDL_Rect rect;
    SDL_Color color;
};