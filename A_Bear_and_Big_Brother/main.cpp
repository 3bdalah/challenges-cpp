#include <bits/stdc++.h>
using namespace std;
int limak,bob,counter;

int main()
{
    cin>>limak>>bob;
    if(limak>bob){
        cout<<0<<endl;
        return 0;
    }else if(limak== bob){
       cout<<1<<endl;    
    }
    while(true){
        limak*=3,bob*=2,++counter;
         if(limak>bob){
             cout<<counter<<endl;
             break;
         }
    }
    return 0;
}
