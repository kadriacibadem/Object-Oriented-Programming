#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    for (int x = 1; x < 100; x++)
    {
        for (int y = 1; y < 100; y++)
        {
            for (int z = 1; z < 100; z++)
            {
                if ((pow(z, 2) == pow(x, 2) + pow(y, 2)) && (x < y))
                {
                    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
                }
            }
        }
    }
    
}
