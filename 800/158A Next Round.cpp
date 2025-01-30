#include <iostream>
#include <string>

using namespace std;

int main()
{
    string numParStr, adv;
    unsigned minScore = 0, count = 0, i = 0, numPar = 0;
    
    getline(cin, numParStr, ' ');
    getline(cin, adv);
    numPar = stoi(numParStr);
    string temp[numPar];
    unsigned values[numPar];
    
    for (i = 0; i < numPar - 1; i++)
    {
        getline(cin, temp[i], ' ');
        values[i] = stoi(temp[i]);
    }
    // next two lines get the last value of the line since we are using space character as a delimiter but we need to account for new line.
    getline(cin, temp[numPar - 1]);
    values[numPar - 1] = stoi(temp[numPar - 1]);
    
    minScore = values[stoi(adv) - 1];
    // reusing i for no reason.
    i = 0;
    while (values[i] > 0 && values[i] >= minScore && i < numPar)
    {
        i++;
        count++;
    }
    cout << count << endl;
}
