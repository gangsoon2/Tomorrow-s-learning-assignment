#include <iostream>

using namespace std;

class Animal 
{
    public:
        virtual void makeSound() const = 0; 
};


class Dog : public Animal 
{
    public:
        void makeSound() const override 
        {
            cout << "港港!" << std::endl;
        }
};


class Cat : public Animal
{
    public:
        void makeSound() const override 
        {
            cout << "具克~" << std::endl;
        }
};

class Cow : public Animal 
{
    public:
        void makeSound() const override 
        {
            cout << "澜皋~" << std::endl;
        }
};

int main() 
{
    Animal* animals[] = { new Dog(), new Cat(), new Cow() 
};

    for (const auto& animal : animals) 
    {
        animal->makeSound();
    }

    for (auto& animal : animals) 
    {
        delete animal;
    }

    return 0;
}
