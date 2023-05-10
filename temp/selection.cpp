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
    for (int i = 0; i < n - 1;i++){
        int min_ele = i;

        for (int j = i + 1; j < n; j++){
            if(arr[j]<arr[min_ele]){
                min_ele = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_ele];
        arr[min_ele] = temp;
    }

        // for printing purpous
        cout << "[ ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}