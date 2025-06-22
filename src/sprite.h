#include <vector>
class Sprite {
    class Stages {
    };

    Sprite(int _age, std::vector<Stages> _stages) {
        age = _age;
        for (int i = 0; i < _stages.size(); i++) {
            stages.push_back(_stages[i]);
        }
    }

   private:
    void check_growth();
    int age;
    std::vector<Stages> stages;

   public:
    int get_age();
};