#include <bits/stdc++.h>
using namespace std;

int n,x;
list <int> sa;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;sa.push_back(x);
    }
    int sereja = 0,dima=0;
    bool turn = true;
    while(n--){
        turn != turn;
        if(turn){
            if(sa.front() >= sa.back() ){
                dima += sa.front();
                sa.pop_back();
                continue;
            }
            dima += sa.back();
            sa.pop_back();
            continue;    
        }
        if(sa.front() >= sa.back()){
             sereja += sa.front();
             sa.pop_fron();
             continue;
        }
        sereja += sa.back();
        sa.pop_back();
        continue;
        }
        cout<<sereja<<" "<<dima<<endl;
    return 0;
}

