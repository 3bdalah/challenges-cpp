#include <bits/stdc++.h>
using namespace std;


int num,Crimenals,Officer;

int main()
{
    cin>>num;
    for(int i=0;i<num;i++){
      int val;cin>>val;
      if(val==-1&&Officer<1){
          Crimenals++;
        }else if(val == -1 && Officer>=1){
            Officer--;
            
        }else{
            Officer+=val;
        }
    }
    cout<<Crimenals<<endl;
    return 0;
}
