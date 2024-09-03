#include <iostream>

int main() {
    int totalSum = 4000000;
    int numberEntrances = 10;
    int numberApartments = 40;
    int eachSum = totalSum / (numberEntrances * numberApartments);

    std::cout << "Приветствуем вас в калькуляторе квартплаты!\r\n";
    std::cout << "Введите сумму, указанную в квитанции: " << totalSum << "\r\n";
    std::cout << "Сколько подъездов в вашем доме? " << numberEntrances << "\r\n";
    std::cout << "Сколько квартир в каждом подъезде? " << numberApartments << "\r\n";
    std::cout << "---- Считаем -----\r\n";
    std::cout << "Каждая квартира должна платить по " << eachSum << " руб.";
}