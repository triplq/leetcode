#include <iostream>

using namespace std;

class Solution{
public: 
    bool isValid(string s){
        int r, f, sq = 0;
        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case '(':
                    r++;
                    break;
                case '{':
                    f++;
                    break;
                case '[':
                    sq++;
                    break;
                case ')':
                    r--;
                    break;
                case '}':
                    f--;
                    break;
                case ']':
                    sq--;
                    break;
            }
        }

        cout << 'r' << r << 'f' << f << 's' << sq << '\n';
        
        if (r != 0 || f != 0 || sq != 0){
            return false;
        }else{
            return true;
        }
    }
};

int main(){
    Solution sol;

    cout << sol.isValid("()") << '\n';

    return 0;
}