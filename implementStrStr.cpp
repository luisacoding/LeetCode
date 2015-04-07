//Implement strStr().
//
//Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
#include <iostream>

using namespace std;

int strStr(char *haystack, char *needle)
{
    int len;
    if (len = strlen(needle) == 0)
        return -1;
    int i = 0;
    for (; *haystack; ++haystack)
    {
        if (//strncmp(haystack, needle, len) == 0 &&
            *haystack == *needle)
            return i;
        else
            i++;
    }
    return -1;
}

void testCase_strStr()
{
    char *haystack = "hello world, i am Marin Young";
    char *s1 = "hello";
    char *s2 = "world";
    char *s3 = "i";
    char *s4 = "am";
    char *s5 = "Marin";
    char *s6 = "Young";

    cout<<strstr(haystack, s1)<<'\t'<<strStr(haystack, s1)<<endl;
    cout<<strstr(haystack, s2)<<'\t'<<strStr(haystack, s2)<<endl;
    cout<<strstr(haystack, s3)<<'\t'<<strStr(haystack, s3)<<endl;
    cout<<strstr(haystack, s4)<<'\t'<<strStr(haystack, s4)<<endl;
    cout<<strstr(haystack, s5)<<'\t'<<strStr(haystack, s5)<<endl;
    cout<<strstr(haystack, s6)<<'\t'<<strStr(haystack, s6)<<endl;

}
