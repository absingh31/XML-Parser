#include <iostream>
#include <fstream>

#include "abXMLParser.hpp"

int main(int argc, char **argv) {
    // abXMLParser parserObj("data.xml");

    // std::string query = "planes_for_sale.ad.model";
    // abvector<std::string> results = parserObj.get_data(query);

    // std::cout << "Data is: " << results[0] << " Type is: " << results[1] << std::endl;

    // bool success = parserObj.set_data(query, std::string("Night Hawk"), std::string("array"));
    // abvector<std::string> results1 = parserObj.get_data(query);

    // std::cout << "Data is: " << results1[0] << " Type is: " << results1[1] << std::endl;

    std::cout << "Query entered is not right. \nPlease enter a valid query.\n" 
                      "Ex:\n1). GET(\"planes_for_sale.model.year\");\n"
                           "2). SET(\"planes_for_sale.model.year\", 1901, int);\n\n\n";
    return 0;

    while(true) {
        std::string input;
        std::getline(std::cin, input);
        std::cout << "Input is: " << input << "Length of input is: " << input.size() << std::endl;

        std::string get_or_set = input.substr(0, 3);
        std::string query = input.substr(input.find_first_of("\"") + 1, (input.find_last_of("\"") - 1 - input.find_first_of("\"")));

        std::cout << get_or_set << "\n" << query << std::endl;
    }
}