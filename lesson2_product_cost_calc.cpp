#include <iostream>

int main() {
    int productCost = 250;
    int deliveryCost = 50;
    int discount = 50;

    std::cout << "Стоимость товаров: " << productCost << "\r\n";
    std::cout << "Стоимость доставки: " << deliveryCost << "\r\n";
    std::cout << "Скидка: " << discount << "\r\n";
    std::cout << "----------------------------\r\n";
    std::cout << "Итог: " << productCost + deliveryCost - discount;
}