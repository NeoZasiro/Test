﻿#include <iostream>
using namespace std;

// Объявление класса coord
class coord {
    int x, y; // Приватные переменные x и y
public:
    coord() { x = 0; y = 0; } // Конструктор по умолчанию, устанавливающий x и y в 0
    coord(int i, int j) { x = i; y = j; } // Конструктор с параметрами
    int get_x() { return x; } // Метод для получения значения x
    int get_y() { return y; } // Метод для получения значения y
    coord operator+(coord ob2); // Перегрузка оператора + для сложения двух объектов класса coord
};

// Определение перегруженного оператора +
coord coord::operator+(coord ob2) {
    coord temp; // Создание временного объекта coord
    temp.x = x + ob2.x; // Сложение x координат двух объектов
    temp.y = y + ob2.y; // Сложение y координат двух объектов
    return temp; // Возвращение временного объекта
}

int main() {
    coord obj1(10, 5), // Создание объекта obj1 с координатами (10, 5)
        obj2(5, 3),  // Создание объекта obj2 с координатами (5, 3)
        obj3;        // Создание объекта obj3 без исходных координат

    obj3 = obj1 + obj2; // Сложение объектов obj1 и obj2, результат сохраняется в obj3

    cout << "obj1 + obj2: " << "\n" << "x=" << obj3.get_x() << "\t"; // Вывод результата сложения
    cout << "y=" << obj3.get_y() << "\n";
    sdasdasdas
    return 0;
}
