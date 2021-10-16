#include <iostream>
using namespace std;

int main()
{int x;
cout<<"Enter Number of rows";
cin>>x;
	int nums[2][3];

    // = [[4, 5, 6],
    //    [5, 6. 8]]

    for (int i = 0; i < x; i++) {
        cout<< "Enter number "<<i + 1<<": ";
        cin >> nums[x];
    }
    
    int ans = 0;
    for (int i = 0; i < x; i++)
    {
        ans = ans + nums[i];
    }
    
}

