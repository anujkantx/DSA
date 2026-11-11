class Solution:
    def smallerNumbersThanCurrent(self, nums: list[int]) -> list[int]:

        freq = [0]*101
        ans = []

        for x in nums:
            freq[x] += 1
        
        for i in range(1, 101):
            freq[i] = freq[i-1] + freq[i]

        for x in nums:
            if x==0:
                ans.append(0)
            else:
                ans.append(freq[i-1])
        
        return ans