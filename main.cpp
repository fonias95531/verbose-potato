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
    if (strings.empty()) {
        std::cout << "No strings to display." << std::endl;
        return;
    }
    
    // Выводим заголовок
    std::cout << "=== Displaying " << strings.size() << " lines ===" << std::endl;
    
    // Выводим строки с номерами
    for (size_t i = 0; i < strings.size(); i++) {
        std::cout << i + 1 << ". " << strings[i] << std::endl;
    }
    
    std::cout << "=== End of list ===" << std::endl;
}

// Функция №3: Запись строк в файл
void writeStringsToFile(const std::vector<std::string>& strings, const std::string& filename) {
    // TODO: Реализовать запись в файл
}

// Каркас программы с последовательным вызовом функций
int main() {
    std::vector<std::string> testData = {
        "Завтрак в 8:00",
        "Обед в 13:00",
        "Ужин в 19:00",
        "Сон в 23:00"
    };
    
    printStringsToConsole(testData);
    
    return 0;
}