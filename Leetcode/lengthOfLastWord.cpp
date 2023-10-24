#include<iostream>
using namespace std;
int main(){
    string s="Hello World! ";
    int num=s.find_last_of(' ');
    cout<<s.find_last_not_of(' ')<<endl;

    cout<<s.size()<<endl;
    cout<<num;
    return 0;
}