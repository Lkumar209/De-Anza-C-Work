#include <iostream>
#include <iomanip> 

void getSlashReport(const char* str, int& numSlashes, bool& beginsWithDoubleSlash, bool& onlyDoubleSlash)
{
    numSlashes = 0;
    beginsWithDoubleSlash = false;
    onlyDoubleSlash = false;

    if (str[0] == '/' && str[1] == '/')
    {
        beginsWithDoubleSlash = true;

        int i = 2;
        while (str[i] == ' ') 
        {
            i++;
        }

        if (str[i] == '\0')  
        {
            onlyDoubleSlash = true;
        }
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '/')
        {
            numSlashes++;
        }
    }
}

int main()
{
    char str1[] = "this/string/has/three/slashes";
    char str2[] = "//double/slashes";
    char str3[] = "//   double/slashes";
    char str4[] = "//    ";
    char str5[] = "no slashes here";

    int numSlashes;
    bool beginsWithDoubleSlash;
    bool onlyDoubleSlash;

    getSlashReport(str1, numSlashes, beginsWithDoubleSlash, onlyDoubleSlash);
    std::cout << "str1:\n";
    std::cout << "Number of slashes: " << numSlashes << '\n';
    std::cout << "Begins with double slash: "<< std::boolalpha  << beginsWithDoubleSlash << '\n';
    std::cout << "Only double slash: " << std::boolalpha << onlyDoubleSlash << '\n';

    getSlashReport(str2, numSlashes, beginsWithDoubleSlash, onlyDoubleSlash);
    std::cout << "\nstr2:\n";
    std::cout << "Number of slashes: " << numSlashes << '\n';
    std::cout << "Begins with double slash: " << std::boolalpha << beginsWithDoubleSlash << '\n';
    std::cout << "Only double slash: " << std::boolalpha << onlyDoubleSlash << '\n';

    getSlashReport(str3, numSlashes, beginsWithDoubleSlash, onlyDoubleSlash);
    std::cout << "\nstr3:\n";
    std::cout << "Number of slashes: " << numSlashes << '\n';
    std::cout << "Begins with double slash: " << std::boolalpha << beginsWithDoubleSlash << '\n';
    std::cout << "Only double slash: " << std:: boolalpha << onlyDoubleSlash << '\n';

    getSlashReport(str4, numSlashes, beginsWithDoubleSlash, onlyDoubleSlash);
    std::cout << "\nstr4:\n";
    std::cout << "Number of slashes: " << numSlashes << '\n';
    std::cout << "Begins with double slash: " << std::boolalpha << beginsWithDoubleSlash << '\n';
    std::cout << "Only double slash: " << std::boolalpha << onlyDoubleSlash << '\n';

    getSlashReport(str5, numSlashes, beginsWithDoubleSlash, onlyDoubleSlash);
    std::cout << "\nstr5:\n";
    std::cout << "Number of slashes: " << numSlashes << '\n';
    std::cout << "Begins with double slash: " << std::boolalpha << beginsWithDoubleSlash << '\n';
    std::cout << "Only double slash: " << std::boolalpha << onlyDoubleSlash << '\n';

    return 0;
}
