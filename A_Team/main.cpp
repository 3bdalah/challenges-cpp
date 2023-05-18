#include <bits/stdc++.h>
using namespace std;
int cnt,cnt_D,cnt_A,val_height;
int main()
{
    int num_size,p1,p2,p3;
    cin>>num_size;
    for(int i=0;i<num_size;i++){
        cin>>p1>>p2>>p3;
    if((p1+p2+p3) >= 2){
           cnt++;
        }    
    }
    cout<<cnt<<endl;
    return 0;
}
