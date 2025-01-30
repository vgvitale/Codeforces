#include <iostream>
#include <string>

using namespace std;

string count;
int result = 0;

int main()
{
    getline(cin, count);
    for (unsigned i = 0; i < stoi(count); i++)
    {
        string code;
        getline(cin, code);
        if (code[0] == '+')
        {
            result++;
        }
        else if (code[0] == '-')
        { 
            result--;
        }
        else
        {
            if (code[1] == '+')
            {
                result++;
            }
            // last case is code[1] == '-'.
            else
            {
                result--;
            }
        }
    }
    cout << result << endl;
}
