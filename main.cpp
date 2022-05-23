#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string input = "Turpentine and turtles.";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> whale_talk;

    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < vowels.size(); j++) {
            if (input[i] == vowels[j]) {
                whale_talk.push_back(input[i]);
                if (input[i] == 'e' || input [i] == 'u') {
                    whale_talk.push_back(input[i]);
                }
            }
        }
    }
    for (int k = 0; k < whale_talk.size(); k++) {
        cout << whale_talk[k];
    }
    cout << "\n";
}