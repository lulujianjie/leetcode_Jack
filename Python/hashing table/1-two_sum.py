class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        container = {}
        result = []
        for idx, p1 in enumerate(nums):
            if container.__contains__(target - p1) and container[target - p1] !=idx:
                result.append(idx)
                result.append(container[target - p1])
                break
            else:
                container.update({p1: idx})
        return result
# two loops    
# class Solution:
#     def twoSum(self, nums: List[int], target: int) -> List[int]:
#         container = {}
#         for idx, p1 in enumerate(nums):
#             container.update({p1: idx})
                
#         result = []
#         for idx, p1 in enumerate(nums):
#             if container.__contains__(target - p1) and container[target - p1] != idx:
#                 result.append(idx)
#                 result.append(container[target - p1])
#                 break
#         return result

#Brute Force
# class Solution:
#     def twoSum(self, nums: List[int], target: int) -> List[int]:
#         result = []
#         for p1 in range(len(nums)-1):
#             for p2 in range(p1+1,len(nums)):
#                 if nums[p1]+nums[p2] == target:
#                     result.append(p1)
#                     result.append(p2)
#         return result
        