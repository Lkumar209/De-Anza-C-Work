#include <iostream>
#include <vector>
#include <string>
 
class Word {
private:
    std::string word;
    std::string definition;
public:
    Word(std::string word, std::string definition) : word(word), definition(definition) {}
    std::string getWord() const { return word; }
    std::string getDefinition() const { return definition; }
    std::string toString() const { return "WORD(" + word + ") DEFINITION(" + definition + ")"; }
    bool isTheSameWord(const Word& other) const { return word == other.word; }
    bool find(const std::string& searchString) const { return word.find(searchString) != std::string::npos || definition.find(searchString) != std::string::npos; }
};

Word* createWord(const std::string& word, const std::string& definition) {
    if (word.empty() || definition.empty()) {
        return nullptr;
    }
    return new Word(word, definition);
}

int checkDuplicate(const std::vector<Word*>& wordList, const std::string& searchWord, int& wordCount, int& wordAndDefinitionCount) {
    wordCount = 0;
    wordAndDefinitionCount = 0;
    for (const auto& word : wordList) {
        if (word->getWord() == searchWord) {
            wordCount++;
            if (word->getDefinition() == searchWord) {
                wordAndDefinitionCount++;
            }
        }
    }
    return wordCount;
}

int removeThisWord(std::vector<Word*>& wordList, std::string searchWord) {
    int count = 0;
    auto it = wordList.begin();
    while (it != wordList.end()) {
        if ((*it)->getWord() == searchWord) {
            delete *it;
            it = wordList.erase(it);
            count++;
        }
        else {
            ++it;
        }
    }
    return count;
}

 using namespace std;

int main() {
  // Create some Word objects
  Word* word1 = createWord("school", "an educational institution");
  Word* word2 = createWord("computer", "an electronic device");
  Word* word3 = createWord("school", "a place for learning");
  Word* word4 = createWord("library", "a place where books are kept");
  Word* word5 = createWord("book", "a written or printed work consisting of pages");

  // Add the Word objects to a vector
  vector<Word*> wordList = { word1, word2, word3, word4, word5 };

  // Test the checkDuplicate function
  string searchWord = "school";
  int countWord = checkDuplicate(wordList, searchWord);
  cout << "Number of words with the word '" << searchWord << "': " << countWord << endl;

  // Test the removeThisWord function
  int numRemoved = removeThisWord(wordList, searchWord);
  cout << "Number of words removed with the word '" << searchWord << "': " << numRemoved << endl;

  // Test the checkDuplicate function again to see if the words were removed
  countWord = checkDuplicate(wordList, searchWord);
  cout << "Number of words with the word '" << searchWord << "' after removal: " << countWord << endl;

  // Clean up memory
  for (auto word : wordList) {
    delete word;
  }

  return 0;
}