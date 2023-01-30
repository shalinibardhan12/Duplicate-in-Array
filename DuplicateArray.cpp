#include<iostream>
using namespace std;
int DuplicateArray(int arr[],int size)
{
int duplicate =0;
for(int i =0;i<size;i++)

{
    for(int j =i;j<size;j++)
    {
        if(arr[i]==arr[j+1])
        {
        duplicate = arr[i];
        break;
        }
    }
}
return duplicate;
}
int main()
{
    int size;
    int duplicate;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[20];
    cout<<"enter the element in given array"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    duplicate = DuplicateArray(arr,size);
    cout<<"Duplicate element in this array is: " <<duplicate<<endl;
    return 0;

}
