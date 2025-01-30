#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    string first, second;
    getline(cin, first, ' ');
    getline(cin, second);
    cout << floor((stoi(first) * stoi(second)) / 2);
}
