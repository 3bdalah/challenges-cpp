#include <bits/stdc++.h>
using namespace std;
int Anton,Danik;
int main()
{

    int sizeString;
    cin>>sizeString;
    char winners;
    for(int i=0;i<sizeString;i++){
         cin>> winners;
        if(winners == 'A'){
            Anton++;
        }else{
            Danik++;
        }
    }
    if(Anton>Danik)
        cout<<"Anton"<<endl;
    else if(Anton<Danik)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    
    return 0;
}
