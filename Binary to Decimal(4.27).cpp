#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,tmp,tmp2;
    cin>>num;
    int value=0;
    tmp2=num;
    unsigned int number_of_digits = 0;

    do {
        ++number_of_digits;
        tmp2 /= 10;
    } while (tmp2);

    for(int i=0;i<number_of_digits;i++){
        tmp=num%10;
        if(tmp){
            value=value+pow(2,i);
        }
        num/=10;
    }
    cout<<value<<endl;
}
