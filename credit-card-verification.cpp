#include <iostream>

using namespace std;

int multiply(int num)
{
    int result, tmp;
    result = num * 2;
    if (result >= 10)
    {
        tmp = (result % 10) + (result / 10);
        return tmp;
    }
    else
    {
        return result;
    }
}

int main()
{
    long int cardNum;
    cout << "Please write card number:";
    cin >> cardNum;
    int total = 0, total2;
    long int cardNumTmp = cardNum;
    for (int i = 1; i <= 8; i++)
    {
        total += multiply((cardNum % 100) / 10);
        cardNum = cardNum / 100;
    }
    for (int i = 1; i <= 8; i++)
    {
        total += cardNumTmp % 10;
        cardNumTmp = cardNumTmp / 100;
    }
    if (total % 10 == 0)
    {
        cout << "True card number";
    }
    else
    {
        cout << "False card number";
    }
}
