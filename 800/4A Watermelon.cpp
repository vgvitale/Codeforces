#include <iostream>
 
using namespace std;
 
void watermelon(int w)
{
    if ((w > 3) && (w % 2 == 0))
    {
        cout <<  "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
 
int main()
{
    int w;
    cin >> w;
    watermelon(w);
}
