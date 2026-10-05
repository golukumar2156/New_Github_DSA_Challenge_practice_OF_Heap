#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 2, 6, 3};
    int n = arr.size();
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    int up = 1;
    int down = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1])
        {
            up = down + 1;
            cout << "up: " << up << endl;
        }
        else if(arr[i] < arr[i-1])
        {
            down = up + 1;
            cout << "down: " << down << endl;
        }
    }
    cout << "Longest Alternating Subsequence: "<< max(up, down);

    return 0;
}