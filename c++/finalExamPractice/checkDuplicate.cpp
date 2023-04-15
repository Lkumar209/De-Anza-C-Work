#include <iostream>
#include <string>
using namespace std;

class Word {
private:
    string word;
    string definition;

public:
    Word(string new_word, string new_definition) {
        word = new_word;
        definition = new_definition;
    }

    string toString() {
        return "WORD(" + word + ") DEFINITION(" + definition + ")";
    }

    bool isTheSameWord(Word* other) {
        return word == other->word;
    }

    bool find(string search) {
        return word.find(search) != string::npos || definition.find(search) != string::npos;
    }
};

Word* createWord(string new_word, string new_definition) {
    if (new_word.empty() || new_definition.empty() || new_word.find_first_not_of(' ') == string::npos || new_definition.find_first_not_of(' ') == string::npos) {
        return nullptr;
    }
    return new Word(new_word, new_definition);
}

int checkDuplicate(Word** array, int size, string search_word, int& count_word, int& count_both) {
    count_word = 0;
    count_both = 0;
    for (int i = 0; i < size; i++) {
        if (array[i]->find(search_word)) {
            count_word++;
            if (array[i]->isTheSameWord(createWord(search_word, ""))) {
                count_both++;
            }
        }
    }
    return count_word;
}

int main() {
    Word* words[5];
    words[0] = createWord("School", "An educational institution");
    words[1] = createWord("Computer", "An electronic device");
    words[2] = createWord("", "Empty word");
    words[3] = createWord(" ", "Whitespace word");
    words[4] = createWord("Library", "A place where books are kept");

    int count_word, count_both;
    int total_count = checkDuplicate(words, 5, "School", count_word, count_both);

    cout << "Total count: " << total_count << endl;
    cout << "Count word: " << count_word << endl;
    cout << "Count both: " << count_both << endl;

    return 0;
}
