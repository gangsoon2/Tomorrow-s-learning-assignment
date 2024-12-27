#include <iostream>

using namespace std;

class Animal {
    public:
        Animal() 
        {
            cout << "Animal ������ ȣ��" << endl;
        }

        virtual ~Animal() 
        {
            cout << "Animal �Ҹ��� ȣ��" << endl;
        }

    virtual void makeSound() const = 0;
};

class Dog : public Animal 
{
    public:
        Dog() 
        {
            cout << "Dog ������ ȣ��" << endl;
        }

        ~Dog() 
        {
            cout << "Dog �Ҹ��� ȣ��" << endl;
        }

        void makeSound() const override 
        {
            cout << "�۸�!" << endl;
        }
};

class Cat : public Animal 
{
    public:
        Cat() 
        {
            cout << "Cat ������ ȣ��" << endl;
        }

        ~Cat() 
        {
            cout << "Cat �Ҹ��� ȣ��" << endl;
        }

    void makeSound() const override    
    {
        cout << "�߿�~" << endl;
    }
};

class Cow : public Animal 
{
    public:
        Cow() 
        {
            cout << "Cow ������ ȣ��" << endl;
        }

        ~Cow() 
        {
            cout << "Cow �Ҹ��� ȣ��" << endl;
        }

    void makeSound() const override 
    {
        cout << "����~" << endl;
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
