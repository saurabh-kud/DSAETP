//in this first we select 0th index as min element now go to each element and find which is min and then update with 
//that index


#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout << "How many element you want to insert: ";
    cin >> n;
    int arr[n];

    //taking input
    for (int i = 0; i < n;i++){
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }

    //shorting bubble
    for (int i = 0; i < n - 1; i++){
        int min = i;

        for (int j =i+1; j < n;j++){

            if( arr[min]>arr[j] ){

                min = j;
            }
        }
        int temp = arr[min];
       
        arr[min] = arr[i];
        arr[i] = temp;
    }

    // for printing purpous
    cout << "[ ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}