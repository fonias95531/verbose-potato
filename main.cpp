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
    
     if (strings.empty()) {
        std::cout << "Warning: No data to write to file." << std::endl;
        return;
    }

    if (filename.empty()) {
        std::cerr << "Error: Output filename cannot be empty!" << std::endl;
        return;
    }

    std::ofstream outputFile(filename);
    
    if (!outputFile.is_open()) {
        std::cerr << "Error: Failed to open file '" << filename 
                  << "' for writing. Check permissions." << std::endl;
        return;
    }

    int writtenCount = 0;
    for (const auto& str : strings) {
        outputFile << str << "\n";  // \n вместо endl для производительности
        writtenCount++;
    }
    
    outputFile.close();
    
    std::cout << "Successfully wrote " << writtenCount 
              << " lines to file: " << filename << std::endl;

}

// Каркас программы с последовательным вызовом функций
int main() {

    std::vector<std::string> data1 = {"Line 1", "Line 2", "Line 3"};
    writeStringsToFile(data1, "test1.txt");
    
    std::vector<std::string> data2;
    writeStringsToFile(data2, "test2.txt");

    writeStringsToFile(data1, "");

    return 0;
}
