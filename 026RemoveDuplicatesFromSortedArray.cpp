/*class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n <= 1) return n;
        int pos = 0;
        for(int i = 0; i < n-1; i++){
            if(A[pos] == A[i+1]){
                
            }
            else{
                A[++pos] = A[i+1];
            }
        }
        return pos + 1;
    }
};*/
class Solution {
public:
    int removeDuplicates(int A[], int n) {
		int pos = 0;
		if( n <= 1) return n;
		for(int i = 1; i <= n-1; i++){
			if(A[pos] != A[i]){ //if this element is different from the next one ,then let the next one join in.
				A[++pos] = A[i];
			}
			
		}
		return pos + 1;
    }
};