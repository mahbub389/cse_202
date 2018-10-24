#include <bits/stdc++.h>
using namespace std;

int ff(char sign, int var1, int var2)
{
    if (sign == '+') return var1 + var2;
    else if (sign == '-') return var1 - var2;
    else if (sign == '*') return var1*var2;
    else if (sign == '/') return var1/var2;
    else cout<<"Unstrected Error \n";
	return -1;
}

int Postfix(string str)
{
    stack<int> s;
    for (int i = 0;str[i]; i++){
        if (str[i] == ' ' || str[i] == ',') continue;
        else if (str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            int var2 = s.top();
            s.pop();
            int var1 = s.top();
            s.pop();
            int result = ff(str[i], var1, var2);
            s.push(result);
        }
        else if (isdigit(str[i])){
            int operand = 0;
            while (i < str.size() && (str[i] >= '0' && str[i] <= '9')){
                operand = operand*10 + (str[i]-'0');
                i++;
            }
            i--;
            s.push(operand);
        }
    }
    return s.top();
}

int main()
{
    string str = "5, 6, 2, +, *, 12, 4, /, -";
    int ans = Postfix(str);
    cout<<ans<<endl;
    return 0;
}
