#include <iostream>
using namespace std;
int max(int input[], int n)
{
    int max = input[0];
    for (int i = 1; i < n; i++)
    {
        if (input[i]>=max)
        {
            max = input[i];
        }
        
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int ans = max(input, n);
    cout << ans << endl;

    return 0;
}