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
        std::cerr << "Error: Cannot open file for writing: " << filename << std::endl;
        return;
    }
    
    for (const auto& str : strings) {
        outputFile << str << std::endl;
    }
    
    outputFile.close();
}

// Каркас программы с последовательным вызовом функций
int main() {
    // Имена файлов
    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "test_output.txt";
    
    std::vector<std::string> testData = {
        "Первая строка для записи",
        "Вторая строка",
        "Третья строка с текстом",
        "",
        "Пустая строка выше",
        "Последняя строка файла"
    };

     writeStringsToFile(testData, outputFilename);

    std::cout << "File written. Checking contents..." << std::endl;
    std::ifstream checkFile(outputFilename);
    std::string line;
    while (std::getline(checkFile, line)) {
        std::cout << "Read: " << line << std::endl;
    }
    checkFile.close();
    
    return 0;

    // Функция №1: Чтение строк из файла
    std::vector<std::string> strings = readStringsFromFile(inputFilename);
    
    // Функция №2: Вывод строк на экран
    printStringsToConsole(strings);
    
    // Функция №3: Запись строк в файл
    writeStringsToFile(strings, outputFilename);
    
    return 0;
}
