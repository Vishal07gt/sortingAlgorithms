#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n ;i++){
        cin>>arr[i];
    }

    for(int i =1;i<n;i++){
        for(int j =i-1;j>=0;j--){
            if(arr[j] > arr[j+1]){
                int tempo = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempo;
            }
        }
    }

    for(int i =0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}