#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int rem[20],i=0;
    int value=0;
    int largest=0;
    while(n>0)
    {
        rem[i]=n%2;
        i++;
        n=n/2;
    }
    for(int j=i-1; j>=0; j--){
        if(rem[j]==1){
            value++;
        }
        if(value>=largest)
            largest=value;
        if (rem[j]==0){
            value=0;
            continue;
        }
    }
   cout<<largest;
    return 0;
}
