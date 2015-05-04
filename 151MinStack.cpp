#include <vector>
#include <iostream>
using namespace std;
class MinStack {
private:
	vector < int >  stack1,stack_record_min;
public:
	void push(int x) {
		stack1.push_back(x);
		if (stack_record_min.empty()){//if no record for min number,then this number is the min number.
			stack_record_min.push_back(x);
		} 
		else{
			if (x <= stack_record_min.back()){//if the next number is not bigger than the min number,it is also the min number.
				stack_record_min.push_back(x);
			}
		}
	}

	void pop() {
		if (stack1.back() == stack_record_min.back())
			stack_record_min.pop_back();//if the number that was popped is the min number,then pop the stack_record_min.
		stack1.pop_back();
	}

	int top() {
		return stack1.back();
	}

	int getMin() {
		return stack_record_min.back();
	}
};

int main()
{
	MinStack ms;
	ms.push(395);
	cout <<"Min:"<< ms.getMin() << endl;
	cout << "top:" << ms.top() << endl;
	cout << "Min:" << ms.getMin() << endl;
	ms.push(276);
	ms.push(29);
	cout << "Min:" << ms.getMin() << endl;
	ms.push(-482);
	cout << "Min:" << ms.getMin() << endl;
	ms.pop();
	ms.push(-108);
	ms.push(-251);
	cout << "top:" << ms.top() << endl;
	cout << "Min:" << ms.getMin() << endl;
	while (1);
	return 0;
}