#include "FIdo.h"

int main() {
    Library library;
    std::string input_filename, output_filename;
    std::string text;

    std::cout << "Enter the input file name: ";
    std::cin >> input_filename;
    library.create_file(input_filename, false);
    std::cout << "Enter the output file name: ";
    std::cin >> output_filename;
    library.create_file(output_filename, true);
    std::cout << "Enter the content, you want to cypher: ";
    std::cin >> text;
    library.write_to_input_file(text);
    library.cypher_file(3);

    return 0;
}