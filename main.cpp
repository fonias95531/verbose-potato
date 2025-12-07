#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Функция №1: Чтение строк из файла в вектор
std::vector<std::string> readStringsFromFile(const std::string& filename) {
    std::vector<std::string> result;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return result;
    }
    std::string line;
    while (std::getline(file, line)) {
        result.push_back(line);
    }
    file.close();
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