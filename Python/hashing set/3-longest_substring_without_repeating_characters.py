class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        pre_container = []
        length = len(pre_container)
        if len(s) <= 1:
            return len(s)
        for p1 in range(0,len(s)-1):
            container = [s[p1]]
            
            
            for p2 in range(p1+1,len(s)):
                if s[p2] not in container:
                    container.append(s[p2])
                    #print(container)
                else:
                    if len(container) > length:
                        pre_container = container
                        length = len(pre_container)
                    break
            if len(container) > length:
                pre_container = container
                length = len(pre_container)        
        return length
#By using HashSet as a sliding window, checking if a character in the current can be done in O(1)
#using set is 3 times faster than using list.