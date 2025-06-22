#include <string>
#include <vector>
class Sprite {
    class Stage {
       private:
        int required_age;
        std::string sprite_image;

       public:
        Stage(int _required_age, const std::string& _sprite_image) : required_age(_required_age), sprite_image(sprite_image) {}
    };

   private:
    int age;
    std::vector<Stage> stages;

   public:
    int get_age();
    void age_forward();
    Sprite(int _age, const std::vector<Stage>& _stages) : age(_age), stages(_stages) {}
};