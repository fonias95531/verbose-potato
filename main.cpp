#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Функция №1: Чтение строк из файла в вектор
std::vector<std::string> readStringsFromFile(const std::string& filename) {
    // TODO: Реализовать чтение из файла
    std::vector<std::string> result;
    return result;
}

// Функция №2: Вывод строк на экран
void printStringsToConsole(const std::vector<std::string>& strings) {
    // TODO: Реализовать вывод на экран
}

// Функция №3: Запись строк в файл
void writeStringsToFile(const std::vector<std::string>& strings, const std::string& filename) {
    
    std::ofstream outputFile(filename);
    
    if (!outputFile) {
        std::cerr << "Error: Cannot open file '" << filename << "' for writing" << std::endl;
        return;
    }
    
    for (const auto& str : strings) {
        outputFile << str << std::endl;
    }
    
    outputFile.close();

}

// Каркас программы с последовательным вызовом функций
int main() {

    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "output.txt";
    
    std::vector<std::string> strings = readStringsFromFile(inputFilename);
    printStringsToConsole(strings);
    writeStringsToFile(strings, outputFilename);

    return 0;
}
