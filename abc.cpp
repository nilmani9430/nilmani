#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a=0,b=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                a++;
            }
            else if(arr[i]==-1)
            {
                b++;
            }
        }
        cout<<a<<endl<<b<<endl;
    
        
    return 1;
        
        
    
}