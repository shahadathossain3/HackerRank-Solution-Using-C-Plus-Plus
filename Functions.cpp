#include <iostream>
using namespace std;
int main()
{
    int num, max, min;


    cin>>num;
    max = min = num;

    for (int i = 0; i < 3; i++)
    {
       cin>>num;
        if (max < num)
            max = num;
        else if (min > num)
            min = num;
    }

    cout<< max;
    return 0;
}
