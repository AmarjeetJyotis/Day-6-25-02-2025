#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80};
    for(int i=0; i<arr.size(); i++){
        int element=arr[i];
        // For every element traversal from agela wala element 
        for(int j=i+1; j<arr.size(); j++){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    } 
return 0;
}