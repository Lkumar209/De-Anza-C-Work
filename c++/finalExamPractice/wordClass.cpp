#include <string>
#include <iostream>
class Word {
private:
    std::string word;
    std::string definition;

public:
    Word(std::string word, std::string definition) {
        this->word = word;
        this->definition = definition;
    }

    std::string toString() {
        return "WORD(" + word + ") DEFINITION(" + definition + ")";
    }

    bool isTheSameWord(Word other) {
        return this->word == other.word;
    }

    bool find(std::string searchString) {
        return this->word.find(searchString) != std::string::npos || 
               this->definition.find(searchString) != std::string::npos;
    }
};


int main() {
    Word word1("School", "An educational institution");
    Word word2("Computer", "An electronic device");
    
    // Testing toString() method
    std::cout << word1.toString() << std::endl; // output: WORD(School) DEFINITION(An educational institution)
    std::cout << word2.toString() << std::endl; // output: WORD(Computer) DEFINITION(An electronic device)

    // Testing isTheSameWord() method
    Word word3("School", "A place of learning");
    std::cout << word1.isTheSameWord(word2) << std::endl; // output: false
    std::cout << word1.isTheSameWord(word3) << std::endl; // output: true

    // Testing find() method
    std::cout << word1.find("education") << std::endl; // output: true
    std::cout << word2.find("computer") << std::endl; // output: true
    std::cout << word1.find("place") << std::endl; // output: false
}
