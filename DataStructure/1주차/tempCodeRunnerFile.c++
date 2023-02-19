#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    
    stack<char> stk;
    vector<char> v;
    for(char c: str)
    {
        if(c >='A' && c <= 'Z')
            v.push_back(c);
            
        else
        {
            if(stk.empty())
            {
                stk.push(c);
                continue;
            }
            
            if(c == '(')
                stk.push(c);

            else if(c == ')')
            {
                while(stk.top() == '(')
                {
                    v.push_back(stk.top());
                    stk.pop();
                }
            }

            
            else if(c == '+' || c == '-')
            {
                if(stk.top() == '(')
                {
                    stk.push(c);
                }
                    
                else 
                {
                    while(!stk.empty())
                    {
                        if(stk.top() == '(')
                        {
                            stk.push(c);
                            break;
                        }
                        else
                        {
                            v.push_back(stk.top());
                            stk.pop();
                        }
                    }
                    if(stk.empty())
                        stk.push(c);
                }
            }

            else if(c == '*' || c == '/')
            {
                if(stk.top() != '*' || stk.top() != '/')
                    stk.push(c);
                else
                {
                    while(!stk.empty())
                    {
                        if(stk.top() != '*' || stk.top() != '/')
                        {
                            stk.push(c);
                            break;
                        }
                        else
                        {
                            v.push_back(stk.top());
                            stk.pop();
                        }
                    }
                    if(stk.empty())
                        stk.push(c);
                }
            }
        }
    }  

    while(!stk.empty())
    {
        v.push_back(stk.top());
        stk.pop();
    }

    for(char c: v)
    {
        if(c != '(')
            cout<<c;
    }
    
    cout<<"\n";

    return 0;
}