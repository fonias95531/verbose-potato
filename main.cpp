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
    // TODO: Реализовать вывод на экран
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
    // ВРЕМЕННЫЕ ТЕСТОВЫЕ ДАННЫЕ - УДАЛИТЬ ПЕРЕД СЛИЯНИЕМ!
    std::vector<std::string> testData = {
        "Первая строка для теста",
        "Вторая строка",
        "Третья строка программы",
        "Четвертая строка вывода",
        "Пятая последняя строка"
    };
    
    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "output.txt";
    
    // ВРЕМЕННО: используем тестовые данные
    // std::vector<std::string> strings = readStringsFromFile(inputFilename);
    std::vector<std::string> strings = testData;
    
    printStringsToConsole(strings);
    writeStringsToFile(strings, outputFilename);
    
    return 0;
}
