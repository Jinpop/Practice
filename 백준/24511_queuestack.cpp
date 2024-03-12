#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    bool *temp_list = new bool[n + 1];
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_list[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        // queue일 경우에만
        if (!temp_list[i])
        {
            dq.push_back(temp);
        }
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        dq.push_front(temp);
        cout << dq.back() << " ";
        dq.pop_back();
    }

    delete[] temp_list;

    return 0;
}