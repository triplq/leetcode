#include <iostream>

using namespace std;

/*we should use Newtons method specifically Hero's algorithm
to calculate sqrt with:
(xn^2+z)/(2*x0)=xn+1 where z- is our sqrt(x)
x0 should be number that is bigger then resault of sqrt(x)
=> this number shuold be x itslef*/

class Solution{
public:
    int mySqrtx(int x){
        if(x<=0) return 0;
        if (x==1) return 1;
        int x0 = x;
        while(x0*x0 > x){
            x0 = ((x0*x0)+x)/(2*x0);
        }
        return x0;
    }
};

int main(){
    Solution sol;

    cout << sol.mySqrtx(4) << '\n';

    return 0;
}