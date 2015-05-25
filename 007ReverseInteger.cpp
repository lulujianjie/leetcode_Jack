#include <iostream>

#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX-1)
using namespace std;

class Solution {
public:
	int reverse(int x) {
		//位数不确定
		int y = 0;
		if (x )
		while (x != 0 ){
			if (y > INT_MAX / 10 || y < INT_MIN / 10){
				return 0;
			}
			y = y * 10 + x % 10;
			x /= 10;
		}
		return y;
	}
};
int main()
{
	int x = 1534236469;
	Solution s;
	cout << s.reverse(x) << endl;
	while (1);
}