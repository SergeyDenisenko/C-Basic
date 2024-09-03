#include <iostream>

int main() {
    int circle = 4;
    int engine = 254;
    int wheels = 93;
    int rudder = 49;
    int wind = 21;
    int rain = 17;
    int speed = engine + wheels + rudder - wind - rain;

    std::cout << "--------------------------------\r\n";
    std::cout << "Супер гонки. Круг " << circle << "\r\n";
    std::cout << "--------------------------------\r\n";
    std::cout << "Шумахер (" << speed << ")\r\n";
    std::cout << "--------------------------------\r\n";
    std::cout << "Водитель: Шумахер\r\n";
    std::cout << "Скорость: " << speed << "\r\n";
    std::cout << "--------------------------------\r\n";
    std::cout << "Оснащение\r\n";
    std::cout << "Двигатель: +" << engine << "\r\n";
    std::cout << "Колеса: +" << wheels << "\r\n";
    std::cout << "Руль: +" << rudder << "\r\n";
    std::cout << "--------------------------------\r\n";
    std::cout << "Действия плохой погоды\r\n";
    std::cout << "Ветер: -" << wind << "\r\n";
    std::cout << "Дождь: -" << rain;
}