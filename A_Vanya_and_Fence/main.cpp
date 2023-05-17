#include <bits/stdc++.h>

using namespace std;

int n,height,cnt_num;

int main()
{

        
    cin>>n>>height;
    
    
    for(int i;i<n;i++){
        int hFriends; 
        cin>>hFriends;
        if(hFriends<=height){
            cnt_num++;
        }else{
            cnt_num+=2;
        }
    }
    cout<<cnt_num<<endl;
    return 0;
}
