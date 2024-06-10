#include <iostream>
#include <vector>
#include <String>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "world", "from", "VS code", "and the extension!"};

    for (const string& word : msg)
    {
        cout<< word << " ";
    }
    cout << endl;
}