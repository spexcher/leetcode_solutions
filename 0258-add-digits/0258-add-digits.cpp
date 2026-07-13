class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            // breaking logic
            int s = 0;
            while (num > 0) {
                int d = num % 10;
                s = s + d;
                num = num / 10;
            }
            // at this place
            num = s;
        }
        return num;
    }
};