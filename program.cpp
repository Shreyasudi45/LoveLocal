#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(const string& s) 
{
    int length = 0;
    bool counting = false;
    for (int i = s.length() - 1; i >= 0; --i) 
    {
        if (s[i] != ' ') 
        {
            counting = true;
            ++length;
        } 
        else 
        {
            if (counting) 
            {
                break;
            }
        }
    }

    return length;
}
int main() {
    string s;
    cout << "s = ";
    getline(cin, s);
    int result = lengthOfLastWord(s);
    cout << result <<endl;
}