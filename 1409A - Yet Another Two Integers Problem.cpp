#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t,a,b;
    cin >> t;
    double x;
    for(int i = 0 ; i < t; i++)
    {
        cin >> a >> b;
        if(a > b)
            x = (a - b)/10.0;
        else
            x = (b - a)/10.0;
        int y = ceil(x);
        cout << y << endl;
    }
    return 0;
}
