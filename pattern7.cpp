//Floyd triangle

#include<iostream>
using namespace std;
int main(){
 int n;
 int count=1;
 cin>>n;
 for (int i = 0; i <= n; i++)
 {
    for (int j = 0; j <= i; j++)
    {
        
        cout<<count<<" ";
        count++;
        
    }
    
    cout<<endl;
 }
 
 return 0;
}