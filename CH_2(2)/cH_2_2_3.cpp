#include <iostream>

using namespace std;

class Animal {
    public:
        Animal() 
        {
            cout << "Animal 생성자 호출" << endl;
        }

        virtual ~Animal() 
        {
            cout << "Animal 소멸자 호출" << endl;
        }

    virtual void makeSound() const = 0;
};

class Dog : public Animal 
{
    public:
        Dog() 
        {
            cout << "Dog 생성자 호출" << endl;
        }

        ~Dog() 
        {
            cout << "Dog 소멸자 호출" << endl;
        }

        void makeSound() const override 
        {
            cout << "멍멍!" << endl;
        }
};

class Cat : public Animal 
{
    public:
        Cat() 
        {
            cout << "Cat 생성자 호출" << endl;
        }

        ~Cat() 
        {
            cout << "Cat 소멸자 호출" << endl;
        }

    void makeSound() const override    
    {
        cout << "야옹~" << endl;
    }
};

class Cow : public Animal 
{
    public:
        Cow() 
        {
            cout << "Cow 생성자 호출" << endl;
        }

        ~Cow() 
        {
            cout << "Cow 소멸자 호출" << endl;
        }

    void makeSound() const override 
    {
        cout << "음메~" << endl;
    }
};

int main() 
{
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

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
