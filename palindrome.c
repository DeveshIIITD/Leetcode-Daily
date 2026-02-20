Code
C
bool isPalindrome(int x) {
    if (x < 0){
        return false;
    }
    int temp = x;
    int ld;
    long y = 0;
    while (temp>0){
        ld = temp%10;
        y = y*10 + ld;
        temp /=10;
    }
    return x==y;
}