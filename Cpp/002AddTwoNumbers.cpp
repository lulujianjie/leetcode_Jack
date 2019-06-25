#include <iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		
		int val1 = 0, val2 = 0, i = 0, carry = 0;
		
		ListNode *l = NULL;
		ListNode *l_end = NULL;
		ListNode *l_new = NULL;
		
		val1 = l1->val;
		val2 = l2->val;
		l1 = l1->next;
		l2 = l2->next;
		l_new = (ListNode *)new ListNode((val1 + val2 + carry) % 10);
		l_new->next = NULL;
		l = l_new;
		carry = (val1 + val2 + carry) / 10;
		l_end = l;
		while (l1 != NULL || l2 != NULL){
			if (l1 == NULL){
				val2 = l2->val;
				l2 = l2->next;
				val1 = 0;
			}
			else if (l2 == NULL){
				val1 = l1->val;
				l1 = l1->next;
				val2 = 0;
			}
			else{
				val1 = l1->val;
				val2 = l2->val;
				l1 = l1->next;
				l2 = l2->next;
			}
			
			l_new = (ListNode *)new ListNode((val1 + val2 + carry)%10);
			l_new->next = NULL;
			carry = (val1 + val2 + carry) / 10;

			l_end->next = l_new;
			l_end = l_new;
		}
		if (carry != 0){
			l_new = (ListNode *)new ListNode(carry);
			l_new->next = NULL;
			l_end->next = l_new;
			l_end = l_new;
		}
		return l;

	}
};

int main()
{
	ListNode *l1, *l2;
	ListNode *l;
	l1 = (ListNode *)new ListNode(1);
	l2 = (ListNode *)new ListNode(1);
	l1->next = (ListNode *)new ListNode(2);
	l2->next = (ListNode *)new ListNode(9);
	l1->next->next = (ListNode *)new ListNode(2);
	l2->next->next = (ListNode *)new ListNode(7);
	Solution s;
	l = s.addTwoNumbers(l1, l2);
	while (l != NULL){
		cout << l->val << endl;
		l = l->next;
	}
	while (1);
}