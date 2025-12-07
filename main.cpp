#include <iostream>
#include <vector>
#include <string>

// Функция №1: Чтение строк из файла в вектор
std::vector<std::string> readStringsFromFile(const std::string& filename) {
    // TODO: Реализовать чтение из файла
    std::vector<std::string> result;
    return result;
}

// Функция №2: Вывод строк на экран
void printStringsToConsole(const std::vector<std::string>& strings) {
    // Проверяем, не пустой ли вектор
    if (strings.empty()) {
        std::cout << "No strings to display." << std::endl;
        return;  // выходим из функции
    }
    
    // Выводим все строки
    for (size_t i = 0; i < strings.size(); i++) {
        std::cout << strings[i] << std::endl;
    }
}

// Функция №3: Запись строк в файл
void writeStringsToFile(const std::vector<std::string>& strings, const std::string& filename) {
    // TODO: Реализовать запись в файл
}

// Каркас программы с последовательным вызовом функций
int main() {
    // Тест 1: обычный вектор
    std::vector<std::string> test1 = {"Line 1", "Line 2", "Line 3"};
    std::cout << "Test 1 - Normal vector:" << std::endl;
    printStringsToConsole(test1);
    
    // Тест 2: пустой вектор
    std::vector<std::string> test2;
    std::cout << "\nTest 2 - Empty vector:" << std::endl;
    printStringsToConsole(test2);
    
    // Тест 3: вектор с одной строкой
    std::vector<std::string> test3 = {"Single line"};
    std::cout << "\nTest 3 - Single line:" << std::endl;
    printStringsToConsole(test3);
    
    return 0;
}
