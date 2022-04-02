#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line = "Hello my name is sai";
    for(int i = 0; i < line.size(); i++)
    {
        cout <<line[i] << endl;
        if(line[i] == 'o')
        {
            cout << "Found o!\n";
            break;
        }
    }
    cout << "Done";
    return 0;
}