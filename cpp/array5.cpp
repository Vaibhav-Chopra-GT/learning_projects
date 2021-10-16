#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int x, y;

  cout << "Enter number of elements";
  cin >> x;
  int arr[x];
  bool isin = false;
  for (int i = 0; i < x; i += 1)
  {
    cout << "Enter number " << i + 1 << "\n";
    cin >> arr[i];
  }
  cout << "Enter number";
  cin >> y;
  for (int i = 0; i < x; i += 1)
  {
    if (y == arr[i])
    {
      isin = true;
      cout << "Number is in array";
      break;
    }
  }
  if (isin == false)

  {
    cout << "Number is not in array";
  }

  return 0;
}