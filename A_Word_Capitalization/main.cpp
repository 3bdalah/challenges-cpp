#include <bits/stdc++.h>
using namespace std;



int main()
{
     string word;
     cin>>word;
     for(int i=0;i<word.length();i++){
         if(i==0){
             
         char letter = toupper(word[i]);
           cout<<letter<<"";
        }else{
            cout<<word[i];
        }
    }
    return 0;
}
