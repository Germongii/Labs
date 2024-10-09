#include "Weapon.h"
#include <iostream>
using namespace std;

// Конструктор с параметрами
Weapon::Weapon(string name, int damage, double weight) {
    this->name = name;
    this->damage = damage;
    this->weight = weight;
}

// Конструктор без параметров, задающий значения по умолчанию
Weapon::Weapon() {
    name = "Basic Sword";
    damage = 10;
    weight = 2.5;
}

// Метод для вывода информации об оружии
void Weapon::displayInfo() const {
    cout << "Weapon Name: " << name << endl;
    cout << "Damage: " << damage << endl;
    cout << "Weight: " << weight << " kg" << endl;
}

// Перегруженный метод для получения суммарного веса текущего объекта и дополнительного веса
double Weapon::getTotalWeight(double additionalWeight) const {
    return this->weight + additionalWeight;
}

// Метод для получения суммарного веса текущего объекта и переданного объекта, используя перегруженный метод
double Weapon::getTotalWeight(const Weapon& other) const {
    return getTotalWeight(other.weight);
}

// Деструктор
Weapon::~Weapon() {
    cout << "Destroying Weapon: " << name << endl;
}
