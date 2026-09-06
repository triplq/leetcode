#include <iostream>

/* that's a Fibonacci numbers
 we need Binet's formula
 or in programming its better to use
 fast doubling method*/

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        n+=1;
        long int a = 0, b = 1;
        for (int i = 31-__builtin_clz(n|1); i >= 0; i--)
        {
            long int c=a*(2*b-a), d=b*b+a*a;
            if (n>>i & 1)
            {
                a = d; b = c+d;
            }else
            {
                a = c; b = d;
            }
        }

        return a;
    }
};

int main()
{
    Solution sol;
    cout << sol.climbStairs(45) << endl;

    return 0;
}