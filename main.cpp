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
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }
}

// Функция №3: Запись строк в файл
void writeStringsToFile(const std::vector<std::string>& strings, const std::string& filename) {
    // TODO: Реализовать запись в файл
}

// Каркас программы с последовательным вызовом функций
int main() {
    const std::string inputFilename = "input.txt"; //указать полный путь к файлу
    const std::string outputFilename = "output.txt"; //аналогично выше
    
    std::vector<std::string> strings = readStringsFromFile(inputFilename);
    printStringsToConsole(strings);
    writeStringsToFile(strings, outputFilename);
    
    return 0;
}