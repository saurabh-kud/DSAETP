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
    for (int i = 1; i < n;i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }

        // for printing purpous
        cout << "[ ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}