#include <bits/stdc++.h>
using namespace std;


int main()
{
   int cnt_lowe,cnt_up;
   string word;
   cin>>word;
   for(int i=0;i<word.length();++i){
        if(isLower(word[i])){
            cnt_lowe6++;
        }else{
            cnt_up++;
        } 
    }
   
   return 0;
}
