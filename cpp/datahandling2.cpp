#include <iostream>
#include <fstream>
using namespace std;
void space()
{
    ifstream fin("data.txt");
    ofstream fout("data2.txt");
    char c;
    char a = '@';
    while (!fin.eof())
    {
        fin.get(c);
        if (c == ' ')
            fout.put(a);
        else
            fout.put(c);
    }
}
int main()
{
    space();

    return 0;
}