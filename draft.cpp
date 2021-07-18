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
    get(a + b);
    return 0;
}