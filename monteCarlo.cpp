#include<bits-stdc++.h>
using namespace std;
 
void monteCarlo(vector<int>&arr, int value, int times){
    for (int i = 0; i < times; i++){
        int j = rand() % arr.size();
        cout<<"Value of j: "<<j<<" ,Element at j: "<<arr[j]<<endl;
        if(arr[j]==value){
            cout<<"\nFounded";
            return;
        }
    }
    cout<<"\nNot Founded";
}
 
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,0};
    int value;
    cout<<"Enter the element to check: ";
    cin>>value;
    int times = 0;
    cout<<"How many times to run the MonteCarlo Function: ";
    cin>>times;
    monteCarlo(arr, value, times);
}
