#include<iostream>
using namespace std;

//This Function sort the Array in Ascending Order
void BubbleSortAscending(int *Arr,int size)
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


//This Function sort the Array in Descending Order
void BubbleSortDescending(int *Arr,int size)
{
    for(int cnt1=0;cnt1<size;++cnt1) //Loop to access each element of Array
    {
        for(int cnt2=0;cnt2<size-cnt1;++cnt2)//Loop to Comare elements of Array
        {
            if(Arr[cnt2]<Arr[cnt2 + 1]) 
            {
                int temp;
                temp=Arr[cnt2];             //
                Arr[cnt2]=Arr[cnt2 + 1];    //Swapping Logic
                Arr[cnt2 + 1]=temp;         //
            }
        }
    }   
}

//Entry point Function.
int main()
{
    int size;
    int iCnt=0;
    int choice =0;
    cout<<"Enter the number you want to enter"<<endl;
    cin>>size;
    
    int Arr[size];


    //Accepting Array elements
    cout<<"enter the elements"<<endl;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Enter 1 to Sort the Array in Ascending order."<<endl;
    
    cout<<"Enter 2 to Sort the Array in Descending order."<<endl;
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        BubbleSortAscending(Arr, size);

        //Displaying the Array Elements.
    
        cout<<"Sorted Array elements are(Ascending Order):"<<endl;
            for(iCnt=0;iCnt<size;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        break;
    
    case 2:
            BubbleSortDescending(Arr, size);
            
            //Displaying the Array Elements.
            cout<<"Sorted Array elements are(Descending Order):"<<endl;
            for(iCnt=1;iCnt<=size;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }

        break;
    
    default:
        cout<<"Invalid choice...";
        break;
    }
    
    return 0;
}
