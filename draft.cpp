#include <iostream>
#include <string>
using namespace std;

void get(string x)
{
    cout << x;
}

int main()
{
    string a = "abcde";
    string b = "abc";
    string c = "a";
    get(a + b);
    get(b + c);
    return 0;
}