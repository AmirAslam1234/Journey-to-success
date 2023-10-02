#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int> a)
{
    vector<int> temp(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        temp[i] = a[(a.size() - 1) - i];
    }
    return temp;
}

int main()
{

    int arr_count;
    cin >> arr_count;
    vector<int> arr(arr_count);
    int value;
    for (int i = 0; i < arr_count; i++)
    {
        cin >> value;
        arr[i] = value;
    }
    vector<int> res = reverseArray(arr);

    for (size_t i = 0; i < res.size(); i++)
    {
        cout << res[i];

        if (i != res.size() - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
