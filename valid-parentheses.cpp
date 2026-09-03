#include <iostream>
#include <stack>

using namespace std;

class Solution{
public: 
    bool isValid(string s){
        stack<char> brac;
        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case ')':
                    if(brac.empty() || brac.top() != '(')
                        return false;
                    brac.pop();
                    break;
                case '}':
                    if(brac.empty() || brac.top() != '{')
                        return false;
                    brac.pop();
                    break;
                case ']':
                    if(brac.empty() || brac.top() != '[')
                        return false;
                    brac.pop();
                    break;
                default:
                    brac.push(s[i]);
            }
        }

        if (!brac.empty()){
            return false;
        }else{
            return true;
        }

    }
};

int main(){
    Solution sol;

    cout << sol.isValid("]") << '\n';

    return 0;
}