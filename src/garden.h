#include <string>
class Garden {
   private:
    std::string background_image;
    bool has_background;

   public:
    Garden() : has_background(false) {}
    Garden(const std::string& _background_image) : background_image(_background_image), has_background(true) {}
};