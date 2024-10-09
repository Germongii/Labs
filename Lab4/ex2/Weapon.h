#ifndef WEAPON_H
#define WEAPON_H

#include <string>
using namespace std;

class Weapon {
private:
    string name;     // Название оружия
    int damage;      // Наносимый урон
    double weight;   // Вес оружия

public:
    // Конструкторы
    Weapon(string name, int damage, double weight);
    Weapon();

    // Методы
    void displayInfo() const;
    double getTotalWeight(const Weapon& other) const;
    double getTotalWeight(double additionalWeight) const;

    // Деструктор
    ~Weapon();
};

#endif // WEAPON_H
