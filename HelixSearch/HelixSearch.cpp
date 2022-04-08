#include<iostream>
using namespace std;

int HelixSearch(int a[], int tar)
{
    int c=0; //taking c for jumping in helix
    int k=0; //for not found reference

    for(int i=0;i<9;i++)
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
    int a[9] = {2,6,4,7,8,3,9,1,5}; //array of 9 elements
    int tar = 4; //target value to be searched

    HelixSearch(a, tar);
    
    return 0;
}
