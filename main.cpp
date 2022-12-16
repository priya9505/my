#include <iostream>

using namespace std;

int main()
{
    int n, sum_odd = 0, sum_even = 0, result = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(i%2==0)
        {
            sum_even += array[i];
        }else
        {
            sum_odd += array[i];
        }
    }
    result = sum_even - sum_odd;
    cout << result << endl;
    return 0;
}
