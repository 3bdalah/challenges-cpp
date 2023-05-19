#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,cnt=0;
    cin>>num;
    string word;cin>>word;
    for(int i=0;i<num;i++){
        if(word[i]==word[i+1]){
            cnt++;}
        }
        cout<<cnt<<endl;
    return 0;
}
