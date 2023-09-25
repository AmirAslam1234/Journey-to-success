#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>temp;
	stringstream ss(str);
    char ch;
    int val;
    while (true) {
        ss>>val;
        ss>>ch;
        temp.push_back(val);
        if(ch=='0'){
            break;
        }
        ch='0';
    }
    return temp;
}

int main() {
    string str="23,4,56";
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}