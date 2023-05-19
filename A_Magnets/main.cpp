#include <bits/stdc++.h>
using namespace std;


int main()
{

    int s_arr;cin>>s_arr;
    int val[s_arr],cnt=0;
    
    for(int i=0;i<s_arr;i++)
        cin>>val[i];
        
    for(int i=0;i<s_arr;i++){
            if(val[i] != val[i+1]){
               cnt++;    
            }
    }
    cout<<cnt<<endl;
    return 0;
}
