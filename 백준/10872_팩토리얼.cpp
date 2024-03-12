#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    int result = 1;
    cin >> n;

    for(int i = 1; i <= n; i++){
        result*=i;
    }

    cout << result;

    return 0;
}