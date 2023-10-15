#ifndef Food_h
#define Food_h

#include <string>

class Food
{
private:
    std::string drinks;

public:
    std::string getDrinks() const
    {
        return drinks;
    }

    void setDrinks(const std::string &newDrinks)
    {
        drinks = newDrinks;
    }
};

#endif
