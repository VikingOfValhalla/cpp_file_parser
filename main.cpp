#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string find_lines_exclude_comments(std::fstream &file_name, std::string search_character)
{
    std::string line;
    while(getline(file_name, line)) 
    {
        std::string characters = search_character;
        size_t found = line.find(characters);

        if(found == std::string::npos)
        {
            std::cout << line << "\n";
        }
    }
    return line;
}

int main (int argc, char* argv[])
{
    for (int x=0; x<argc; x++)
    {   
        std::fstream file_name_test(argv[x]);
        find_lines_exclude_comments(file_name_test, argv[2]);
    }
    return 0;
}
