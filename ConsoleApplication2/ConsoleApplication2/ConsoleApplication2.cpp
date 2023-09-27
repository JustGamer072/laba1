#include <windows.h>
// C4067a.cpp
// compile with: cl /Za

#include <iostream>
#include <windows.h>

int main() {
    std::cout << "HELLO" << std::endl;
    std::cout << std::endl;
    std::cout << " HELLO!!! " << std::endl;
    std::cout << std::endl << std::endl << std::endl << std::endl;
    std::cout << "SQUARE" << std::endl;
    std::cout << std::endl;
    std::cout << "       * * * * * * *" << std::endl;
    std::cout << "       *           *" << std::endl;
    std::cout << "       *           *" << std::endl;
    std::cout << "       *           *" << std::endl;
    std::cout << "       *           *" << std::endl;
    std::cout << "       *           *" << std::endl;
    std::cout << "       * * * * * * *" << "\n";
    std::cout << std::endl << std::endl << std::endl << std::endl;
    std::cout << "AHKETA" << std::endl;
    std::cout << std::endl;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "       Прізвище : Іваниченко" << "\n";
    std::cout << std::endl;
    std::cout << "           Ім'я : Владислав" << std::endl;
    std::cout << std::endl;
    std::cout << "    По батькові : Ігорович" << std::endl;
    std::cout << std::endl;
    std::cout << "          Стать : Чоловіча" << std::endl;
    std::cout << std::endl;
    std::cout << "Дата народження : 2005-07-26" << std::endl;
    std::cout << std::endl;
    std::cout << "         Адреса : Паланочна 35/136" << std::endl;
    std::cout << std::endl;
    std::cout << " Номер телефону : +380 50 5541550" << std::endl;
    std::cout << std::endl;
    std::cout << " Місце навчання : ФПМ, ДНУ ім. Олеся Гончара" << std::endl;
    std::cout << std::endl;
    std::cout << "          Група : ПА-23-1" << std::endl;
    std::cout << std::endl;
    std::cout << "          Хоббі : Програмування" << std::endl;
    std::cout << "\n";
    system("pause");
    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
