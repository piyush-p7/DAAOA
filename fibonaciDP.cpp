#include<bits-stdc++.h>
using namespace std;
//Function repeatedly iterates over the series till the specifed point
int fibonacciNumber(int n){
    int i, fibonacciFirst = 0, fibonacciSecond = 1, fibonacciResult;
    if(n == 0)
        return fibonacciFirst;
    else if(n == 1)
        return fibonacciSecond;
    else
        for(i=0; i<n; i++){
            fibonacciResult = fibonacciFirst + fibonacciSecond;
            fibonacciFirst = fibonacciSecond;
            fibonacciSecond = fibonacciResult;
        } 
    return fibonacciResult;
}

//The parameters in bracket may be ignored
//They are used to input command line arguments and are not necessary
int main(int argc, char* argv){
    int n;
    cout<<"Which number in series do you want?";
    cin>>n;
    cout<<fibonacciNumber(n);
    return 0;
}