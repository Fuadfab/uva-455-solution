#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    vector<int> cou;
    for(int i=0;i<t;i++)
    {
        cout << endl;
        cin >> str;
        int c=0;
        int len = str.length();
        string st = str;
        for(int i=0;i<len;i++)
        {
            c = 0;
            for(int j=0;j<len;j++)
            {
                if(str[i]==st[j])
                {
                    c++;
                    st[j] = '1';
                }
            }
            if(c==0)
                break;
            cou.push_back(c);
        }
        int k=0;
        for(int i=1;i<cou.size();i++)
        {
            int xx = cou[0];
            if(xx == cou[i])
            {
                k++;
            }

        }
        if(k==cou.size()-1)
        {
             cout <<cou.size() <<endl;
        }
        else
        {
            cout <<len <<endl;
        }
        cou.clear();

    }
}
