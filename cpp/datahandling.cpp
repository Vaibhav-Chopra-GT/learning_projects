
#include <iostream>
#include <fstream>
using namespace std;
void space()
{
    ifstream fin("data.txt");
    char c;
    int alpha = 0;
    int sp = 0;
    int digits = 0;
    while (!fin.eof())
    {
        fin.get(c);
        if (c == ' ')
            sp++;
        else if (isalpha(c))
            alpha++;
        else if (isdigit(c))
            digits++;cout << digits;
    }
    cout << "Number of spaces = " << sp;
    cout << "Number of digits = " << digits;
    cout << "Number of Alphabets = " << alpha;
}

int main()
{
    space();

    return 0;
}