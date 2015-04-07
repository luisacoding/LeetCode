//Given two binary strings, return their sum (also a binary string).
//
//For example,
//a = "11"
//b = "1"
//Return "100".
#include <cstring>

string binaryAdder(char a, char b, int &carry)
{
    int aa = (int)(a - '0'), bb = (int)(b - '0'), res;
    cout<<carry<<'\t'<<aa<<'\t'<<bb<<endl;

    carry = (aa & bb) | (carry & (aa ^ bb));
    res = (aa ^ bb) ^ carry;

    cout<<"carry: "<<carry<<"\tresult: "<<res<<endl;
    char result[1];
    sprintf(result, "%d", res);
    return result;
}

string addBinary(string a, string b)
{
    if (a == "") return b;
    if (b == "") return a;

    string res = "";
    int indexA = a.length() - 1;
    int indexB = b.length() - 1;
    int carry = 0;
    string bit;
    for (; indexA >= 0 && indexB >= 0; indexA--, indexB--)
    {
        bit = binaryAdder(a[indexA], b[indexB], carry);
        res = bit + res;
    }
    while (indexA >= 0)
    {
        bit = binaryAdder(a[indexA--], '0', carry);
        res = bit + res;
    }
    while (indexB >= 0)
    {
        bit = binaryAdder('0', b[indexB--], carry);
        res = bit + res;
    }
    if (carry)
        res.insert(res.begin(), '1');
    return res;
}

