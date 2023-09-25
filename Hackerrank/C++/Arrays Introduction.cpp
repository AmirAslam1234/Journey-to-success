#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int q;
    int i,j,k;
    cin>>n>>q;
    vector<vector <int>> arr;
    //int *arr=new int(n);
    for (i = 0; i < n; i++)
    {
        vector<int> temp_arr;

        int size;
        cin>>size;
        int val;
        for (j = 0; j < size; j++)
        {
            cin>>val;
            temp_arr.push_back(val);
        }
        arr.push_back(temp_arr);
    }
    for (k = 0; k <q; k++)
    {
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}