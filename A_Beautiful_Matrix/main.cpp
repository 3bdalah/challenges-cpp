#include <bits/stdc++.h>
using namespace std;
int counter;
int val;
int main()
{
    
    for(int i=1;i<=5;++i){
        for(int j=1;j<=5;++j){
            cin>>val;
            if(val == 1){
                counter = abs(i-3)+abs(j-3);
            }
            
        }    
    }
    cout<<counter<<endl;
    return 0;
}
