#include <bits/stdc++.h>
using namespace std;
int num;
int main()
{
    cin>>num;
    int arr[num];
    int val;
    for(int i=0;i<num;i++){
        
        cin>>arr[i];
    }
    sort(arr,arr+num);
    for(int i=0;i<num;i++)
        cout<<arr[i]<<" ";    
    
    return 0;
}
