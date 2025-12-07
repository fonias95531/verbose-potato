#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Функция №1: Чтение строк из файла в вектор
std::vector<std::string> readStringsFromFile(const std::string& filename) {
    std::vector<std::string> result;
    
    // Проверяем, не пустое ли имя файла
    if (filename.empty()) {
        std::cerr << "Error: Filename is empty!" << std::endl;
        return result;
    }
    // Открываем файл
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return result;
    }
    
    // Чтение строк из файла
    std::string line;
    int lineCount = 0;
    while (std::getline(file, line)) {
        result.push_back(line);
        lineCount++;
    }
    file.close();

    if (lineCount > 0) {
        std::cout << "Info: Successfully read " << lineCount << " lines from '" << filename << "'" << std::endl;
    } else {
        std::cout << "Warning: File '" << filename << "' is empty" << std::endl;
    }
    return result;
}

// Функция №2: Вывод строк на экран
void printStringsToConsole(const std::vector<std::string>& strings) {
    // TODO: Реализовать вывод на экран
}

// Функция №3: Запись строк в файл
void writeStringsToFile(const std::vector<std::string>& strings, const std::string& filename) {
    // TODO: Реализовать запись в файл
}

// Каркас программы с последовательным вызовом функций
int main() {
    // Имена файлов
    const std::string inputFilename = "C:\\Projects\\verbose-potato\\input.txt";
    const std::string outputFilename = "C:\\Projects\\verbose-potato\\output.txt";
    
    // Функция №1: Чтение строк из файла
    std::vector<std::string> strings = readStringsFromFile(inputFilename);
    
    // Функция №2: Вывод строк на экран
    printStringsToConsole(strings);
    
    // Функция №3: Запись строк в файл
    writeStringsToFile(strings, outputFilename);
    
    return 0;
}
