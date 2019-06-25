class Solution {
public:
    int removeDuplicates(int A[], int n) {
		int pos,nSameNum = 0;
		if( n <= 1) return n;
		for(int i = 1; i <= n-1; i++){
			if(A[pos] != A[i]){ //if this element is different from the next one ,then let the next one join in.
				A[++pos] = A[i];
				nSameNum = 0;//if find different number,which means nSameNum wil be zero in this specific circumstance, sorted array .
			}
			else{
				nSameNum+=1; // nSameNum records the number of same numbers,it add with 1 if there is a new same number.
				if(nSameNum == 1){ // if there is only one number same as some one before,then it is ok to let it join in.
					A[++pos] = A[i];				
				}
			}
		}
		return pos + 1;
    }
};