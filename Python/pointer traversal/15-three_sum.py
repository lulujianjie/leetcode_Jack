#sort
#for i in 0-len-2:
#p_start,p_end 
# while:
# if >: p_end move left if <: p_start move right
# if nums[i] == nums[i-1] : i+1
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        results = []
        length = len(nums)
        if length < 3:
            return results
        p_start = 1
        p_end = length-1
        for i in range(length-2):
            p_start = i+1
            p_end = length-1
            if i > 0 and nums[i-1] == nums[i]:
                continue
            while p_start < p_end:
                if nums[i] + nums[p_start] + nums[p_end] == 0:
                    results.append([nums[i],nums[p_start],nums[p_end]])
                    p_start += 1
                    while p_start < p_end and nums[p_start] == nums[p_start-1]:
                        p_start += 1
                        
                elif nums[i] + nums[p_start] + nums[p_end] > 0:
                    p_end -= 1
                    while p_start < p_end and nums[p_end] == nums[p_end+1]:
                        p_end -= 1
                else:
                    p_start += 1
                    while p_start < p_end and nums[p_start] == nums[p_start-1]:
                        p_start += 1
        
        return results
                
            
            
        