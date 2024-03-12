#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, result = 0;
    string *list_str = new string[n];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp_str;
        cin >> temp_str;

        for (int j = 0; j < i; j++)
        {
            if (list_str[j] == temp_str){
                
            }
        }
    }

    return 0;
}