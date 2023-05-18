#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    int sum = str1.compare(str2);
    if(sum == 0)
        cout<<0;
    else if(sum>0)
        cout<<1;
    else 
        cout<<-1;
    return 0;
}
