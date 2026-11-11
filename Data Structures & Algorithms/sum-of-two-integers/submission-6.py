class Solution:
    def getSum(self, a: int, b: int) -> int:
        if a == 0:
            return b
        elif b == 0:
            return a
        arrA = [a] * abs(a)
        arrB = [b] * abs(b)
        if (a > 0 and b > 0) or (a < 0 and b < 0) :
            for i in range(len(arrA)):
                arrB.append(arrA[i])
        else:
            if abs(a) > abs(b):
                for i in range(abs(b)):
                    arrA.pop()
            else:
                for i in range(abs(a)):
                    arrB.pop()

        if (a > 0 and b > 0) or (abs(a) <= abs(b) and b > 0):
            return  len(arrB)
        elif (a < 0 and b < 0) or (abs(a) <= abs(b) and b < 0):
            return -len(arrB)
        else :
            return len(arrA)