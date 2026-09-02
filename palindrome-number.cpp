#include <iostream>

class Solution{
    public:
        int isPalindrome(int x){
            if (x<0) return false;
            long long int d = 1;
            long long int a = 0;
            while (x / d - 10 >= 0){
                d *= 10;
            }
            d*=10;
            
            for (long long int i = 1; i < d; i*=10){
                a += x%(i*10)/i;
                a*=10;
            }

            return a/10;
        }
};

int main(){
    Solution sol;

    // std::cout << 12345%100/10 << '\n';


    std::cout << sol.isPalindrome(12345) << '\n';
}