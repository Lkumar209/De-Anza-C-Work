#include <string>
#include <iostream>
class Word {
public:
    Word(std::string word, std::string definition);
    std::string toString();
    bool isTheSameWord(Word* other);
    bool find(std::string search);

private:
    std::string word;
    std::string definition;
};

Word::Word(std::string word, std::string definition) {
    this->word = word;
    this->definition = definition;
}

std::string Word::toString() {
    return "WORD(" + this->word + ") DEFINITION(" + this->definition + ")";
}

bool Word::isTheSameWord(Word* other) {
    return this->word == other->word && this->definition == other->definition;
}

bool Word::find(std::string search) {
    return this->word.find(search) != std::string::npos || this->definition.find(search) != std::string::npos;
}

Word* createWord(std::string word, std::string definition) {
    // Check if word and definition are not empty or all blanks
    if (word.find_first_not_of(' ') != std::string::npos &&
        definition.find_first_not_of(' ') != std::string::npos) {
        // Create a new Word object and return a pointer to it
        return new Word(word, definition);
    } else {
        // Return nullptr to indicate that the input parameters are invalid
        return nullptr;
    }
}

int main() {
    // Creating valid and invalid Word objects
    Word* validWord = createWord("School", "An educational institution");
    Word* invalidWord = createWord("", "An educational institution");
    
    // Check if validWord and invalidWord are not nullptr
    if (validWord != nullptr) {
        std::cout << validWord->toString() << std::endl; // output: WORD(School) DEFINITION(An educational institution)
        delete validWord; // free memory
    }
    
    if (invalidWord == nullptr) {
        std::cout << "Invalid Word object" << std::endl; // output: Invalid Word object
    }
}
