#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string nums[9]={"one","two","three","four","five","six","seven","eight","nine"};
    if (n<=0) {
        cout<<"Enter a positive num!ber";
    }
    else{
        if(n<=9){
            cout<<nums[n-1];
        }
        else{
            cout<<"Greater than 9";
        }
    }
    return 0;
}