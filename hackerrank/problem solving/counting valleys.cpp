#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s)
{
    int i,v=0,lvl=0;
    for(i=0;i<n;i++)
    {
        if(s[i] == 'D')
        lvl--;

        if(s[i] == 'U')
        lvl++;

        if(lvl == 0 && s[i] == 'U')
        v++;
    }
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
