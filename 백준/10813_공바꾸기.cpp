#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = i+1;
    }


    for (int i = 0; i < m; i++)
    {
        int temp1, temp2, temp3;
        cin >> temp1 >> temp2;
        temp3 = v[temp1-1];
        v[temp1-1] = v[temp2-1];
        v[temp2-1] = temp3;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    } 

    return 0;
}