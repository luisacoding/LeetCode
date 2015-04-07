//Determine whether an integer is a palindrome. Do this without extra space.
//
//Some hints:
//Could negative integers be palindromes? (ie, -1)
//If you are thinking of converting the integer to string, note the restriction of using extra space.
//You could also try reversing an integer. However, if you have solved the problem "Reverse Integer",
//you know that the reversed integer might overflow. How would you handle such case?
//
//There is a more generic way of solving this problem.
#include <vector>

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    vector<int> bit;
    while (x)
    {
        bit.push_back(x % 10);
        x /= 10;
    }
    while(bit.size() > 1)
    {
        if (bit.front() != bit.back())
            return false;
        // if they are equal
        bit.pop_back();
        reverse(bit.begin(), bit.end());
        bit.pop_back();
    }
    return true;
}

