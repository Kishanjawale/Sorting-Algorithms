#include<iostream>
using namespace std;

void BubbleSort(int *Arr,int size)
{
    for(int cnt1=0;cnt1<size;++cnt1) //Loop to access each element of Array
    {
        for(int cnt2=0;cnt2<size-cnt1;++cnt2)//Loop to Comare elements of Array
        {
            if(Arr[cnt2]>Arr[cnt2 + 1]) 
            {
                int temp;
                temp=Arr[cnt2];             //
                Arr[cnt2]=Arr[cnt2 + 1];    //Swapping Logic
                Arr[cnt2 + 1]=temp;         //
            }
        }
    }   
}
int main()
{
    int size;
    int iCnt=0;
    
    cout<<"Enter the number you want to enter";
    cin>>size;
    
    int Arr[size];
    
    //Accepting Array elements
    cout<<"enter the elements";
    for(iCnt=0;iCnt<size;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    BubbleSort(Arr, size);
    
    //Displaying the Array Elements.
    cout<<"Sorted Array elements are:";
    for(iCnt=0;iCnt<size;iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }

    return 0;
}