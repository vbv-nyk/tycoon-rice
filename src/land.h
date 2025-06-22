// need to figure out a way to get the display size
// relatively place the land
// menton the land pos and land size
// hopefully sfml reveals a path
#include <string>
#include <vector>

#include "sprite.h"

class Land {
    class Grid {
        int nr;
        int nc;
        std::vector<Sprite> sprites;

       public:
        Grid(int _nr, int _nc) : nr(_nr), nc(_nc) {}
    };

   private:
    // You define the rows and columns of your grid and your grid is flexed across your land
    // The grid will always take up all the available space on the landd
    float height;
    float width;
    float posX;
    float posY;
    std::string background;
    Grid grid;

   public:
    // The land will have a height, width and you can place the land anywhere on the screen.
    // The land will contain grids with rows and columns flexing across the screen
    // You just mention which boxes you need to place the sprite on and how you want to scale it
    Land() : height(100.0), width(100.0), posX(0.0), posY(0.0), grid(3, 3) {}
    Land(float _height, float _width, float _posX, float _posY) : height(_height), width(_width), posX(_posX), posY(_posY), grid(3, 3) {}

    // positions here are grid row begin, row end, col start, col end
    // you can then mention how you want to position the sprite
    void addSprite(int rb, int re, int cb, int ce);
    void setBackground(const std::string& _background);
};