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
        for (int j = 0; j < n - 1 - i;j++){

            if(arr[j]>arr[j+1]){

                int temp = arr[j];

                arr[j] = arr[j + 1];
                
                arr[j + 1] = temp;
            }
        }
    }

    // for printing purpous
    cout << "[ ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}