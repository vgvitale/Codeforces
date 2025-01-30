#include <iostream>
#include <string>
 
using namespace std;
 
void longwords(string word)
{
    cout << word[0] + to_string(word.length() - 2)
        + word[word.length() - 1] << endl;
}
 
int main()
{
    string count, word;
    getline(cin, count);
    for (int i = 0; i < stoi(count); i++)
    {
        getline(cin, word);
        if (word.length() > 10)
        {
            longwords(word);
        }
        else
        {
            cout << word << endl;
        }
    }
}
