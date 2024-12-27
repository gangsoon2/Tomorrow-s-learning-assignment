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
            cout << "�۸�!" << std::endl;
        }
};


class Cat : public Animal
{
    public:
        void makeSound() const override 
        {
            cout << "�߿�~" << std::endl;
        }
};

class Cow : public Animal 
{
    public:
        void makeSound() const override 
        {
            cout << "����~" << std::endl;
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
