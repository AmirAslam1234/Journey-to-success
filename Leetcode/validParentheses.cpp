#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        
        if(s.size()%2==1){
            return false;
        }else{
            stack<char>stacks;
            
            for (int i = 0; i < s.size(); i++)
            {                              
                if(s[i]=='{'||s[i]=='['||s[i]=='('){
                    stacks.push(s[i]);
                }
                else{
                     if (stacks.size()==0){
                        return false;
                    }
                    if(((stacks.top()=='{'&&s[i]=='}')||(stacks.top()=='('&&s[i]==')')||(stacks.top()=='['&&s[i]==']'))){
                        stacks.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
             if(stacks.size()!=0){
            return false;
        }
        }
         
        return true;
    }
};
int main(){
    // string str="){";
    string str="[{()[]}()]";
    Solution obj;
    cout<<obj.isValid(str);


    return 0;
}