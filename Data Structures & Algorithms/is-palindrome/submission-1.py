class Solution:
    def isPalindrome(self, s: str) -> bool:
        check =""
        for i in s:
            if i.isalnum():
                check += i
                
        check = "".join(check.lower())
        l, r = 0 , len(check) - 1
        while l <= r:
            if check[l] != check[r]:
                return False
            l+=1
            r-=1
        return True