#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string num=to_string(x);
        string reverseNumber="";
        for (int i = 0; i <num.size(); i++)
        {
            if(num[i]!=num[(num.size()-1)-i]){
                return false;
            }
        }
        
        return true; 
    }
};
int main(){
    Solution obj;
    if(obj.isPalindrome(10)){
        cout<<"Number is Palindrome";
    }
    else{
         cout<<"Number is not Palindrome";

    }
    return 0;
}