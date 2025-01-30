#include <iostream>
#include <string>
using namespace std;
 
unsigned problem_threshold = 2;
 
int main() {
    string count;
    unsigned result = 0;
    getline(cin, count);
    for (unsigned i = 0; i < stoi(count); i++) {
        string a, b, c;
        getline(cin, a, ' ');
        getline(cin, b, ' ');
        getline(cin, c);
        //Problem threshold is when 2/3 people can solve the problem meaning we increment the result by 1.
        if (stoi(a) + stoi(b) + stoi(c) >= problem_threshold) {
            result++;
        }
    }
    cout << result;
}
