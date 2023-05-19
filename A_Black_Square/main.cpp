#include <bits/stdc++.h>
using namespace std;

int a1,a2,a3,a4,sum;

int main()
{
     cin>>a1>>a2>>a3>>a4;
    string word;cin>>word;
    for(int i=0;i<word.length();i++){
//        int val = (int)word[i];
             if(word[i] - '0'== 1)
                 sum+=a1;
            else if(word[i]-'0'==2)
                sum+=a2;                
            else if(word[i] - '0'==3)
                sum+=a3;
            else if(word[i] -'0'==4)
                sum+=a4;
            
    }
    
    cout<<sum<<endl;
    return 0;
}
