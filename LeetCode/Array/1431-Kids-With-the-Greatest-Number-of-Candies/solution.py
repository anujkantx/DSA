class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:

        maxx = max(candies)
        ans = []
        for x in candies:
            if (x + extraCandies)>=maxx:
                ans.append(True)
            else:
                ans.append(False)
        
        return ans

        