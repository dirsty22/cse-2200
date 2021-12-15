// problem No 12289
#include<iostream>
using namespace std;
int main()
{
    int T;
    string o_e= "one";
    cin >> T;
    for(int t = 0; t < T; t++)
        {
        string str;
        cin >> str;
        if(str.length() >3)
            cout << 3 << endl;
        else {
            int cnt = 0;
            for(int i = 0; i < 3; i++)
            if(str[i] == o_e[i])
            cnt++;
            if(cnt >= 2)
            {
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
                }
        }
    }
}
