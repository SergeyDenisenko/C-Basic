#include <iostream>

int main() {
    int shiftDuration = 480;
    int timeMakesOrder = 2;
    int timeCollectsOrder = 4;

    std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\r\n";
    std::cout << "Введите длительность смены в минутах: " << shiftDuration << "\r\n";
    std::cout << "Сколько минут клиент делает заказ? " << timeMakesOrder << "\r\n";
    std::cout << "Сколько минут кассир собирает заказ? " << timeCollectsOrder << "\r\n";
    std::cout << "-----Считаем-----\r\n";
    std::cout << "За смену длиной " << shiftDuration << " минут кассир успеет обслужить " << shiftDuration / (timeMakesOrder + timeCollectsOrder) << " клиентов.";
}