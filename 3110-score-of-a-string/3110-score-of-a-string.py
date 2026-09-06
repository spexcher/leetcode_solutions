class Solution:
    def scoreOfString(self, s: str) -> int:
        ans = 0
        for i in range(len(s)-1):
            first_ascii = ord(s[i])
            second_ascii = ord(s[i + 1])
            ans = ans + abs(first_ascii - second_ascii)
        return ans
