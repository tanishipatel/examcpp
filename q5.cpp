#include <iostream>
using namespace std;


class Animal
{
public:
    
    virtual void makeSound() = 0;
    virtual void move() = 0;
};


class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "Lion: Roars" << endl;
    }

    void move()
    {
        cout << "Lion: Walks on land" << endl;
    }
};


class Fish : public Animal
{
public:
    void makeSound()
    {
        cout << "Fish: Blub Blub" << endl;
    }

    void move()
    {
        cout << "Fish: Swims in water" << endl;
    }
};

int main()
{
    Lion l;
    Fish f;

    
    Animal *animals[2];

    animals[0] = &l;
    animals[1] = &f;

    
    for (int i = 0; i < 2; i++)
    {
        animals[i]->makeSound();
        animals[i]->move();
        cout << endl;
    }

    return 0;
}