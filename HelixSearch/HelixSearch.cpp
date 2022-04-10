#include<iostream>

using namespace std;

int HelixSearch(int a[], int size, int x)
{
    int c=0, k=0;

    for(int i=0;i<size;i++)
    {
        if(a[i+c] == tar)
        {
            cout<<"Found! at "<<i+c<<"\n";
            k = 0;
            break;
        }
        c++;
        if(a[i+c] == tar)
        {
            cout<<"Found! at "<<i+c<<"\n";
            k = 0;
            break;
        }
        else
        {
            k = 1;
        }
    }
    if(k == 1)
    cout<<"Not Found!\n";
    return 0;

}

int main()
{
    int a[9] = {2,6,4,7,8,3,9,1,5};
    int x = 4;
    int size = sizeof(a)/sizeof(a[0]);

    HelixSearch(a, size, x);
    
    return 0;
}
