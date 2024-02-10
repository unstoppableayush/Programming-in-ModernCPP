#include<iostream>
#include<CSTRING>
#include<STACK>

using namespace std;

int main(){
    char str[10] = "COMPUTER";

    stack<char> s1 , s2;
    int i ;
    for ( i = 0; i < strlen(str)/2; i++)
    {
        s1.push(str[i]);
    }

    for ( ; i < strlen(str); i++)
    {
        cout<<i;
        s2.push(str[i]);
    }

    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
    
    
    
    return 0;
}