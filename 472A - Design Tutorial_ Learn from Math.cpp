#include <iostream>

bool isprime(int x);

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 , j = n ; i <= n && j >= 0 ; i++,j--)
        if(!isprime(i) && !isprime(j))
        {
            cout << i << "  " << j << endl;
            break;
        }
    return 0;
}

bool isprime(int x)
{
    for(int i = 2 ; i < x ; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
