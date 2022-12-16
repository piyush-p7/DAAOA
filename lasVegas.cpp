#include<bits-stdc++.h>
using namespace std;
void lasVegas(vector<int> arr, int k){
    int num = 0;
    do{
        int i = rand() % arr.size()+1;
        cout<<"i - "<<i<<endl;
        int j = rand() % arr.size()+1;
        cout<<"j - "<<j<<endl;
        if(i!=j && arr[i]==arr[j] && k<arr.size() && arr[i]>0 && arr[j]>0){
            cout<<"ith element - "<<arr[i]<<endl;
            cout<<"jth element - "<<arr[j]<<endl;
            num = arr[i];
            arr[i] = -1;
            arr[j] = -1;
            k+=2;
            
        }
    }while(k<2);
    cout<<num<<" is founded "<<k<<"-th times.\n";   
}

void printArr(vector<int> &arr){
    for(int i = 0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,1,6,7,1};
    int k = 0;
    lasVegas(arr, k);
    printArr(arr);
}