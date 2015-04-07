//Given a string s consists of upper/lower-case alphabets and empty space characters ' ', 
//return the length of last word in the string.
//If the last word does not exist, return 0.
//Note: A word is defined as a character sequence consists of non-space characters only.
//For example,
//Given s = "Hello World",
//return 5.
#include <iostream>

using namespace std;

int lengthOfLastWord(const char *s)
{
    if (s == "" || s == " ")
        return 0;
    int len = strlen(s);
    int count = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            if (!count)
                continue;
            else
                return count;
        }
        count++;
    }
}

void testCase_lengthOfLastWord()
{
    char *s1 = "hello world";
    char *s2 = " hello world ";
    char *s3 = "";
    char *s4 = "wo shi yang nan";
    char *s5 = " ";
    char *s6 = "world";

    cout<<lengthOfLastWord(s1)<<endl;
    cout<<lengthOfLastWord(s1)<<endl;
    cout<<lengthOfLastWord(s3)<<endl;
    cout<<lengthOfLastWord(s4)<<endl;
    cout<<lengthOfLastWord(s5)<<endl;
    cout<<lengthOfLastWord(s6)<<endl;
}

