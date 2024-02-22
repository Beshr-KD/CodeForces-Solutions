#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int j = 0 ; j < n ; j++)
    {
        string a="",b="";
        cin >> b;
        for(int i = 0 ; i < b.length() ; i++)
            if(i%2 == 0 || i == b.length()-1)
                a += b[i];
        cout << a << endl;
    }
}
