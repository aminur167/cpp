#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// count vowels in string
int countVowels(string s) {
    int count = 0;
    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

// reverse string without library function
string reverseStr(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - 1 - i]);
    return s;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Original:  " << text << endl;
    cout << "Reversed:  " << reverseStr(text) << endl;
    cout << "Vowels:    " << countVowels(text) << endl;
    cout << "Length:    " << text.length() << endl;

    // convert to uppercase
    string upper = text;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "Uppercase: " << upper << endl;

    return 0;
}
