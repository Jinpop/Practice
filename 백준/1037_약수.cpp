#include <iostream>
using namespace std;

int main(){
    int n;
    int min, max;
    cin >> n;
    cin >> min;
    max = min;


    for (int i = 1; i < n; i++){
        int temp;
        cin >> temp;
        if (min > temp){
            min = temp;
        }
        else if (max < temp){
            max = temp;
        }
    }

    cout << min*max;

    return 0;
}