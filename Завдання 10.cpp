#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    // Текст, в якому будемо шукати слова
    string text = "I finished the project and decided to rest for the day.";
    
    // Регулярний вираз для пошуку слів, що закінчуються на "ed"
    regex pattern("\\b\\w+ed\\b");
    
    // Шукаємо слова
    sregex_iterator it(text.begin(), text.end(), pattern);
    sregex_iterator end;

    // Виводимо знайдені слова
    cout << "Words ending with 'ed':" << endl;
    while (it != end) {
        cout << it->str() << endl;
        ++it;
    }

    return 0;
}
