#include<iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int romanNumber=0;
        int currentValue=0;
        int temp=0;
        for (int i = 0; i < s.size(); i++)
        {

            if(s[i]=='I'){
                currentValue=1;
            }
            else if(s[i]=='V'){
                currentValue=5;
            }
            else if(s[i]=='X'){
                currentValue=10;
            }
            else if(s[i]=='L'){
                currentValue=50;
            }
            else if(s[i]=='C'){
                currentValue=100;
            }
            else if(s[i]=='D'){
                currentValue=500;
            }
            else if(s[i]=='M'){
                currentValue=1000;
            }
            cout<<currentValue<<endl;
            if(temp<currentValue&&temp!=0){
                romanNumber+=currentValue-temp;
                romanNumber-=temp;
            }
            else{
                romanNumber+=currentValue;
            }
            temp=currentValue;
          
        }
        return romanNumber;        
    }
};
int main(){
    Solution s;
    int val=s.romanToInt("MCMXCIV");
    cout<<val;
    return 0;

}