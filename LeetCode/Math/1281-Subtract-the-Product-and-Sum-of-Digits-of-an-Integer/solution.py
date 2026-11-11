class Solution:
    def subtractProductAndSum(self, n: int) -> int:

        temp = n
        s = 0
        p = 1

        while(temp>0):
            digit = temp%10
            s+=digit
            p*=digit
            temp = (temp-digit)//10

        return p-s
        