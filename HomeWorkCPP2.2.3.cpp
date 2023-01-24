#include <iostream>
#include <locale.h>

struct address {
    std::string sity;
    std::string street;
    int numhouse;
    int numflat;
    long index;
};

void print(address& cities) {
    std::cout << "Город:\t\t" << cities.sity << std::endl;
    std::cout << "Улица:\t\t" << cities.street << std::endl;
    std::cout << "Номер дома:\t" << cities.numhouse << std::endl;
    std::cout << "Номер квартиры:\t" << cities.numflat << std::endl;
    std::cout << "Индекс:\t\t" << cities.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    address cities1 = { "Москва", "Арбат", 12, 8, 1234560 };
    address cities2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    print(cities1);
    std::cout << std::endl;
    print(cities2);
}