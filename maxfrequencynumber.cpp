#include <iostream>
using namespace std;

#include<unordered_map>
int highestFrequency(int input[], int n) {
    // Write your code here
   int maxf=1;
    int pos=0;
    unordered_map <int,int> m;
    
    for(int i=n-1;i>=0;i--){
        if(m.count(input[i])==0)
            m[input[i]]=1;
        else{
            m[input[i]]+=1;
            if(maxf<=m[input[i]]){
                pos=i;
                maxf=m[input[i]];
            }
        }
    }
    return input[pos];
     	

}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}